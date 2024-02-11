#ifndef CONTROLLER_BARBEARIA_H
#define CONTROLLER_BARBEARIA_H

#include "../Model/barbearia.h"
#include "../DAO/dao_barbearia.h"

class Controller_Barbearia{

protected:
    DAO_Barbearia * dao_barbearia;

public:
    /**
     * @brief Construtor padrão da classe Controller_Barbearia.
     */
    Controller_Barbearia();

    /**
     * @brief Busca uma barbearia pelo email.
     * @param emailBarbearia O email da barbearia a ser buscada.
     * @return Um ponteiro para a barbearia encontrada ou nullptr se não encontrada.
     */
    Barbearia* buscarBarbeariaPeloEmail(string emailBarbearia);

    /**
     * @brief Busca os barbeiros associados a uma barbearia.
     * @param barbearia A barbearia da qual se deseja obter os barbeiros associados.
     */
    void buscaBarbeirosAssociados(Barbearia * barbearia);

    /**
     * @brief Busca os horários agendados de uma barbearia.
     * @param barbearia A barbearia da qual se deseja obter os horários agendados.
     */
    void buscarHorariosAgendados(Barbearia * barbearia);

    /**
     * @brief Realiza o agendamento de um horário na barbearia.
     * @param barbearia A barbearia na qual será realizado o agendamento.
     * @param barbeiro O barbeiro responsável pelo agendamento.
     * @param cliente O cliente que está agendando o horário.
     * @param horario O horário a ser agendado.
     * @return True se o agendamento foi bem-sucedido, False caso contrário.
     */
    bool realizarAgendamento(Barbearia * barbearia, Barbeiro* barbeiro, Cliente* cliente, Horario* horario);

    /**
     * @brief Remove um barbeiro da barbearia.
     * @param barbearia A barbearia da qual o barbeiro será removido.
     * @param barbeiro O barbeiro a ser removido.
     * @return True se a remoção foi bem-sucedida, False caso contrário.
     */
    bool removerBarbeiro(Barbearia * barbearia, Barbeiro * barbeiro);

    /**
     * @brief Atualiza o nome da barbearia.
     * @param barbearia A barbearia cujo nome será atualizado.
     * @param nome O novo nome da barbearia.
     * @return True se a atualização foi bem-sucedida, False caso contrário.
     */
    bool atualizarNome(Barbearia * barbearia, string nome);

    /**
     * @brief Atualiza o endereço da barbearia.
     * @param barbearia A barbearia cujo endereço será atualizado.
     * @param endereco O novo endereço da barbearia.
     * @return True se a atualização foi bem-sucedida, False caso contrário.
     */
    bool atualizarEndereco(Barbearia * barbearia, string endereco);

    /**
     * @brief Atualiza o telefone da barbearia.
     * @param barbearia A barbearia cujo telefone será atualizado.
     * @param telefone O novo telefone da barbearia.
     * @return True se a atualização foi bem-sucedida, False caso contrário.
     */
    bool atualizarTelefone(Barbearia * barbearia, string telefone);

    /**
     * @brief Atualiza o horário de início de funcionamento da barbearia.
     * @param barbearia A barbearia cujo horário de início será atualizado.
     * @param inicioDeFuncionamento O novo horário de início de funcionamento.
     * @return True se a atualização foi bem-sucedida, False caso contrário.
     */
    bool atualizarInicioDeFuncionamento(Barbearia * barbearia, string inicioDeFuncionamento);

    /**
     * @brief Atualiza o horário de fim de funcionamento da barbearia.
     * @param barbearia A barbearia cujo horário de fim será atualizado.
     * @param fimDeFuncionamento O novo horário de fim de funcionamento.
     * @return True se a atualização foi bem-sucedida, False caso contrário.
     */
    bool atualizarFimDeFuncionamento(Barbearia * barbearia, string fimDeFuncionamento);

};

#endif
