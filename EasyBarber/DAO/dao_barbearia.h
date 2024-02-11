#ifndef DAO_BARBEARIA_H
#define DAO_BARBEARIA_H

#include "../Model/Cliente.h"
#include "../Model/barbearia.h"
#include "dao_barbeiro.h"

class DAO_Barbearia
{
private:
    DAO_Barbeiro * dao_barbeiro;

public:
    /**
     * @brief Construtor padrão da classe DAO_Barbearia.
     */
    DAO_Barbearia();

    /**
     * @brief Destrutor da classe DAO_Barbearia.
     */
    ~DAO_Barbearia();

    /**
     * @brief Busca uma barbearia pelo email.
     * @param emailBarbearia O email da barbearia a ser buscada.
     * @return Um ponteiro para a Barbearia encontrada ou nullptr se não encontrada.
     */
    Barbearia* buscaBarbeariaPeloEmail(string emailBarbearia);

    /**
     * @brief Busca os barbeiros associados a uma barbearia.
     * @param barbearia A barbearia da qual se deseja obter os barbeiros associados.
     */
    void buscaBarbeirosAssociados(Barbearia * barbearia);

    /**
     * @brief Busca os horários agendados de todos os barbeiros associados à barbearia.
     * @param barbearia A barbearia da qual se deseja obter os horários agendados.
     */
    void buscarHorariosAgendados(Barbearia * barbearia);

    /**
     * @brief Realiza o agendamento de um horário na barbearia.
     * @param barbeiro O barbeiro responsável pelo agendamento.
     * @param cliente O cliente que está agendando o horário.
     * @param horario O horário a ser agendado.
     * @return True se o agendamento foi bem-sucedido, False caso contrário.
     */
    bool realizarAgendamento(Barbeiro* barbeiro, Cliente* cliente, Horario* horario);

    /**
     * @brief Remove um barbeiro da barbearia.
     * @param barbeiro O barbeiro a ser removido.
     * @return True se a remoção foi bem-sucedida, False caso contrário.
     */
    bool removerBarbeiro(Barbeiro * barbeiro);

    /**
     * @brief Atualiza um campo de string específico na tabela da barbearia.
     * @param campo O campo a ser atualizado (nome, endereco, telefone, inicioDeFuncionamento, fimDeFuncionamento).
     * @param novoValor O novo valor para o campo.
     * @param email O email identificador da barbearia.
     * @return True se a atualização foi bem-sucedida, False caso contrário.
     */
    bool atualizarCampoString(string& campo, string& novoValor, string& email);
};

#endif // DAO_BARBEARIA_H
