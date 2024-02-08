#ifndef TELAESCOLHABARBEIRO_H
#define TELAESCOLHABARBEIRO_H

#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QtSql>
#include "barbearia.h"
#include "cliente.h"
using namespace std;

/**
 * @brief A classe TelaEscolhaBarbeiro representa a interface gráfica para a escolha de um barbeiro.
 */
class TelaEscolhaBarbeiro : public QWidget {
    Q_OBJECT
protected:
    Barbearia* barbearia; /**< Ponteiro para o objeto da classe Barbearia associado à tela. */
    Cliente* cliente; /**< Ponteiro para o objeto da classe Cliente associado à tela. */

public:
    /**
     * @brief Construtor da classe TelaEscolhaBarbeiro.
     * @param barbearia Ponteiro para o objeto da classe Barbearia.
     * @param cliente Ponteiro para o objeto da classe Cliente.
     * @param parent Ponteiro para o QWidget pai, padrão é nullptr.
     */
    explicit TelaEscolhaBarbeiro(Barbearia* barbearia = nullptr, Cliente* cliente = nullptr, QWidget* parent = nullptr);

    /**
     * @brief Destrutor da classe TelaEscolhaBarbeiro.
     */
    ~TelaEscolhaBarbeiro();

private:
    /**
     * @brief Cria o layout da tela.
     */
    void createLayout();

    /**
     * @brief Cria os botões de escolha dos barbeiros.
     * @param layout Ponteiro para o layout onde os botões serão adicionados.
     */
    void createButtons(QVBoxLayout* layout);

public slots:
    /**
     * @brief Slot para abrir a tela de escolha de data ao selecionar um barbeiro.
     * @param barbeiro Ponteiro para o objeto da classe Barbeiro selecionado.
     */
    void abrirTelaEscolhaData(Barbeiro* barbeiro);
};

#endif // TELAESCOLHABARBEIRO_H
