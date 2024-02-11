#ifndef UNIT_CLIENTE_H
#define UNIT_CLIENTE_H

#include "../../EasyBarber/Model/cliente.h"
#include "../../EasyBarber/Controller/controller_cliente.h"
#include "iostream"
#include <assert.h>
using namespace std;

void run_unit_test_cliente();

void unit_Cliente_getClientePeloEmail();
void unit_Cliente_buscarHorariosAgendados();
void unit_Cliente_updateNome();
void unit_Cliente_updateEndereco();
void unit_Cliente_updateTelefone();
void unit_Cliente_updateSenha();


#endif // UNIT_CLIENTE_H
