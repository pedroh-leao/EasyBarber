#ifndef TELAAGENDAMENTO_H
#define TELAAGENDAMENTO_H

#include <QWidget>
#include <QLabel>
#include <QRadioButton>
#include <QGridLayout>
#include <QStringList>
#include <QPushButton>
#include <QTime>
#include "barbearia.h"

class TelaAgendamento : public QWidget {
    Q_OBJECT

protected:
    Barbearia *barbearia;
    Barbeiro *barbeiro;

public:
    explicit TelaAgendamento(Barbearia *barbearia=nullptr, Barbeiro *barbeiro = nullptr, QWidget *parent = nullptr);
    ~TelaAgendamento();

private:
    QLabel *label;
    QGridLayout *gridLayout;
    QPushButton *scheduleButton;

    void createLayout();
};

#endif // TELAAGENDAMENTO_H
