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

    unit_Barbeiro_buscarBarbeiroPeloEmail();
    unit_Barbeiro_buscarHorariosAgendados();
    unit_Barbeiro_updateNome();
    unit_Barbeiro_updateEndereco();
    unit_Barbeiro_updateTelefone();
    unit_Barbeiro_updateSenha();
    unit_Barbeiro_updatePreco();

    cout << "Todos os testes de Barbeiro foram aprovados\n" << endl;
}

void unit_Barbeiro_buscarBarbeiroPeloEmail(){
    Controller_Barbeiro controller_barbeiro;
    Barbeiro * barbeiro = controller_barbeiro.getBarbeiroPeloEmail("marcosBarber@gmail.com");

    assert(
        barbeiro->getNome() == "Marcos" &&
        barbeiro->getEmail() == "marcosBarber@gmail.com" &&
        barbeiro->getTelefone() == "31888888888"
    );

    delete barbeiro;
}
void unit_Barbeiro_buscarHorariosAgendados(){
    Controller_Barbeiro controller_barbeiro;
    Barbeiro * barbeiro = controller_barbeiro.getBarbeiroPeloEmail("marcosBarber@gmail.com");
    int total_horarios = controller_barbeiro.buscarHorariosAgendados(barbeiro);
    assert(total_horarios == 0);
    delete barbeiro;
}
void unit_Barbeiro_updateNome(){
    Controller_Barbeiro controller_barbeiro;
    Barbeiro * barbeiro = controller_barbeiro.getBarbeiroPeloEmail("marcosBarber@gmail.com");
    controller_barbeiro.updateNome(barbeiro, "Nome2");

    Barbeiro * barbeiro2 = controller_barbeiro.getBarbeiroPeloEmail("marcosBarber@gmail.com");
    assert(barbeiro->getNome() == barbeiro2->getNome());

    delete barbeiro;
    delete barbeiro2;
}
void unit_Barbeiro_updateEndereco(){
    Controller_Barbeiro controller_barbeiro;
    Barbeiro * barbeiro = controller_barbeiro.getBarbeiroPeloEmail("marcosBarber@gmail.com");
    controller_barbeiro.updateEndereco(barbeiro, "Endereco2");

    Barbeiro * barbeiro2 = controller_barbeiro.getBarbeiroPeloEmail("marcosBarber@gmail.com");
    assert(barbeiro->getEndereco() == barbeiro2->getEndereco());

    delete barbeiro;
    delete barbeiro2;
}
void unit_Barbeiro_updateTelefone(){
    Controller_Barbeiro controller_barbeiro;
    Barbeiro * barbeiro = controller_barbeiro.getBarbeiroPeloEmail("marcosBarber@gmail.com");
    controller_barbeiro.updateTelefone(barbeiro, "Telefone2");

    Barbeiro * barbeiro2 = controller_barbeiro.getBarbeiroPeloEmail("marcosBarber@gmail.com");
    assert(barbeiro->getTelefone() == barbeiro2->getTelefone());

    delete barbeiro;
    delete barbeiro2;
}
void unit_Barbeiro_updateSenha(){
    Controller_Barbeiro controller_barbeiro;
    Barbeiro * barbeiro = controller_barbeiro.getBarbeiroPeloEmail("marcosBarber@gmail.com");
    controller_barbeiro.updateSenha(barbeiro, "Senha2");

    Barbeiro * barbeiro2 = controller_barbeiro.getBarbeiroPeloEmail("marcosBarber@gmail.com");
    assert(barbeiro->getSenha() == barbeiro2->getSenha());

    delete barbeiro;
    delete barbeiro2;
}
void unit_Barbeiro_updatePreco(){
    Controller_Barbeiro controller_barbeiro;
    Barbeiro * barbeiro = controller_barbeiro.getBarbeiroPeloEmail("marcosBarber@gmail.com");
    controller_barbeiro.updatePreco(barbeiro, 50.0f);

    Barbeiro * barbeiro2 = controller_barbeiro.getBarbeiroPeloEmail("marcosBarber@gmail.com");
    assert(barbeiro->getPreco() == barbeiro2->getPreco());

    delete barbeiro;
    delete barbeiro2;
}
