#ifndef TELAESCOLHABARBEIRO_H
#define TELAESCOLHABARBEIRO_H

#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include "barbearia.h"
using namespace std;


class TelaEscolhaBarbeiro : public QWidget{
    Q_OBJECT
protected:
    Barbearia * barbearia;

public:
    explicit TelaEscolhaBarbeiro(Barbearia * barbearia = nullptr, QWidget *parent = nullptr);
    ~TelaEscolhaBarbeiro();

private:
    void createLayout();
    void createButtons(QVBoxLayout *layout);


public slots:
    void abrirTelaAgendamento(Barbeiro * barbeiro);
};

#endif // TELAESCOLHABARBEIRO_H
