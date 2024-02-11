#include "telaagendamentoscliente.h"
#include "ui_telaagendamentoscliente.h"

TelaAgendamentosCliente::TelaAgendamentosCliente(Cliente* cliente, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TelaAgendamentosCliente)
{
    this->cliente = cliente;

    ui->setupUi(this);

    listaHorarios();
}

TelaAgendamentosCliente::~TelaAgendamentosCliente()
{
    delete ui;
}

void TelaAgendamentosCliente::listaHorarios(){
    string text;
    for(auto it = cliente->horariosAgendadosBegin(); it < cliente->horariosAgendadosEnd(); it++){
        text = (*it)->getData() + '\t' + (*it)->getHora();

        ui->listWidget->addItem(QString::fromStdString(text));
    }
}
