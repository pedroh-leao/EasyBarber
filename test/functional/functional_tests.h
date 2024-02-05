#ifndef FUNCTIONAL_TESTS_H
#define FUNCTIONAL_TESTS_H

#include "../../EasyBarber/barbearia.h"
#include "../../EasyBarber/cliente.h"
#include "../../EasyBarber/horario.h"
#include <assert.h>
#include <iostream>
using namespace std;

void functional_tests();

/*
    Dado um cliente chamado André, uma barbearia chamada "Barbearia do Tadeu" com um barbeiro chamado "João"
    Quando o usuário escolher qual o seu barbeiro e o horário de atendimento que ele deseja, marcará o seu agendamento
    Então os dados serão salvos e o seu agendamento estrá concluído
*/
void functional_agendar_horario_sucesso();

/*
    Dado dois clientes, André e Vitor, que desejam marcar um horario na Barbearia do Tadeu com o barbeiro João no mesmo horário
    Quando João realizar o seu agendamento, tudo funcionará corretamente e será marcado, mas para Vitor isso não ocorrerá
    Então Vitor irá escolher um outro horario e, dessa vez o agendamento será feito de maneira correta
*/
void functional_agendar_horario_falha();

#endif // FUNCTIONAL_TESTS_H
