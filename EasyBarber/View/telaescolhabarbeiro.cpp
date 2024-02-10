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
}

void TelaEscolhaBarbeiro::abrirTelaEscolhaData(Barbeiro *barbeiro){
    TelaEscolhaData *escolhaData = new TelaEscolhaData(barbearia, barbeiro, cliente);
    escolhaData->show();
}
