#ifndef FUNCTIONAL_TESTS_H
#define FUNCTIONAL_TESTS_H

#include "../../EasyBarber/Controller/controller_barbearia.h"
#include "../../EasyBarber/Controller/controller_barbeiro.h"
#include "../../EasyBarber/Controller/controller_cliente.h"
#include "../../EasyBarber/Controller/controller_horario.h"

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

/*
    Dado um cliente André, que deseja marcar um horário na Barbearia do Tadeu com o barbeiro João
    Quando o usuário escolher o seu horário e ele estiver disponível, o seu horário será agendado
    Então ele deverá cancelar o seu horário, pois ocorreu um imprevisto
*/
void functional_agendar_horario_cancelar();

/*
    Dado um cliente André, que deseja marcar um horário para corte às 12:00 do dia 12-02-2024
    Quando realizar o agendamento, ele será feito corretamente, mas deverá ser cancelado, pois André esqueceu de um compromisso
    Então deverá ser marcado novamente no mesmo horário, pois o compromisso dele era em outro dia
*/
void functional_agendar_horario_duas_vezes();

/*
    Dado um cliente André, que deseja marcar um horário para corte às 15:00 do dia 12-02-2024
    Quando realizar o agendamento, ele será feito corretamente, mas deverá ser cancelado
    Então o cliente Vitor agendará no lugar de André, que não conseguirá mais marcar neste horario
*/
void functional_perder_horario();
#endif // FUNCTIONAL_TESTS_H
