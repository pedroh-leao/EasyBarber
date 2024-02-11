#ifndef UNIT_BARBEIRO_H
#define UNIT_BARBEIRO_H

#include "../../EasyBarber/Controller/controller_barbeiro.h"
#include "../../EasyBarber/Model/barbeiro.h"
#include "iostream"
#include <assert.h>
using namespace std;

void unit_Barbeiro_GetPreco();
void unit_Barbeiro_SetPreco();
void unit_Barbeiro_AddHorario();
void unit_Barbeiro_RemoveHorario();
void run_unit_test_barbeiro();

void unit_Barbeiro_buscarBarbeiroPeloEmail();
void unit_Barbeiro_buscarHorariosAgendados();
void unit_Barbeiro_updateNome();
void unit_Barbeiro_updateEndereco();
void unit_Barbeiro_updateTelefone();
void unit_Barbeiro_updateSenha();
void unit_Barbeiro_updatePreco();

#endif // UNIT_BARBEIRO_H
