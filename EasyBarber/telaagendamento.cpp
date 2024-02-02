#include "TelaAgendamento.h"

TelaAgendamento::TelaAgendamento(QWidget *parent) : QWidget(parent) {
    createLayout();
}

TelaAgendamento::~TelaAgendamento() {
}

void TelaAgendamento::createLayout() {
    label = new QLabel("Barbearia do Tadeu\n8:00h - 17:00h\nRua do Lino, 244 - Bauxita, Ouro Preto");

    gridLayout = new QGridLayout;

    QStringList times = {"8:00h", "8:30h", "9:00h", "9:30h", "10:00h", "10:30h", "11:00h", "11:30h", "12:00h", "12:30h", "13:00h", "13:30h", "14:00h", "14:30h", "15:00h", "15:30h", "16:00h", "16:30h"};
    int row = 0;
    int col = 0;
    for (const QString &time : times) {
        QRadioButton *radioButton = new QRadioButton(time);
        gridLayout->addWidget(radioButton, row, col);
        col++;
        if (col == 5) {
            col = 0;
            row++;
        }
    }

    scheduleButton = new QPushButton("REALIZAR AGENDAMENTO");

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(label);
    layout->addLayout(gridLayout);
    layout->addWidget(scheduleButton);

    setLayout(layout);
}
