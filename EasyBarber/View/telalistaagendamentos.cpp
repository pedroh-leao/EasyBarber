#include "telalistaagendamentos.h"
#include "ui_telalistaagendamentos.h"


TelaListaAgendamentos::TelaListaAgendamentos(Pessoa* pessoa, Barbearia* barbearia, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TelaListaAgendamentos)
{
    this->pessoa = pessoa;
    this->barbearia = barbearia;
    controller_horario = new Controller_Horario();

    ui->setupUi(this);

    listaHorarios();
}

TelaListaAgendamentos::~TelaListaAgendamentos()
{
    delete ui;
}

void TelaListaAgendamentos::listaHorarios(){
    string text;
    for(auto it = pessoa->horariosAgendadosBegin(); it < pessoa->horariosAgendadosEnd(); it++){
        text = (*it)->getData() + '\t' + (*it)->getHora() + '\t' + (*it)->getEmailCliente() + '\t' + (*it)->getEmailBarbeiro();

        ui->listWidget->addItem(QString::fromStdString(text));
    }
}

void TelaListaAgendamentos::on_voltarBtn_clicked()
{
    //verifica se a pessoa e um cliente ou um barbeiro, e volta para tela adequada.
    if(Cliente* cliente = dynamic_cast<Cliente*>(pessoa)){
        TelaInicialCliente *telaInicialCliente = new TelaInicialCliente(barbearia, cliente);
        telaInicialCliente->show();
        this->close();
    }
    else{
        //Barbeiro* barbeiro = dynamic_cast<Barbeiro*>(pessoa);
        //voltar para telaInicial do barbeiro
        this->close();
    }
}


Horario* horarioFromString(string horarioText){

    stringstream ss(horarioText);
    vector<string> values;
    string temp;
    while (getline(ss, temp, '\t')) {
        values.push_back(temp);
    }

    string data = values[0];
    string hora = values[1];
    string email_cliente = values[2];
    string email_barbeiro = values[3];

    return new Horario(data, hora, email_cliente, email_barbeiro);
}

void TelaListaAgendamentos::on_desmarcarBtn_clicked()
{
    QSqlQuery query;
    QList<QListWidgetItem*> itensSecionados = ui->listWidget->selectedItems();


    for(int i = 0; i < itensSecionados.length(); i++){
        string horarioText = itensSecionados[i]->text().toStdString();
        Horario * horario = horarioFromString(horarioText);
        controller_horario->deletarHorario(horario, pessoa, barbearia);
    }

    ui->listWidget->clear();
    listaHorarios();
}

