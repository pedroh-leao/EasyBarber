#ifndef UNIT_BARBEIRO_H
#define UNIT_BARBEIRO_H

#include "../../EasyBarber/Controller/controller_barbeiro.h"
#include "../../EasyBarber/Model/barbeiro.h"
#include "iostream"
#include <assert.h>
using namespace std;

/*
@brief Testa o método getPreco da classe Barbeiro
*/
void unit_Barbeiro_GetPreco();

/*
@brief Testa o método setPreco da classe Barbeiro
*/
void unit_Barbeiro_SetPreco();

/*
@brief Testa o método add da classe Barbeiro para adicionar um horário
*/
void unit_Barbeiro_AddHorario();

/*
@brief Testa o método remove da classe Barbeiro para remover um horário
*/
void unit_Barbeiro_RemoveHorario();

/*
@brief Executa todos os testes unitários relacionados à classe Barbeiro
*/
void run_unit_test_barbeiro();

/*
@brief Testa a busca de um barbeiro pelo email
*/
void unit_Barbeiro_buscarBarbeiroPeloEmail();

/*
@brief Testa a busca de horários agendados para um barbeiro
*/
void unit_Barbeiro_buscarHorariosAgendados();

/*
@brief Testa a atualização do nome de um barbeiro
*/
void unit_Barbeiro_updateNome();

/*
@brief Testa a atualização do endereço de um barbeiro
*/
void unit_Barbeiro_updateEndereco();

/*
@brief Testa a atualização do telefone de um barbeiro
*/
void unit_Barbeiro_updateTelefone();

/*
@brief Testa a atualização da senha de um barbeiro
*/
void unit_Barbeiro_updateSenha();

/*
@brief Testa a atualização do preço dos serviços de um barbeiro
*/
void unit_Barbeiro_updatePreco();


#endif // UNIT_BARBEIRO_H
