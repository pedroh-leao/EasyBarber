#ifndef PESSOA_H
#define PESSOA_H

#include <QtSql>
#include <string>
#include <vector>
#include "horario.h"

using namespace std;

class Pessoa
{
protected:
    string nome; /**< Nome da pessoa. */
    string endereco; /**< Endereço da pessoa. */
    string telefone; /**< Número de telefone da pessoa. */
    string email; /**< Endereço de e-mail da pessoa. */
    string senha; /**< Senha associada à pessoa. */
    vector<Horario*> horariosAgendados; /**< Vetor de ponteiros para objetos da classe Horario, representando os horários agendados. */

    QSqlQuery query;
public:
    /**
     * @brief Construtor da classe Pessoa.
     * @param nome Nome da pessoa.
     * @param endereco Endereço da pessoa.
     * @param telefone Número de telefone da pessoa.
     * @param email Endereço de e-mail da pessoa.
     * @param senha Senha associada à pessoa.
     */
    Pessoa(string nome = "", string endereco = "", string telefone = "", string email = "", string senha = "");

    /**
     * @brief Destrutor virtual da classe Pessoa.
     */
    virtual ~Pessoa();

    // Getters
    string getNome() const; /**< @return Nome da pessoa. */
    string getEndereco() const; /**< @return Endereço da pessoa. */
    string getTelefone() const; /**< @return Número de telefone da pessoa. */
    string getEmail() const; /**< @return Endereço de e-mail da pessoa. */
    string getSenha() const; /**< @return Senha associada à pessoa. */

    // Setters
    void setNome(const string& nome); /**< @param nome Novo nome da pessoa. */
    void setEndereco(const string& endereco); /**< @param endereco Novo endereço da pessoa. */
    void setTelefone(const string& telefone); /**< @param telefone Novo número de telefone da pessoa. */
    void setEmail(const string& email); /**< @param email Novo endereço de e-mail da pessoa. */
    void setSenha(const string& senha); /**< @param senha Nova senha associada à pessoa. */

    typedef vector<Horario*>::iterator horariosAgendadosIterator;
    horariosAgendadosIterator horariosAgendadosBegin(); /**< @return Iterador para o início da lista de horários agendados. */
    horariosAgendadosIterator horariosAgendadosEnd(); /**< @return Iterador para o final da lista de horários agendados. */
    
    /**
     * @brief Adiciona um horário à lista de horários agendados.
     * @param horario Ponteiro para o objeto da classe Horario a ser adicionado.
     * @return True se a adição foi bem-sucedida, False caso contrário.
     */
    bool add(Horario* horario);
    
    /**
     * @brief Remove um horário da lista de horários agendados.
     * @param horario Ponteiro para o objeto da classe Horario a ser removido.
     * @return True se a remoção foi bem-sucedida, False caso contrário.
     */
    bool remove(Horario* horario);
    
    /**
     * @brief Verifica se um horário já está na lista de horários agendados.
     * @param horario Ponteiro para o objeto da classe Horario a ser verificado.
     * @return True se o horário já existe, False caso contrário.
     */
    bool existsHorario(Horario* horario);
};

#endif // PESSOA_H
