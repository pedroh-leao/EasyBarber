#ifndef DAO_BARBEIRO_H
#define DAO_BARBEIRO_H

#include "dao_pessoa.h"
#include "../Model/Barbeiro.h"

class DAO_Barbeiro : public DAO_Pessoa
{
public:
    /**
     * @brief Construtor padrão da classe DAO_Barbeiro.
     */
    DAO_Barbeiro();

    /**
     * @brief Obtém um objeto Barbeiro pelo email.
     * @param barbeiroEmail O email do barbeiro a ser obtido.
     * @return Um ponteiro para o Barbeiro encontrado ou nullptr se não encontrado.
     */
    Barbeiro * getBarbeiroPeloEmail(string barbeiroEmail);

    /**
     * @brief Busca os horários agendados para um barbeiro.
     * @param barbeiro O barbeiro para o qual os horários estão sendo buscados.
     * @return Um vetor de ponteiros para Horario contendo os horários agendados.
     */
    vector<Horario*> buscaHorariosAgendados(Barbeiro * barbeiro);

    /**
     * @brief Remove um horário agendado para um barbeiro.
     * @param barbeiro O barbeiro do qual será removido o horário.
     * @param horario O horário a ser removido.
     * @return True se a remoção foi bem-sucedida, False caso contrário.
     */
    bool removeHorario(Barbeiro * barbeiro, Horario * horario);

    /**
     * @brief Atualiza o nome do barbeiro.
     * @param barbeiro O barbeiro cujo nome será atualizado.
     * @param nome O novo nome do barbeiro.
     * @return True se a atualização foi bem-sucedida, False caso contrário.
     */
    bool updateNome(Barbeiro* barbeiro, const string& nome);

    /**
     * @brief Atualiza o endereço do barbeiro.
     * @param barbeiro O barbeiro cujo endereço será atualizado.
     * @param endereco O novo endereço do barbeiro.
     * @return True se a atualização foi bem-sucedida, False caso contrário.
     */
    bool updateEndereco(Barbeiro* barbeiro, const string& endereco);

    /**
     * @brief Atualiza o telefone do barbeiro.
     * @param barbeiro O barbeiro cujo telefone será atualizado.
     * @param telefone O novo telefone do barbeiro.
     * @return True se a atualização foi bem-sucedida, False caso contrário.
     */
    bool updateTelefone(Barbeiro* barbeiro, const string& telefone);

    /**
     * @brief Atualiza a senha do barbeiro.
     * @param barbeiro O barbeiro cuja senha será atualizada.
     * @param senha A nova senha do barbeiro.
     * @return True se a atualização foi bem-sucedida, False caso contrário.
     */
    bool updateSenha(Barbeiro* barbeiro, const string& senha);

    /**
     * @brief Atualiza o preço do serviço do barbeiro.
     * @param barbeiro O barbeiro cujo preço será atualizado.
     * @param preco O novo preço do serviço do barbeiro.
     * @return True se a atualização foi bem-sucedida, False caso contrário.
     */
    bool updatePreco(Barbeiro* barbeiro, const float& preco);
};

#endif // DAO_BARBEIRO_H
