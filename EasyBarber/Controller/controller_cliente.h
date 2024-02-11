#ifndef CONTROLLER_CLIENTE_H
#define CONTROLLER_CLIENTE_H

#include "../Model/Cliente.h"
#include "../DAO/dao_cliente.h"

class Controller_Cliente{

protected:
    DAO_Cliente * dao_cliente;

public:
    Controller_Cliente();

    Cliente* getClientePeloEmail(string userEmail);
    int buscarHorariosAgendados(Cliente* cliente);

    bool updateNome(Cliente* cliente, const string& nome);
    bool updateEndereco(Cliente* cliente, const string& endereco);
    bool updateTelefone(Cliente* cliente, const string& telefone);
    bool updateSenha(Cliente* cliente, const string& senha);

    bool removeHorario(Cliente * cliente, Horario * horario);

};


#endif
