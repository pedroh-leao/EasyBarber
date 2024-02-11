#ifndef DAO_CLIENTE_H
#define DAO_CLIENTE_H

#include "../Model/Cliente.h"
#include "dao_pessoa.h"

class DAO_Cliente : public DAO_Pessoa
{
public:
    /**
     * @brief Construtor padrão da classe DAO_Cliente.
     */
    DAO_Cliente();

    /**
     * @brief Obtém um objeto Cliente pelo email.
     * @param userEmail O email do cliente a ser obtido.
     * @return Um ponteiro para o Cliente encontrado ou nullptr se não encontrado.
     */
    Cliente* getClientePeloEmail(string userEmail);

    /**
     * @brief Busca os horários agendados para um cliente.
     * @param cliente O cliente para o qual os horários estão sendo buscados.
     * @return Um vetor de ponteiros para Horario contendo os horários agendados.
     */
    vector<Horario*> buscaHorariosAgendados(Cliente * cliente);

    /**
     * @brief Remove um horário agendado para um cliente.
     * @param cliente O cliente do qual será removido o horário.
     * @param horario O horário a ser removido.
     * @return True se a remoção foi bem-sucedida, False caso contrário.
     */
    bool removeHorario(Cliente * cliente, Horario * horario);

    /**
     * @brief Atualiza o nome do cliente.
     * @param cliente O cliente cujo nome será atualizado.
     * @param nome O novo nome do cliente.
     * @return True se a atualização foi bem-sucedida, False caso contrário.
     */
    bool updateNome(Cliente* cliente, const string& nome);

    /**
     * @brief Atualiza o endereço do cliente.
     * @param cliente O cliente cujo endereço será atualizado.
     * @param endereco O novo endereço do cliente.
     * @return True se a atualização foi bem-sucedida, False caso contrário.
     */
    bool updateEndereco(Cliente* cliente, const string& endereco);

    /**
     * @brief Atualiza o telefone do cliente.
     * @param cliente O cliente cujo telefone será atualizado.
     * @param telefone O novo telefone do cliente.
     * @return True se a atualização foi bem-sucedida, False caso contrário.
     */
    bool updateTelefone(Cliente* cliente, const string& telefone);

    /**
     * @brief Atualiza a senha do cliente.
     * @param cliente O cliente cuja senha será atualizada.
     * @param senha A nova senha do cliente.
     * @return True se a atualização foi bem-sucedida, False caso contrário.
     */
    bool updateSenha(Cliente* cliente, const string& senha);
};

#endif // DAO_CLIENTE_H
