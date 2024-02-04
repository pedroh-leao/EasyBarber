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
#include "Cliente.h"

class TelaAgendamento : public QWidget {
    Q_OBJECT

protected:
    Barbearia *barbearia;
    Barbeiro *barbeiro;
    Cliente *cliente;
    Horario *horarioSelecionado;

public:
    explicit TelaAgendamento(Barbearia *barbearia=nullptr, Barbeiro *barbeiro = nullptr, Horario *horarioSelecionado = nullptr, Cliente *cliente = nullptr,QWidget *parent = nullptr);
    ~TelaAgendamento();

private:
    QLabel *label;
    QGridLayout *gridLayout;
    QPushButton *scheduleButton;

    void createLayout();

public slots:
    void realizaAgendamento(Barbearia *barbearia, Barbeiro *barbeiro, Cliente *cliente);
    void habilitaRealizaAgendBtn(string time);
};

#endif // TELAAGENDAMENTO_H
