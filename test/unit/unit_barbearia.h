#ifndef UNIT_BARBEARIA_H
#define UNIT_BARBEARIA_H

#include "../../EasyBarber/Model/barbearia.h"
#include "../../EasyBarber/Controller/controller_barbearia.h"
#include "iostream"
#include <assert.h>

/*
@brief Testa o método getNome da classe Barbearia
*/
void unit_Barbearia_GetNome();

/*
@brief Testa o método setNome da classe Barbearia
*/
void unit_Barbearia_SetNome();

/*
@brief Testa o método getEndereco da classe Barbearia
*/
void unit_Barbearia_GetEndereco();

/*
@brief Testa o método setEndereco da classe Barbearia
*/
void unit_Barbearia_SetEndereco();

/*
@brief Testa a busca de uma Barbearia pelo email
*/
void unit_Barbearia_buscarBarbeariaPeloEmail();

/*
@brief Testa a busca de barbeiros associados a uma Barbearia
*/
void unit_Barbearia_buscarBarbeirosAssociados();

/*
@brief Testa a busca de horários agendados em uma Barbearia
*/
void unit_Barbearia_buscarHorariosAgendados();

/*
@brief Testa o agendamento em uma Barbearia
*/
void unit_Barbearia_realizarAgendamento();

/*
@brief Testa a remoção de um barbeiro de uma Barbearia
*/
void unit_Barbearia_removerBarbeiro();

/*
@brief Testa a atualização do nome de uma Barbearia
*/
void unit_Barbearia_atualizaNome();

/*
@brief Testa a atualização do endereço de uma Barbearia
*/
void unit_Barbearia_atualizaEndereco();

/*
@brief Testa a atualização do telefone de uma Barbearia
*/
void unit_Barbearia_atualizaTelefone();

/*
@brief Testa a atualização do horário de início de funcionamento de uma Barbearia
*/
void unit_Barbearia_atualizarInicioDeFuncionamento();

/*
@brief Testa a atualização do horário de fim de funcionamento de uma Barbearia
*/
void unit_Barbearia_atualizarFimDeFuncionamento();

/*
@brief Executa todos os testes unitários relacionados à classe Barbearia
*/
void run_unit_test_barbearia();

#endif // UNIT_BARBEARIA_H
