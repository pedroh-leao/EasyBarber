#ifndef CLIENTE_H
#define CLIENTE_H

#include "Pessoa.h"

class Cliente : public Pessoa
{
public:
    Cliente(string nome = "", string endereco = "", string telefone = "", string email = "", string senha = "");
    virtual ~Cliente();
};

#endif // CLIENTE_H
