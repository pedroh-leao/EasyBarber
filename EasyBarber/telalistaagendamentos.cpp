#include "telalistaagendamentos.h"
#include "ui_telalistaagendamentos.h"
#include "telainicialcliente.h"
#include "barbeiro.h"

TelaListaAgendamentos::TelaListaAgendamentos(Pessoa* pessoa, Barbearia* barbearia, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TelaListaAgendamentos)
{
    this->pessoa = pessoa;
    this->barbearia = barbearia;

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
        text = (*it)->getData() + '\t' + (*it)->getHora();

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
        Barbeiro* barbeiro = dynamic_cast<Barbeiro*>(pessoa);
        //voltar para telaInicial do barbeiro
        this->close();
    }
}


void TelaListaAgendamentos::on_desmarcarBtn_clicked()
{
    QSqlQuery query;
    QList<QListWidgetItem*> itensSecionados = ui->listWidget->selectedItems();
    Horario horario;

    for(int i = 0; i < itensSecionados.length(); i++){
        string horarioText = itensSecionados[i]->text().toStdString();
        horario.setData(horarioText.substr(0, 10));
        horario.setHora(horarioText.substr(11, 16));

        string sqlText = "select * from tb_horario where (email_cliente = '" + pessoa->getEmail() + "' or "
                         "email_barbeiro = '" + pessoa->getEmail() + "') and "
                         "hora = '" + horario.getHora() + "' and data = '" + horario.getData() + "'";

        if(query.exec(QString::fromStdString(sqlText))){
            if(query.next()){
                string email_cliente = query.value(3).toString().toStdString();
                string email_barbeiro = query.value(4).toString().toStdString();

                sqlText = "delete from tb_horario where (email_cliente = '" + pessoa->getEmail() + "' or "
                          "email_barbeiro = '" + pessoa->getEmail() + "') and "
                          "hora = '" + horario.getHora() + "' and data = '" + horario.getData() + "'";

                if(query.exec(QString::fromStdString(sqlText))){
                    if(Cliente* clienteTemp = dynamic_cast<Cliente*>(pessoa)) {
                        pessoa->remove(&horario);

                        for(auto it = barbearia->barbeirosBegin(); it<barbearia->barbeirosEnd(); it++){
                            if((*it)->getEmail() == email_barbeiro){
                                (*it)->remove(&horario);
                                break;
                            }
                        }
                    }
                    else{
                        // caso estivesse logado como barbeiro
                    }
                }
                else
                    qDebug()<<"Erro ao tentar remover o horário de agendamento do banco de dados.";
            }
        }
        else
            qDebug() << "Erro ao buscar horario na tb_horario";
    }

    ui->listWidget->clear();
    listaHorarios();
}

