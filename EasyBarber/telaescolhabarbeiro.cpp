#include "telaescolhabarbeiro.h"
#include "telaagendamento.h"

TelaEscolhaBarbeiro::TelaEscolhaBarbeiro(Barbearia *barbearia, QWidget *parent) : QWidget(parent) {
    this->barbearia = barbearia;
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
            abrirTelaAgendamento(barbeiro);
            this->close();
        });

        layout->addWidget(botao);
    }
}

void TelaEscolhaBarbeiro::abrirTelaAgendamento(Barbeiro *barbeiro){
    TelaAgendamento *telaAgendamento = new TelaAgendamento(barbearia, barbeiro);
    telaAgendamento->show();
}
