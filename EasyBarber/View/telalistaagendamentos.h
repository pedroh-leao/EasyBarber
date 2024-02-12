#ifndef TELALISTAAGENDAMENTOS_H
#define TELALISTAAGENDAMENTOS_H

#include <QDialog>
#include "../Model/Pessoa.h"
#include "../Model/barbearia.h"

#include "../View/telainicialcliente.h"
#include "../Model/barbeiro.h"

#include "../Controller/controller_horario.h"

#include <sstream>


namespace Ui {
class TelaListaAgendamentos;
}

class TelaListaAgendamentos : public QDialog
{
    Q_OBJECT

protected:
    Pessoa* pessoa; /**< Ponteiro para o objeto da classe Pessoa associado à tela. */
    Barbearia* barbearia;
    Controller_Horario * controller_horario;

public:
    explicit TelaListaAgendamentos(Pessoa *pessoa, Barbearia* barbearia, QWidget *parent = nullptr);
    ~TelaListaAgendamentos();

private slots:
    void on_voltarBtn_clicked();

    void on_desmarcarBtn_clicked();

private:
    Ui::TelaListaAgendamentos *ui;

    /**
     * @brief Lista os horários já agendados do cliente ou do barbeiro na tela.
     */
    void listaHorarios();
};

#endif // TELALISTAAGENDAMENTOS_H
