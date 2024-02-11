#ifndef UNIT_BARBEARIA_H
#define UNIT_BARBEARIA_H

#include "../../EasyBarber/Model/barbearia.h"
#include "../../EasyBarber/Controller/controller_barbearia.h"
#include "iostream"
#include <assert.h>

void unit_Barbearia_GetNome();

void unit_Barbearia_SetNome();

void unit_Barbearia_GetEndereco();

void unit_Barbearia_SetEndereco();

void unit_Barbearia_buscarBarbeariaPeloEmail();

void unit_Barbearia_buscarBarbeirosAssociados();

void unit_Barbearia_buscarHorariosAgendados();

void unit_Barbearia_realizarAgendamento();

void unit_Barbearia_removerBarbeiro();

void unit_Barbearia_atualizaNome();

void unit_Barbearia_atualizaEndereco();

void unit_Barbearia_atualizaTelefone();

void unit_Barbearia_atualizarInicioDeFuncionamento();

void unit_Barbearia_atualizarFimDeFuncionamento();

void run_unit_test_barbearia();

#endif // UNIT_BARBEARIA_H
