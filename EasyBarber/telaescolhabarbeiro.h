#ifndef TELAESCOLHABARBEIRO_H
#define TELAESCOLHABARBEIRO_H

#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include "barbearia.h"
#include "cliente.h"
using namespace std;


class TelaEscolhaBarbeiro : public QWidget{
    Q_OBJECT
protected:
    Barbearia * barbearia;
    Cliente * cliente;

public:
    explicit TelaEscolhaBarbeiro(Barbearia * barbearia = nullptr, Cliente * cliente = nullptr, QWidget *parent = nullptr);
    ~TelaEscolhaBarbeiro();

private:
    void createLayout();
    void createButtons(QVBoxLayout *layout);


public slots:
    void abrirTelaEscolhaData(Barbeiro * barbeiro);
};

#endif // TELAESCOLHABARBEIRO_H
