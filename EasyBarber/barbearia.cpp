#include "Barbearia.h"

Barbearia::Barbearia() {}

Barbearia::Barbearia(string nome, string endereco, string telefone, string email, string inicioDeFuncionamento, string fimDeFuncionamento, const bool diasDeFuncionamento[])
    : nome(nome), endereco(endereco), telefone(telefone), email(email), inicioDeFuncionamento(inicioDeFuncionamento), fimDeFuncionamento(fimDeFuncionamento) {
    for (int i = 0; i < 7; ++i) {
        this->diasDeFuncionamento[i] = diasDeFuncionamento[i];
    }
}

string Barbearia::getNome() const {
    return nome;
}

void Barbearia::setNome(const string& nome) {
    this->nome = nome;
}

string Barbearia::getEndereco() const {
    return endereco;
}

void Barbearia::setEndereco(const string& endereco) {
    this->endereco = endereco;
}

string Barbearia::getTelefone() const {
    return telefone;
}

void Barbearia::setTelefone(const string& telefone) {
    this->telefone = telefone;
}

string Barbearia::getEmail() const {
    return email;
}

void Barbearia::setEmail(const string& email) {
    this->email = email;
}

string Barbearia::getInicioDeFuncionamento() const {
    return inicioDeFuncionamento;
}

void Barbearia::setInicioDeFuncionamento(const string& inicioDeFuncionamento) {
    this->inicioDeFuncionamento = inicioDeFuncionamento;
}

string Barbearia::getFimDeFuncionamento() const {
    return fimDeFuncionamento;
}

void Barbearia::setFimDeFuncionamento(const string& fimDeFuncionamento) {
    this->fimDeFuncionamento = fimDeFuncionamento;
}

bool Barbearia::getDiaDeFuncionamento(int dia) const {
    if (dia >= 0 && dia < 7)
        return diasDeFuncionamento[dia];
    return false; // Return false if index is out of bounds
}

void Barbearia::setDiaDeFuncionamento(int dia, bool status) {
    if (dia >= 0 && dia < 7)
        diasDeFuncionamento[dia] = status;
}

vector<Barbeiro>& Barbearia::getBarbeiros() {
    return barbeiros;
}

const vector<Barbeiro>& Barbearia::getBarbeiros() const {
    return barbeiros;
}

void Barbearia::setBarbeiros(const vector<Barbeiro>& barbeiros) {
    this->barbeiros = barbeiros;
}
