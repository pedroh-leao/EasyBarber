#include "controller_barbeiro.h"

Controller_Barbeiro::Controller_Barbeiro(){
    dao_barbeiro = new DAO_Barbeiro();
}

Barbeiro* Controller_Barbeiro::getBarbeiroPeloEmail(string barbeiroEmail){
    return dao_barbeiro->getBarbeiroPeloEmail(barbeiroEmail);
}

int Controller_Barbeiro::buscarHorariosAgendados(Barbeiro* barbeiro){
    vector<Horario*>lista_horarios = dao_barbeiro->buscaHorariosAgendados(barbeiro);
    int cont = 0;
    for(Horario* horario: lista_horarios){
        barbeiro->add(horario);
        cont++;
    }
    return cont;
}

bool Controller_Barbeiro::removeHorario(Barbeiro * barbeiro, Horario * horario){
    if(!dao_barbeiro->removeHorario(barbeiro, horario)) return false;
    barbeiro->remove(horario);
    return true;
}

bool Controller_Barbeiro::updateNome(Barbeiro* barbeiro, const string& nome){
    if(!dao_barbeiro->updateNome(barbeiro, nome)) return false;
    barbeiro->setNome(nome);
    return true;
}
bool Controller_Barbeiro::updateEndereco(Barbeiro* barbeiro, const string& endereco){
    if(!dao_barbeiro->updateEndereco(barbeiro, endereco)) return false;
    barbeiro->setEndereco(endereco);
    return true;
}
bool Controller_Barbeiro::updateTelefone(Barbeiro* barbeiro, const string& telefone){
    if(!dao_barbeiro->updateTelefone(barbeiro, telefone)) return false;
    barbeiro->setTelefone(telefone);
    return true;
}
bool Controller_Barbeiro::updateSenha(Barbeiro* barbeiro, const string& senha){
    if(!dao_barbeiro->updateSenha(barbeiro, senha)) return false;
    barbeiro->setSenha(senha);
    return true;
}
bool Controller_Barbeiro::updatePreco(Barbeiro* barbeiro, const float& preco){
    if(!dao_barbeiro->updatePreco(barbeiro, preco)) return false;
    barbeiro->setPreco(preco);
    return true;
}
