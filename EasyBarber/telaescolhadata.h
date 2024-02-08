#ifndef TELAESCOLHADATA_H
#define TELAESCOLHADATA_H

#include "barbearia.h"
#include <QDialog>
#include <QDate>
#include <QDateEdit>
#include <QtSql>

namespace Ui {
class telaEscolhaData;
}

/**
 * @brief A classe TelaEscolhaData representa a interface gráfica para a escolha de uma data para agendamento.
 */
class TelaEscolhaData : public QDialog {
    Q_OBJECT
protected:
    Barbearia* barbearia; /**< Ponteiro para o objeto da classe Barbearia associado à tela. */
    Barbeiro* barbeiro; /**< Ponteiro para o objeto da classe Barbeiro associado à tela. */
    Cliente* cliente; /**< Ponteiro para o objeto da classe Cliente associado à tela. */

public:
    /**
     * @brief Construtor da classe TelaEscolhaData.
     * @param barbearia Ponteiro para o objeto da classe Barbearia.
     * @param barbeiro Ponteiro para o objeto da classe Barbeiro.
     * @param cliente Ponteiro para o objeto da classe Cliente.
     * @param parent Ponteiro para o QWidget pai, padrão é nullptr.
     */
    explicit TelaEscolhaData(Barbearia* barbearia = nullptr, Barbeiro* barbeiro = nullptr, Cliente* cliente = nullptr, QWidget* parent = nullptr);

    /**
     * @brief Destrutor da classe TelaEscolhaData.
     */
    ~TelaEscolhaData();

private:
    Ui::telaEscolhaData* ui; /**< Ponteiro para a interface gráfica da tela. */

    /**
     * @brief Modifica o layout da tela.
     */
    void modificarLayout();

    /**
     * @brief Seta o texto posicionado no topo da tela.
     */
    void setTextoTopo();

    /**
     * @brief Ajusta data para a data atual.
     */
    void setDataAtual();

    /**
     * @brief Cria os slots para os botões da tela.
     */
    void criarSlots();

public slots:
    /**
     * @brief Slot para voltar à tela de escolha de barbeiro.
     */
    void voltarEscolhaBarbeiro();

    /**
     * @brief Slot para avançar e agendar um horário na tela de agendamento.
     */
    void avancarAgendarHorario();
};

#endif // TELAESCOLHADATA_H
