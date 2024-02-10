#include "TelaAgendamento.h"


TelaAgendamento::TelaAgendamento(Barbearia *barbearia, Barbeiro * barbeiro, Horario *horarioSelecionado, Cliente *cliente, QWidget *parent) : QWidget(parent) {
    this->barbearia = barbearia;
    this->barbeiro = barbeiro;
    this->cliente = cliente;
    this->horarioSelecionado = horarioSelecionado;

    controller_barbearia = new Controller_Barbearia();

    createLayout();
}

TelaAgendamento::~TelaAgendamento() {
}

void TelaAgendamento::createLayout() {
    setTextoTopo();
    createScheduleButton();
    createRadioButtonsHorario();

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(label);
    layout->addLayout(gridLayout);
    layout->addWidget(scheduleButton);

    setLayout(layout);
}

void TelaAgendamento::setTextoTopo(){
    string text = barbearia->getNome() + "\n";
    text += "Agendando atendimento com: " + barbeiro->getNome() + "\n";

    string horaInicial = barbearia->getInicioDeFuncionamento();
    string horaFinal = barbearia->getFimDeFuncionamento();
    text += horaInicial + "h - " + horaFinal + "h\n";
    text += barbearia->getEndereco();
    label = new QLabel(QString::fromStdString(text));
}

QStringList TelaAgendamento::geraHorariosDisponiveis(){
    QStringList times;
    string horaInicial = barbearia->getInicioDeFuncionamento();
    string horaFinal = barbearia->getFimDeFuncionamento();

    // Converte as strings de horário inicial e final para minutos desde a meia-noite
    int minutosInicio = QTime::fromString(QString::fromStdString(horaInicial), "hh:mm").msecsSinceStartOfDay() / 60000;
    int minutosFim = QTime::fromString(QString::fromStdString(horaFinal), "hh:mm").msecsSinceStartOfDay() / 60000;
    const int intervaloMinutos = 30;

    // Loop para incrementar de 30 em 30 minutos até o horário final
    for (int minutos = minutosInicio; minutos < minutosFim; minutos += intervaloMinutos) {
        int horas = minutos / 60;
        int minutosRestantes = minutos % 60;

        // Formata a hora e adiciona à lista
        QString horario = QString("%1:%2")
                              .arg(horas, 2, 10, QLatin1Char('0'))
                              .arg(minutosRestantes, 2, 10, QLatin1Char('0'));

        Horario *horarioCompleto = new Horario(horarioSelecionado->getData(), horario.toStdString());

        if(!barbeiro->existsHorario(horarioCompleto) && !cliente->existsHorario(horarioCompleto))
            times.append(horario);
    }

    return times;
}

void TelaAgendamento::createRadioButtonsHorario(){
    QStringList times = geraHorariosDisponiveis();
    gridLayout = new QGridLayout;

    int row = 0;
    int col = 0;
    for (QString time : times) {
        QRadioButton *radioButton = new QRadioButton(time);
        gridLayout->addWidget(radioButton, row, col);

        connect(radioButton, &QRadioButton::clicked, [this, time]{habilitaRealizaAgendBtn(time.toStdString());});

        col++;
        if (col == 5) {
            col = 0;
            row++;
        }
    }
}

void TelaAgendamento::createScheduleButton(){
    scheduleButton = new QPushButton("REALIZAR AGENDAMENTO");

    scheduleButton->setEnabled(false);

    Barbearia *refBarbearia = barbearia;
    Barbeiro* refBarbeiro = barbeiro;
    Cliente* refCliente = cliente;

    connect(scheduleButton, &QPushButton::clicked, [this, refBarbearia, refBarbeiro, refCliente](){
        realizaAgendamento(refBarbearia, refBarbeiro, refCliente);
        this->close();
    });
}

void TelaAgendamento::realizaAgendamento(Barbearia* barbearia, Barbeiro* barbeiro, Cliente* cliente){
    if(controller_barbearia->realizarAgendamento(barbearia, barbeiro, cliente, horarioSelecionado))
        QMessageBox::information(this, "", "Agendamento relizado com sucesso!");
    else
        QMessageBox::information(this, "", "Erro ao tentar realizar agendamento!");

    TelaEscolhaBarbeiro *telaEscolhaBarbeiro = new TelaEscolhaBarbeiro(barbearia, cliente);
    telaEscolhaBarbeiro->show();
}

void TelaAgendamento::habilitaRealizaAgendBtn(string time){
    horarioSelecionado->setHora(time);

    if(!scheduleButton->isEnabled())
        this->scheduleButton->setEnabled(true);
}
