#include "controller_cliente.h"

Controller_Cliente::Controller_Cliente(){
    dao_cliente = new DAO_Cliente();
}

Cliente* Controller_Cliente::getClientePeloEmail(string userEmail){
    return dao_cliente->getClientePeloEmail(userEmail);
}
int Controller_Cliente::buscarHorariosAgendados(Cliente* cliente){
    vector<Horario*>lista_horarios = dao_cliente->buscaHorariosAgendados(cliente);
    int cont = 0;
    for(Horario* horario: lista_horarios){
        cliente->add(horario);
        cont++;
    }
    return cont;
}


bool Controller_Cliente::updateNome(Cliente* cliente, const string& nome){
    if(!dao_cliente->updateNome(cliente, nome)) return false;
    cliente->setNome(nome);
    return true;
}
bool Controller_Cliente::updateEndereco(Cliente* cliente, const string& endereco){
    if(!dao_cliente->updateEndereco(cliente, endereco)) return false;
    cliente->setEndereco(endereco);
    return true;
}
bool Controller_Cliente::updateTelefone(Cliente* cliente, const string& telefone){
    if(!dao_cliente->updateTelefone(cliente, telefone)) return false;
    cliente->setTelefone(telefone);
    return true;
}
bool Controller_Cliente::updateSenha(Cliente* cliente, const string& senha){
    if(!dao_cliente->updateSenha(cliente, senha)) return false;
    cliente->setSenha(senha);
    return true;
}