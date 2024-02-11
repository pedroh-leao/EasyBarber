#include "telainicialcliente.h"
#include "ui_telainicialcliente.h"
#include "telaescolhabarbeiro.h"
#include "telalistaagendamentos.h"

TelaInicialCliente::TelaInicialCliente(Barbearia *barbearia, Cliente *cliente, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TelaInicialCliente)
{
    this->barbearia = barbearia;
    this->cliente = cliente;

    ui->setupUi(this);

    criarSlots();
}

TelaInicialCliente::~TelaInicialCliente()
{
    delete ui;
}

void TelaInicialCliente::criarSlots(){
    connect(ui->realizarAgendamentoBtn, &QPushButton::clicked, [this](){
        avancarEscolhaBarbeiro();
        this->close();
    });

    connect(ui->horariosAgendadosBtn, &QPushButton::clicked, [this](){
        avancarHorariosAgendados();
        this->close();
    });
}

void TelaInicialCliente::avancarEscolhaBarbeiro(){
    TelaEscolhaBarbeiro *telaEscolhaBarbeiro = new TelaEscolhaBarbeiro(barbearia, cliente);
    telaEscolhaBarbeiro->show();
}

void TelaInicialCliente::avancarHorariosAgendados(){
    TelaListaAgendamentos *telaListaAgendamentos = new TelaListaAgendamentos(cliente, barbearia);
    telaListaAgendamentos->show();
}
