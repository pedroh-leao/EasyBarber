#include "unit_barbeiro.h"

void unit_Barbeiro_GetPreco() {
    Barbeiro barbeiro("Joao", "Rua X", "123456789", "joao@gmail.com", "senha", 50.0);
    assert(barbeiro.getPreco() == 50.0);
}

void unit_Barbeiro_SetPreco() {
    Barbeiro barbeiro;
    barbeiro.setPreco(60.0);
    assert(barbeiro.getPreco() == 60.0);
}

void unit_Barbeiro_AddHorario() {
    Barbeiro barbeiro;
    Horario *horario = new Horario("02/02/2024", "10:30");
    assert(barbeiro.add(horario));
}

void unit_Barbeiro_RemoveHorario() {
    Barbeiro barbeiro;
    Horario *horario = new Horario("02/02/2024", "10:30");
    barbeiro.add(horario);
    assert(barbeiro.remove(horario));
}

void run_unit_test_barbeiro() {
    cout << "Iniciando os testes unitários para Barbeiro" << endl;

    unit_Barbeiro_GetPreco();
    unit_Barbeiro_SetPreco();
    unit_Barbeiro_AddHorario();
    unit_Barbeiro_RemoveHorario();

    cout << "Todos os testes de Barbeiro foram aprovados\n" << endl;
}
