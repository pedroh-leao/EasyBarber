#ifndef CLIENTE_H
#define CLIENTE_H

#include <string.h>

class Cliente
{
protected:
    string nome, cpf, senha;

public:
    Cliente();
    virtual ~Cliente();

    Cliente(string nome="", string cpf="", string senha="");

    string getNome() const;
    void setNome(string nome);

    string getCpf() const;
    void setCpf(string cpf);

    string getSenha() const;
    void setSenha(string senha);
};

#endif
