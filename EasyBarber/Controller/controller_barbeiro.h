#ifndef CONTROLLER_BARBEIRO_H
#define CONTROLLER_BARBEIRO_H

#include "../Model/Barbeiro.h"
#include "../DAO/dao_barbeiro.h"

class Controller_Barbeiro{
protected:
    DAO_Barbeiro *dao_barbeiro;

public:
    Controller_Barbeiro();

    Barbeiro * getBarbeiroPeloEmail(string barbeiroEmail);
    int buscarHorariosAgendados(Barbeiro* barbeiro);
    bool removeHorario(Barbeiro * barbeiro, Horario * horario);

    bool updateNome(Barbeiro* barbeiro, const string& nome);
    bool updateEndereco(Barbeiro* barbeiro, const string& endereco);
    bool updateTelefone(Barbeiro* barbeiro, const string& telefone);
    bool updateSenha(Barbeiro* barbeiro, const string& senha);
    bool updatePreco(Barbeiro* barbeiro, const float& preco);
};

#endif
