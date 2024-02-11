#include "functional_tests.h"


/*
    Dado um cliente chamado André, uma barbearia chamada "Barbearia do Tadeu" com um barbeiro chamado "João"
    Quando o usuário escolher qual o seu barbeiro e o horário de atendimento que ele deseja, marcará o seu agendamento
    Então os dados serão salvos e o seu agendamento estrá concluído
*/
void functional_agendar_horario_sucesso(){
    Controller_Cliente controller_cliente;
    Cliente *cliente = controller_cliente.getClientePeloEmail("andre@gmail.com");
    controller_cliente.buscarHorariosAgendados(cliente);

    Controller_Barbearia controller_barbearia;
    Barbearia * barbearia = controller_barbearia.buscarBarbeariaPeloEmail("barbeariaTadeu@gmail.com");
    controller_barbearia.buscaBarbeirosAssociados(barbearia);
    controller_barbearia.buscarHorariosAgendados(barbearia);

    Barbeiro * barbeiro = *(barbearia->barbeirosBegin());

    Horario * horario = new Horario("04/02/2023", "17:30");

    bool agendamento = controller_barbearia.realizarAgendamento(barbearia, barbeiro, cliente, horario);

    assert(agendamento);

}

/*
    Dado dois clientes, André e Vitor, que desejam marcar um horario na Barbearia do Tadeu com o barbeiro João no mesmo horário
    Quando João realizar o seu agendamento, tudo funcionará corretamente e será marcado, mas para Vitor isso não ocorrerá
    Então Vitor irá escolher um outro horario e, dessa vez o agendamento será feito de maneira correta
*/
void functional_agendar_horario_falha(){
    Controller_Cliente controller_cliente;
    Cliente *cliente1 = controller_cliente.getClientePeloEmail("andre@gmail.com");
    controller_cliente.buscarHorariosAgendados(cliente1);
    Cliente *cliente2 = controller_cliente.getClientePeloEmail("vitor@gmail.com");
    controller_cliente.buscarHorariosAgendados(cliente2);

    Controller_Barbearia controller_barbearia;
    Barbearia * barbearia = controller_barbearia.buscarBarbeariaPeloEmail("barbeariaTadeu@gmail.com");
    controller_barbearia.buscaBarbeirosAssociados(barbearia);
    controller_barbearia.buscarHorariosAgendados(barbearia);
    Barbeiro * barbeiro = *(barbearia->barbeirosBegin());

    //Cadastro de horario feito corretamente
    Horario * horario = new Horario("05/02/2023", "17:30");
    bool agendamento = controller_barbearia.realizarAgendamento(barbearia, barbeiro, cliente1, horario);
    assert(agendamento);


    //Cadastro de horario que não sera bem sucedido
    Horario novoHorario("05/02/2023", "17:30");
    agendamento = controller_barbearia.realizarAgendamento(barbearia, barbeiro, cliente2, &novoHorario);
    assert(!agendamento);

    //Agora o cadastro de horario foi feito corretamente
    novoHorario.setHora("18:30");
    agendamento = controller_barbearia.realizarAgendamento(barbearia, barbeiro, cliente2, &novoHorario);
    assert(agendamento);
}

void functional_tests(){
    cout << "Iniciando testes funcionais" << endl;
    functional_agendar_horario_sucesso();
    functional_agendar_horario_falha();
    cout << "Testes funcionais aprovados" << endl;
}
