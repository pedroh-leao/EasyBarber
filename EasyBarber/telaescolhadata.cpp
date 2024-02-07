#include "telaescolhadata.h"
#include "ui_telaescolhadata.h"
#include "horario.h"
#include "telaescolhabarbeiro.h"
#include "telaagendamento.h"

TelaEscolhaData::TelaEscolhaData(Barbearia *barbearia, Barbeiro *barbeiro, Cliente *cliente, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::telaEscolhaData)
{
    this->barbearia = barbearia;
    this->barbeiro = barbeiro;
    this->cliente = cliente;
    ui->setupUi(this);
    modificarLayout();
    criarSlots();
}

TelaEscolhaData::~TelaEscolhaData()
{
    delete ui;
}

void TelaEscolhaData::modificarLayout(){
    setTextoTopo(); //Texto do topo da tela
    setDataAtual(); //Ajustando data
}

void TelaEscolhaData::setTextoTopo(){
    string text = barbearia->getNome() + "\n";
    text += "Agendando atendimento com: " + barbeiro->getNome() + "\n";
    string horaInicial = barbearia->getInicioDeFuncionamento();
    string horaFinal = barbearia->getFimDeFuncionamento();
    text += horaInicial + "h - " + horaFinal + "h\n";
    text += barbearia->getEndereco();

    ui->textobarbearia->setText(QString::fromStdString(text));
}

void TelaEscolhaData::setDataAtual(){
    QDate currentDate = QDate::currentDate();
    ui->campoData->setDate(currentDate);
}

void TelaEscolhaData::criarSlots(){
    connect(ui->okBotao, &QPushButton::clicked, [this]() {
        avancarAgendarHorario();
        this->close();
    });
    connect(ui->voltarBotao, &QPushButton::clicked, [this](){
        voltarEscolhaBarbeiro();
        this->close();
    });
}

void TelaEscolhaData::voltarEscolhaBarbeiro(){
    TelaEscolhaBarbeiro *telaEscolhaBarbeiro = new TelaEscolhaBarbeiro(barbearia, cliente);
    telaEscolhaBarbeiro->show();
}

void TelaEscolhaData::avancarAgendarHorario(){
    QString dateString = ui->campoData->date().toString("dd-MM-yyyy");
    string dataString = dateString.toStdString();

    Horario * horario = new Horario(dataString);

    TelaAgendamento *telaAgendamento = new TelaAgendamento(barbearia, barbeiro, horario, cliente);
    telaAgendamento->show();
}
