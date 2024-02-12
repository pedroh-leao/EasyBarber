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
    unit_Horario_adicionarHorario();
    unit_Horario_deletarHorario();

    cout << "Todos os testes de Horario foram aprovados\n" << endl;
}


void unit_Horario_adicionarHorario(){
    Controller_Horario controller_horario;

    Barbeiro barbeiro("João", "", "", "joaoBarber@gmail.com", "", 30.0);
    Cliente cliente("André", "", "", "andre@gmail.com", "");

    Horario horario("11-02-2024", "12:00", "andre@gmail.com", "joaoBarber@gmail.com");

    assert(controller_horario.adicionarHorario(&barbeiro, &cliente, &horario));
}

void unit_Horario_deletarHorario(){
    Controller_Horario controller_horario;
    Controller_Barbearia controller_barbearia;

    Barbearia barbearia("Barbearia do Tadeu", "", "", "barbeariaTadeu@gmail.com", "09:00", "17:00");
    Barbeiro barbeiro("João", "", "", "joaoBarber@gmail.com", "", 30.0);
    barbearia.add(&barbeiro);
    Cliente cliente("André", "", "", "andre@gmail.com", "");

    Horario horario("11-02-2024", "12:30", "andre@gmail.com", "joaoBarber@gmail.com");

    controller_barbearia.realizarAgendamento(&barbearia, &barbeiro, &cliente, &horario);
    assert(controller_horario.deletarHorario(&horario, &cliente, &barbearia));
}
