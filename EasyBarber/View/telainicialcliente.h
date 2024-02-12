#ifndef TELAINICIALCLIENTE_H
#define TELAINICIALCLIENTE_H

#include <QDialog>
#include "../Model/Cliente.h"
#include "../Model/barbearia.h"

namespace Ui {
class TelaInicialCliente;
}

class TelaInicialCliente : public QDialog
{
    Q_OBJECT

protected:
    Barbearia* barbearia; /**< Ponteiro para o objeto da classe Barbearia associado à tela. */
    Cliente* cliente; /**< Ponteiro para o objeto da classe Cliente associado à tela. */

public:
    explicit TelaInicialCliente(Barbearia* barbearia, Cliente* cliente, QWidget *parent = nullptr);
    ~TelaInicialCliente();

private:
    Ui::TelaInicialCliente *ui; /**< Ponteiro para a interface gráfica da tela. */

    /**
     * @brief Cria os slots para os botões da tela.
     */
    void criarSlots();

public slots:
    /**
     * @brief Slot para ir à tela de escolha de barbeiro.
     */
    void avancarEscolhaBarbeiro();

    /**
     * @brief Slot para ir à tela que lista os agendamentos.
     */
    void avancarHorariosAgendados();
};

#endif // TELAINICIALCLIENTE_H
