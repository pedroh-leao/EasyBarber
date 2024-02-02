#include "unit_barbearia.h"

void unit_Barbearia_GetNome() {
    Barbearia barbearia("Nome", "Endereco", "Telefone", "Email", "Inicio", "Fim");
    assert(barbearia.getNome() == "Nome");
}

void unit_Barbearia_SetNome() {
    Barbearia barbearia;
    barbearia.setNome("Nome");
    assert(barbearia.getNome() == "Nome");
}

void unit_Barbearia_GetEndereco() {
    Barbearia barbearia("Nome", "Endereco", "Telefone", "Email", "Inicio", "Fim");
    assert(barbearia.getEndereco() == "Endereco");
}

// Teste setEndereco
void unit_Barbearia_SetEndereco() {
    Barbearia barbearia;
    barbearia.setEndereco("Endereco");
    assert(barbearia.getEndereco() == "Endereco");
}


void run_unit_test_barbearia() {
    cout << "Iniciando os testes unitários para Barbearia" << endl;

    unit_Barbearia_GetNome();
    unit_Barbearia_GetEndereco();
    unit_Barbearia_SetNome();
    unit_Barbearia_SetEndereco();

    cout << "Todos os testes de Barbearia foram aprovados\n" << endl;
}
