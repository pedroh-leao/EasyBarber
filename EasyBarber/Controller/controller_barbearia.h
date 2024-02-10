#ifndef CONTROLLER_BARBEARIA_H
#define CONTROLLER_BARBEARIA_H

#include "../Model/barbearia.h"
#include "../DAO/dao_barbearia.h"

class Controller_Barbearia{

protected:
    DAO_Barbearia * dao_barbearia;

public:
    Controller_Barbearia();

    Barbearia* buscarBarbeariaPeloEmail(string emailBarbearia);
    void buscaBarbeirosAssociados(Barbearia * barbearia);
    void buscarHorariosAgendados(Barbearia * barbearia);

    bool realizarAgendamento(Barbearia * barbearia, Barbeiro* barbeiro, Cliente* cliente, Horario* horario);
    bool removerBarbeiro(Barbearia * barbearia, Barbeiro * barbeiro);
    bool atualizarCampoString(string& campo, string& novoValor, string& email);

    bool atualizarNome(Barbearia * barbearia, string nome);
    bool atualizarEndereco(Barbearia * barbearia, string endereco);
    bool atualizarTelefone(Barbearia * barbearia, string telefone);
    bool atualizarInicioDeFuncionamento(Barbearia * barbearia, string inicioDeFuncionamento);
    bool atualizarFimDeFuncionamento(Barbearia * barbearia, string fimDeFuncionamento);

};

#endif
