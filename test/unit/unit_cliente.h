#ifndef UNIT_CLIENTE_H
#define UNIT_CLIENTE_H

#include "../../EasyBarber/Model/cliente.h"
#include "../../EasyBarber/Controller/controller_cliente.h"
#include "iostream"
#include <assert.h>
using namespace std;

/**
 * @brief Executa todos os testes unitários para a classe Cliente.
 */
void run_unit_test_cliente();

/**
 * @brief Testa a função getClientePeloEmail da classe Controller_Cliente.
 */
void unit_Cliente_getClientePeloEmail();

/**
 * @brief Testa a função buscarHorariosAgendados da classe Controller_Cliente.
 */
void unit_Cliente_buscarHorariosAgendados();

/**
 * @brief Testa a função updateNome da classe Controller_Cliente.
 */
void unit_Cliente_updateNome();

/**
 * @brief Testa a função updateEndereco da classe Controller_Cliente.
 */
void unit_Cliente_updateEndereco();

/**
 * @brief Testa a função updateTelefone da classe Controller_Cliente.
 */
void unit_Cliente_updateTelefone();

/**
 * @brief Testa a função updateSenha da classe Controller_Cliente.
 */
void unit_Cliente_updateSenha();

#endif // UNIT_CLIENTE_H
