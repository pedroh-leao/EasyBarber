#ifndef UNIT_HORARIO_H
#define UNIT_HORARIO_H

#include "../../EasyBarber/Model/barbearia.h"
#include "iostream"
#include <assert.h>

/**
 * @brief Testa a função de obtenção da data para a classe Horario.
 */
void unit_Horario_GetData();

/**
 * @brief Testa a função de configuração da data para a classe Horario.
 */
void unit_Horario_SetData();

/**
 * @brief Testa a função de obtenção da hora para a classe Horario.
 */
void unit_Horario_GetHora();

/**
 * @brief Testa a função de configuração da hora para a classe Horario.
 */
void unit_Horario_SetHora();

/**
 * @brief Executa todos os testes unitários para a classe Horario.
 */
void run_unit_test_horario();

#endif // UNIT_HORARIO_H
