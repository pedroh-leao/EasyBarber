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
