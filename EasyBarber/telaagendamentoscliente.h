#ifndef TELAAGENDAMENTOSCLIENTE_H
#define TELAAGENDAMENTOSCLIENTE_H

#include <QDialog>
#include "Cliente.h"

namespace Ui {
class TelaAgendamentosCliente;
}

class TelaAgendamentosCliente : public QDialog
{
    Q_OBJECT

protected:
    Cliente* cliente; /**< Ponteiro para o objeto da classe Cliente associado à tela. */

public:
    explicit TelaAgendamentosCliente(Cliente *cliente, QWidget *parent = nullptr);
    ~TelaAgendamentosCliente();

private:
    Ui::TelaAgendamentosCliente *ui;

    /**
     * @brief Lista os horários já agendados do cliente na tela.
     */
    void listaHorarios();
};

#endif // TELAAGENDAMENTOSCLIENTE_H
