#include "telaagendamentos.h"
#include "ui_telaagendamentos.h"
#include "telainicialcliente.h"
#include "Cliente.h"
#include "barbeiro.h"

TelaAgendamentos::TelaAgendamentos(Pessoa* pessoa, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TelaAgendamentos)
{
    this->pessoa = pessoa;

    ui->setupUi(this);

    listaHorarios();
}

TelaAgendamentos::~TelaAgendamentos()
{
    delete ui;
}

void TelaAgendamentos::listaHorarios(){
    string text;
    for(auto it = pessoa->horariosAgendadosBegin(); it < pessoa->horariosAgendadosEnd(); it++){
        text = (*it)->getData() + '\t' + (*it)->getHora();

        ui->listWidget->addItem(QString::fromStdString(text));
    }
}

void TelaAgendamentos::on_voltarBtn_clicked()
{
    //verifica se a pessoa e um cliente ou um barbeiro, e volta para tela adequada.
    if(Cliente* cliente = dynamic_cast<Cliente*>(pessoa)){
        TelaInicialCliente *telaInicialCliente = new TelaInicialCliente(nullptr, cliente);
        telaInicialCliente->show();
        this->close();
    }
    else{
        Barbeiro* barbeiro = dynamic_cast<Barbeiro*>(pessoa);
        //voltar para telaInicial do barbeiro
        this->close();
    }
}

