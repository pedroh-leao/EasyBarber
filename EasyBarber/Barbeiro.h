#ifndef BARBEIRO_H
#define BARBEIRO_H

#include <string.h>
#include "horario.h"
#include <vector>

typedef int Tempo;

class Barbeiro
{
protected:
    string nome;
    double preco;
    Tempo horarioInicioDeFuncionamento, horarioFinalDeAtendimento, tempoDeAtendimento;
    vector<Horario> horariosMarcados;

public:
    Barbeiro();
    virtual ~Barbeiro();

    Barbeiro(string nome = "", double preco =0.0, Tempo horarioInicioDeFuncionamento = 0, Tempo horarioFinalDeAtendimento = 0, Tempo tempoDeAtendimento = 0);

    string getNome() const;
    void setNome(string nome);

    double getPreco() const;
    void setPreco(double preco);

    Tempo getHorarioInicioDeFuncionamento() const;
    void setHorarioInicioDeFuncionamento(Tempo horario);

    Tempo getHorarioFinalDeFuncionamento() const;
    void setHorarioFinalDeFuncionamento(Tempo horario);

    Tempo getTempoDeAtendimento() const;
    void setTempoDeAtendimento(Tempo horario);
};

#endif // BARBEIRO_H
