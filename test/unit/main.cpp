#include <iostream>

using namespace std;
#include "unit_pessoa.h"
#include "unit_barbearia.h"
#include "unit_horario.h"
#include "unit_barbeiro.h"
#include "unit_cliente.h"
#include "../database/database.h"

int main()
{

    TesteDatabase * bd = new TesteDatabase();
    bd->initTestCase();
    bd->popularBancoDeDados();

    run_unit_test_pessoa();
    run_unit_test_horario();
    run_unit_test_barbeiro();
    run_unit_test_cliente();
    run_unit_test_barbearia();
    
    bd->cleanupTestCase();
    delete bd;
    return 0;
}
