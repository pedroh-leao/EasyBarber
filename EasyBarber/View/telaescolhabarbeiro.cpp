#include "telaescolhabarbeiro.h"


TelaEscolhaBarbeiro::TelaEscolhaBarbeiro(Barbearia *barbearia, Cliente *cliente, QWidget *parent) : QWidget(parent) {
    this->barbearia = barbearia;
    this->cliente = cliente;
    createLayout();
}

TelaEscolhaBarbeiro::~TelaEscolhaBarbeiro(){}

void TelaEscolhaBarbeiro::createLayout(){
    QVBoxLayout *layout = new QVBoxLayout;
    createButtons(layout);
    setLayout(layout);
    setMinimumWidth(250);
    setMinimumHeight(150);
}

void TelaEscolhaBarbeiro::createButtons(QVBoxLayout *layout) {
    for (auto it = barbearia->barbeirosBegin(); it != barbearia->barbeirosEnd(); ++it) {
        Barbeiro *barbeiro = *it;
        QString nomeBarbeiro = QString::fromStdString(barbeiro->getNome());
        QPushButton *botao = new QPushButton(nomeBarbeiro);

        connect(botao, &QPushButton::clicked, [this, barbeiro]() {
            abrirTelaEscolhaData(barbeiro);
            this->close();
        });

        layout->addWidget(botao);
    }

    QPushButton *voltarBtn = new QPushButton("Voltar ao Início");
    Barbearia *barbeariaTemp = barbearia;
    Cliente *clienteTemp = cliente;
    connect(voltarBtn, &QPushButton::clicked, [this, barbeariaTemp, clienteTemp](){
        voltarTelaInicial(barbeariaTemp, clienteTemp);
        this->close();
    });

    layout->addWidget(voltarBtn);
}

void TelaEscolhaBarbeiro::abrirTelaEscolhaData(Barbeiro *barbeiro){
    TelaEscolhaData *escolhaData = new TelaEscolhaData(barbearia, barbeiro, cliente);
    escolhaData->show();
}

void TelaEscolhaBarbeiro::voltarTelaInicial(Barbearia* barbearia, Cliente* cliente){
    TelaInicialCliente *telaInicialCliente = new TelaInicialCliente(barbearia, cliente);
    telaInicialCliente->show();
}
