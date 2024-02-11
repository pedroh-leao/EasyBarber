#ifndef UNIT_PESSOA_H
#define UNIT_PESSOA_H

#include "../../EasyBarber/Model/pessoa.h"
#include "iostream"
#include <assert.h>

/**
 * @brief Testa a função de set e get do nome para a classe Pessoa.
 */
void unit_Pessoa_get_set_nome();

/**
 * @brief Testa a função de set e get do endereço para a classe Pessoa.
 */
void unit_Pessoa_get_set_endereco();

/**
 * @brief Testa a função de set e get do telefone para a classe Pessoa.
 */
void unit_Pessoa_get_set_telefone();

/**
 * @brief Testa a função de set e get do email para a classe Pessoa.
 */
void unit_Pessoa_get_set_email();

/**
 * @brief Testa a função de set e get da senha para a classe Pessoa.
 */
void unit_Pessoa_get_set_senha();

/**
 * @brief Executa todos os testes unitários para a classe Pessoa.
 */
void run_unit_test_pessoa();

#endif // UNIT_PESSOA_H
