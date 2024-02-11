#ifndef TELAAGENDAMENTOS_H
#define TELAAGENDAMENTOS_H

#include <QDialog>
#include "Pessoa.h"

namespace Ui {
class TelaAgendamentos;
}

class TelaAgendamentos : public QDialog
{
    Q_OBJECT

protected:
    Pessoa* pessoa; /**< Ponteiro para o objeto da classe Pessoa associado à tela. */

public:
    explicit TelaAgendamentos(Pessoa *pessoa, QWidget *parent = nullptr);
    ~TelaAgendamentos();

private slots:
    void on_voltarBtn_clicked();

private:
    Ui::TelaAgendamentos *ui;

    /**
     * @brief Lista os horários já agendados do cliente ou do barbeiro na tela.
     */
    void listaHorarios();
};

#endif // TELAAGENDAMENTOS_H
