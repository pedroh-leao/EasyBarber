#ifndef DAO_CLIENTE_H
#define DAO_CLIENTE_H

#include "../Model/Cliente.h"
#include "dao_pessoa.h"

class DAO_Cliente : public DAO_Pessoa
{
public:
    DAO_Cliente();
    Cliente* getClientePeloEmail(string userEmail);
    vector<Horario*> buscaHorariosAgendados(Cliente * cliente);
    bool removeHorario(Cliente * cliente, Horario * horario);

    bool updateNome(Cliente* cliente, const string& nome);
    bool updateEndereco(Cliente* cliente, const string& endereco);
    bool updateTelefone(Cliente* cliente, const string& telefone);
    bool updateSenha(Cliente* cliente, const string& senha);
};

#endif // DAO_CLIENTE_H
