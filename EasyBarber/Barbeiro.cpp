#include "Barbeiro.h"

Barbeiro::Barbeiro(string nome, string endereco, string telefone, string email, string senha, float preco)
    : Pessoa(nome, endereco, telefone, email, senha), preco(preco) {}

Barbeiro::~Barbeiro() {}

float Barbeiro::getPreco() const {
    return preco;
}

void Barbeiro::setPreco(float preco) {
    this->preco = preco;
}

Barbeiro::horariosAgendadosIterator Barbeiro::horariosAgendadosBegin(){
    return horariosAgendados.begin();
}

Barbeiro::horariosAgendadosIterator Barbeiro::horariosAgendadosEnd(){
    return horariosAgendados.end();
}

bool Barbeiro::add(Horario* horario){
    unsigned long long lenBefore = horariosAgendados.size();

    horariosAgendados.push_back(horario);

    return (lenBefore != horariosAgendados.size());
}

bool Barbeiro::remove(Horario* horario){
    for(Barbeiro::horariosAgendadosIterator it = horariosAgendadosBegin(); it < horariosAgendadosEnd(); it++){
        if(*it == horario){
            horariosAgendados.erase(it);
            //delete horario;
            return true;
        }
    }

    return false;
}
