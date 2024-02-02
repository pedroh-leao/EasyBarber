#include "Pessoa.h"

Pessoa::Pessoa() {}

Pessoa::Pessoa(string nome, string endereco, string telefone, string email, string senha)
    : nome(nome), endereco(endereco), telefone(telefone), email(email), senha(senha) {}

Pessoa::~Pessoa() {}

// Getters
string Pessoa::getNome() const {
    return nome;
}

string Pessoa::getEndereco() const {
    return endereco;
}

string Pessoa::getTelefone() const {
    return telefone;
}

string Pessoa::getEmail() const {
    return email;
}

string Pessoa::getSenha() const {
    return senha;
}

// Setters
void Pessoa::setNome(const string& nome) {
    this->nome = nome;
}

void Pessoa::setEndereco(const string& endereco) {
    this->endereco = endereco;
}

void Pessoa::setTelefone(const string& telefone) {
    this->telefone = telefone;
}

void Pessoa::setEmail(const string& email) {
    this->email = email;
}

void Pessoa::setSenha(const string& senha) {
    this->senha = senha;
}
