#ifndef BARBEARIA_H
#define BARBEARIA_H

#include <string>
#include <vector>
#include "Barbeiro.h"
#include "cliente.h"
#include "horario.h"

using namespace std;

class Barbearia {
private:
    string nome;
    string endereco;
    string telefone;
    string email;
    string inicioDeFuncionamento;
    string fimDeFuncionamento;
    vector<Barbeiro*> barbeiros;   

public:
    typedef vector<Barbeiro*>::iterator barbeirosIterator;

    /*
    * @brief Construtor padrão da classe Barbearia.
    */
    Barbearia();

    /*
    * @brief Construtor da classe Barbearia.
    * @param nome Nome da barbearia.
    * @param endereco Endereço da barbearia.
    * @param telefone Número de telefone da barbearia.
    * @param email Endereço de e-mail da barbearia.
    * @param inicioDeFuncionamento Horário de abertura da barbearia.
    * @param fimDeFuncionamento Horário de fechamento da barbearia.
    */
    Barbearia(string nome, string endereco, string telefone, string email, string inicioDeFuncionamento, string fimDeFuncionamento);

    /*
    * @brief Obtém o nome da barbearia.
    * @return O nome da barbearia.
    */
    string getNome() const;

    /*
    * @brief Define o nome da barbearia.
    * @param nome O novo nome da barbearia.
    */
    void setNome(const string& nome);

    /*
    * @brief Obtém o endereço da barbearia.
    * @return O endereço da barbearia.
    */
    string getEndereco() const;

    /*
    * @brief Define o endereço da barbearia.
    * @param endereco O novo endereço da barbearia.
    */
    void setEndereco(const string& endereco);

    /*
    * @brief Obtém o número de telefone da barbearia.
    * @return O número de telefone da barbearia.
    */
    string getTelefone() const;

    /*
    * @brief Define o número de telefone da barbearia.
    * @param telefone O novo número de telefone da barbearia.
    */
    void setTelefone(const string& telefone);

    /*
    * @brief Obtém o endereço de e-mail da barbearia.
    * @return O endereço de e-mail da barbearia.
    */
    string getEmail() const;

    /*
    * @brief Define o endereço de e-mail da barbearia.
    * @param email O novo endereço de e-mail da barbearia.
    */
    void setEmail(const string& email);

    /*
    * @brief Obtém o horário de abertura da barbearia.
    * @return O horário de abertura da barbearia.
    */
    string getInicioDeFuncionamento() const;

    /*
    * @brief Define o horário de abertura da barbearia.
    * @param inicioDeFuncionamento O novo horário de abertura da barbearia.
    */
    void setInicioDeFuncionamento(const string& inicioDeFuncionamento);

    /*
    * @brief Obtém o horário de fechamento da barbearia.
    * @return O horário de fechamento da barbearia.
    */
    string getFimDeFuncionamento() const;

    /*
    * @brief Define o horário de fechamento da barbearia.
    * @param fimDeFuncionamento O novo horário de fechamento da barbearia.
    */
    void setFimDeFuncionamento(const string& fimDeFuncionamento);

    /*
    * @brief Retorna um iterador para o início da lista de barbeiros.
    * @return Um iterador para o início da lista de barbeiros.
    */
    barbeirosIterator barbeirosBegin();

    /*
    * @brief Retorna um iterador para o final da lista de barbeiros.
    * @return Um iterador para o final da lista de barbeiros.
    */
    barbeirosIterator barbeirosEnd();

    /*
    * @brief Adiciona um barbeiro à lista de barbeiros da barbearia.
    * @param barbeiro Ponteiro para o barbeiro a ser adicionado.
    * @return true se o barbeiro foi adicionado com sucesso, false caso contrário.
    */
    bool add(Barbeiro* barbeiro);

    /*
    * @brief Remove um barbeiro da lista de barbeiros da barbearia.
    * @param barbeiro Ponteiro para o barbeiro a ser removido.
    * @return true se o barbeiro foi removido com sucesso, false caso contrário.
    */
    bool remove(Barbeiro* barbeiro);

    /*
    * @brief Realiza o agendamento de um cliente com um barbeiro em um horário específico.
    * @param barbeiro Ponteiro para o barbeiro responsável pelo agendamento.
    * @param cliente Ponteiro para o cliente que está realizando o agendamento.
    * @param horario Ponteiro para o horário do agendamento.
    * @return true se o agendamento foi realizado com sucesso, false caso contrário.
    */
    bool realizarAgendamento(Barbeiro* barbeiro, Cliente* cliente, Horario* horario);

    /**
    * @brief Verifica se o horário desejado está disponível
    * @param barbeiro Ponteiro para o barbeiro responsável pelo agendamento.
    * @param cliente Ponteiro para o cliente que está realizando o agendamento.
    * @param horario Ponteiro para o horário do agendamento.
    * @return true se o horario esta livre, false caso contrário.
    */
    bool horarioEstaLivre(Barbeiro* barbeiro, Cliente* cliente, Horario* horario);


};

#endif // BARBEARIA_H
