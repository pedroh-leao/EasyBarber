#ifndef BARBEIRO_H
#define BARBEIRO_H

#include "Pessoa.h"

class Barbeiro : public Pessoa
{
private:
    float preco;

public:
    Barbeiro(string nome = "", string endereco = "", string telefone = "", string email = "", string senha = "", float preco = 0.0);
    virtual ~Barbeiro();

    // Getter and setter for preco
    float getPreco() const;
    void setPreco(float preco);
};

#endif // BARBEIRO_H
