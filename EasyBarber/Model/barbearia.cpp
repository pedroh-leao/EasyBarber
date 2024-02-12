#include "barbearia.h"

Barbearia::Barbearia() {}

Barbearia::Barbearia(string nome, string endereco, string telefone, string email, string inicioDeFuncionamento, string fimDeFuncionamento)
    : nome(nome), endereco(endereco), telefone(telefone), email(email), inicioDeFuncionamento(inicioDeFuncionamento), fimDeFuncionamento(fimDeFuncionamento) {}

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

Barbearia::barbeirosIterator Barbearia::barbeirosBegin(){
    return barbeiros.begin();
}

Barbearia::barbeirosIterator Barbearia::barbeirosEnd(){
    return barbeiros.end();
}

bool Barbearia::add(Barbeiro* barbeiro){
    unsigned long long lenBefore = barbeiros.size();

    barbeiros.push_back(barbeiro);

    return (lenBefore != barbeiros.size());
}

bool Barbearia::remove(Barbeiro* barbeiro){
    for(Barbearia::barbeirosIterator it = barbeirosBegin(); it < barbeirosEnd(); it++){
        if((*it)->getEmail() == barbeiro->getEmail()){
            barbeiros.erase(it);
            //delete barbeiro;
            return true;
        }
    }

    return false;
}

bool Barbearia::horarioEstaLivre(Barbeiro* barbeiro, Cliente* cliente, Horario* horario){
    return !(cliente->existsHorario(horario) || barbeiro->existsHorario(horario));
}

bool Barbearia::realizarAgendamento(Barbeiro* barbeiro, Cliente* cliente, Horario* horario){
    barbeiro->add(horario);
    cliente->add(horario);
    return true;
}

//bool Barbearia::removerHorario(string emailBarbeiro, Horario * horario)
