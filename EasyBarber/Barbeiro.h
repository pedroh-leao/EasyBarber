#ifndef BARBEIRO_H
#define BARBEIRO_H

#include "Pessoa.h"
#include "horario.h"
#include <vector>

class Barbeiro : public Pessoa
{
private:
    float preco;
    vector<Horario*> horariosAgendados;

public:
    Barbeiro(string nome = "", string endereco = "", string telefone = "", string email = "", string senha = "", float preco = 0.0);
    virtual ~Barbeiro();

    // Getter and setter for preco
    float getPreco() const;
    void setPreco(float preco);

    typedef vector<Horario*>::iterator horariosAgendadosIterator;
    horariosAgendadosIterator horariosAgendadosBegin();
    horariosAgendadosIterator horariosAgendadosEnd();
    bool add(Horario *horario);
    bool remove(Horario *horario);
    bool existsHorario(Horario *horario);
};

#endif // BARBEIRO_H
