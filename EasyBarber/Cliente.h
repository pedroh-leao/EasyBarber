#ifndef CLIENTE_H
#define CLIENTE_H

#include "Pessoa.h"

class Cliente : public Pessoa
{
public:
    /**
     * @brief Construtor da classe Cliente.
     * @param nome Nome do cliente.
     * @param endereco Endereço do cliente.
     * @param telefone Número de telefone do cliente.
     * @param email Endereço de e-mail do cliente.
     * @param senha Senha associada ao cliente.
     */
    Cliente(string nome = "", string endereco = "", string telefone = "", string email = "", string senha = "");

    /**
     * @brief Destrutor virtual da classe Cliente.
     */
    virtual ~Cliente();
};

#endif // CLIENTE_H
