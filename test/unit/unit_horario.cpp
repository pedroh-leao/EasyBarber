#include "unit_horario.h"

void unit_Horario_GetData() {
    Horario horario("2024-02-02", "10:30");
    assert(horario.getData() == "2024-02-02");
}

void unit_Horario_SetData() {
    Horario horario;
    horario.setData("2024-02-02");
    assert(horario.getData() == "2024-02-02");
}

void unit_Horario_GetHora() {
    Horario horario("2024-02-02", "10:30");
    assert(horario.getHora() == "10:30");
}

void unit_Horario_SetHora() {
    Horario horario;
    horario.setHora("10:30");
    assert(horario.getHora() == "10:30");
}

void run_unit_test_horario() {
    cout << "Iniciando os testes unitários para Horario" << endl;

    unit_Horario_GetData();
    unit_Horario_SetData();
    unit_Horario_GetHora();
    unit_Horario_SetHora();

    cout << "Todos os testes de Horario foram aprovados\n" << endl;
}
