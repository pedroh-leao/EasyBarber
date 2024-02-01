#include "barbeiro.h"

Barbeiro :: Barbeiro() {}

Barbeiro :: Barbeiro(string nome, double preco, tempo horarioInicioDeFuncionamento, tempo horarioFinalDeAtendimento, tempo tempoDeAtendimento){
    this->nome = nome;
    this->preco = preco;
    this->horarioInicioDeFuncionamento = horarioInicioDeFuncionamento;
    this->horarioFinalDeAtendimento = horarioFinalDeAtendimento;
    this->tempoDeAtendimento = tempoDeAtendimento;
}

Barbeiro :: ~Barbeiro() {}

string Barbeiro :: getNome() const{
    return nome;
}

void Barbeiro :: setNome(string nome){
    this->nome = nome;
}

double Barbeiro :: getPreco() const{
    return preco;
}

void Barbeiro :: setPreco(double preco){
    this->preco = preco;
}

Tempo Barbeiro :: getHorarioInicioDeFuncionamento() const{
    return horarioInicioDeFuncionamento;
}

void Barbeiro :: setHorarioInicioDeFuncionamento(Tempo horario){
    this->horarioInicioDeFuncionamento = horario;
}

Tempo Barbeiro :: getHorarioFinalDeFuncionamento() const{
    return horarioFinalDeFuncionamento;
}

void Barbeiro :: setHorarioFinalDeFuncionamento(Tempo horario){
    this->horarioFinalDeFuncionamento = horario;
}

Tempo Barbeiro :: getTempoDeAtendimento() const{
    return tempoDeAtendimento;
}

void Barbeiro :: setTempoDeAtendimento(Tempo horario){
    this->tempoDeAtendimento = horario;
}
