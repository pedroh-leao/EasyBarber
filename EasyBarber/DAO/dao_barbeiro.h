#ifndef DAO_BARBEIRO_H
#define DAO_BARBEIRO_H

#include "dao_pessoa.h"
#include "../Model/Barbeiro.h"

class DAO_Barbeiro : public DAO_Pessoa
{
public:
    DAO_Barbeiro();
    Barbeiro * getBarbeiroPeloEmail(string barbeiroEmail);
    vector<Horario*> buscaHorariosAgendados(Barbeiro * barbeiro);
    bool removeHorario(Barbeiro * barbeiro, Horario * horario);

    bool updateNome(Barbeiro* barbeiro, const string& nome);
    bool updateEndereco(Barbeiro* barbeiro, const string& endereco);
    bool updateTelefone(Barbeiro* barbeiro, const string& telefone);
    bool updateSenha(Barbeiro* barbeiro, const string& senha);
    bool updatePreco(Barbeiro* barbeiro, const float& preco);
};

#endif // DAO_BARBEIRO_H
