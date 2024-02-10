#ifndef DAO_BARBEARIA_H
#define DAO_BARBEARIA_H

#include "../Model/Cliente.h"
#include "../Model/barbearia.h"
#include "dao_barbeiro.h"

class DAO_Barbearia
{
private:
    DAO_Barbeiro * dao_barbeiro;

public:
    DAO_Barbearia();
    ~DAO_Barbearia();
    Barbearia* buscaBarbeariaPeloEmail(string emailBarbearia);
    void buscaBarbeirosAssociados(Barbearia * barbearia);
    void buscarHorariosAgendados(Barbearia * barbearia);

    bool realizarAgendamento(Barbeiro* barbeiro, Cliente* cliente, Horario* horario);
    bool removerBarbeiro(Barbeiro * barbeiro);
    bool atualizarCampoString(string& campo, string& novoValor, string& email);

};

#endif // DAO_BARBEARIA_H
