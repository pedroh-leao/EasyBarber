#include <iostream>
#include "functional_tests.h"
#include "../database/database.h"

using namespace std;

int main()
{
    TesteDatabase * bd =  new TesteDatabase();
    bd->initTestCase();
    bd->popularBancoDeDados();

    functional_tests();

    bd->cleanupTestCase();

    return 0;
}
