#ifndef TELAESCOLHADATA_H
#define TELAESCOLHADATA_H

#include "telaescolhabarbeiro.h"
#include "telaagendamento.h"
#include "barbearia.h"
#include "Cliente.h"
#include "horario.h"
#include <QDialog>
#include <QDate>
#include <QDateEdit>

namespace Ui {
class telaEscolhaData;
}

class TelaEscolhaData : public QDialog
{
    Q_OBJECT
protected:
    Barbearia *barbearia;
    Barbeiro *barbeiro;
    Cliente *cliente;
public:
    explicit TelaEscolhaData(Barbearia *barbearia=nullptr, Barbeiro *barbeiro = nullptr, Cliente *cliente = nullptr, QWidget *parent = nullptr);
    ~TelaEscolhaData();

private:
    Ui::telaEscolhaData *ui;
    void modificarLayout();
    void criarSlots();


public slots:
    void voltarEscolhaBarbeiro();
    void avancarAgendarHorario();
};

#endif // TELAESCOLHADATA_H
