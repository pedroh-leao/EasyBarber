#include "functional_tests.h"

void functional_agendar_horario_sucesso(){
    Barbearia barbearia("Barbearia do Tadeu", "Rua do Lino, 244 - Bauxita, Ouro Preto", "31998989898", "barbeariaTadeu@gmail.com", "09:00", "17:00");
    Barbeiro barbeiro("João", "Rua do Lino, 244 - Bauxita, Ouro Preto", "31999999999", "joaoBarber@gmail.com", "1234", 30.0);
    Cliente cliente("André", "Rua da UFOP, 123", "31988888888", "andre@gmail.com", "1234");

    Horario horarioSelecionado("04/02/2023", "17:30");
    
    bool agendamento = barbearia.realizarAgendamento(&barbeiro, &cliente, &horarioSelecionado);

    assert(agendamento);

}

void functional_agendar_horario_falha(){
    Barbearia barbearia("Barbearia do Tadeu", "Rua do Lino, 244 - Bauxita, Ouro Preto", "31998989898", "barbeariaTadeu@gmail.com", "09:00", "17:00");
    Barbeiro barbeiro("João", "Rua do Lino, 244 - Bauxita, Ouro Preto", "31999999999", "joaoBarber@gmail.com", "1234", 30.0);
    Cliente cliente1("André", "Rua da UFOP, 123", "31988888888", "andre@gmail.com", "1234");
    Cliente cliente2("Vitor", "Avenida Principal, 321", "3197777777", "vitor@gmail.com", "4321");

    //Cadastro de horario feito corretamente
    Horario horarioSelecionado("04/02/2023", "17:30");
    barbearia.realizarAgendamento(&barbeiro, &cliente1, &horarioSelecionado);


    //Cadastro de horario que não sera bem sucedido
    Horario novoHorario("04/02/2023", "17:30");
    bool agendamento = barbearia.realizarAgendamento(&barbeiro, &cliente2, &novoHorario);
    assert(!agendamento);

    //Agora o cadastro de horario foi feito corretamente
    novoHorario.setHora("18:30");
    agendamento = barbearia.realizarAgendamento(&barbeiro, &cliente2, &novoHorario);
    assert(agendamento);
}

void functional_tests(){
    cout << "Iniciando testes funcionais" << endl;
    functional_agendar_horario_sucesso();
    functional_agendar_horario_falha();
    cout << "Testes funcionais aprovados" << endl;
}
