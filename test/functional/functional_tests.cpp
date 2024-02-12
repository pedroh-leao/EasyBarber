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

/*
    Dado um cliente André, que deseja marcar um horário na Barbearia do Tadeu com o barbeiro João
    Quando o usuário escolher o seu horário e ele estiver disponível, o seu horário será agendado
    Então ele deverá cancelar o seu horário, pois ocorreu um imprevisto
*/
void functional_agendar_horario_cancelar(){
    Controller_Cliente controller_cliente;
    Cliente *cliente = controller_cliente.getClientePeloEmail("andre@gmail.com");
    controller_cliente.buscarHorariosAgendados(cliente);

    Controller_Barbearia controller_barbearia;
    Barbearia * barbearia = controller_barbearia.buscarBarbeariaPeloEmail("barbeariaTadeu@gmail.com");
    controller_barbearia.buscaBarbeirosAssociados(barbearia);
    controller_barbearia.buscarHorariosAgendados(barbearia);

    //Realizando o agendamento
    Barbeiro * barbeiro = *(barbearia->barbeirosBegin());
    Horario * horario = new Horario("11-02-2023", "12:00", "andre@gmail.com", barbeiro->getEmail());
    bool agendamento = controller_barbearia.realizarAgendamento(barbearia, barbeiro, cliente, horario);

    assert(agendamento);

    // Desmarcando o seu horário
    Controller_Horario controller_horario;
    assert(controller_horario.deletarHorario(horario, cliente, barbearia));
}

/*
    Dado um cliente André, que deseja marcar um horário para corte às 17:00 do dia 11-02-2024
    Quando realizar o agendamento, ele será feito corretamente, mas deverá ser cancelado, pois André esqueceu de um compromisso
    Então deverá ser marcado novamente no mesmo horário, pois o compromisso dele era em outro dia
*/
void functional_agendar_horario_duas_vezes(){
    Controller_Horario controller_horario;
    Controller_Cliente controller_cliente;
    Cliente *cliente = controller_cliente.getClientePeloEmail("andre@gmail.com");
    controller_cliente.buscarHorariosAgendados(cliente);

    Controller_Barbearia controller_barbearia;
    Barbearia * barbearia = controller_barbearia.buscarBarbeariaPeloEmail("barbeariaTadeu@gmail.com");
    controller_barbearia.buscaBarbeirosAssociados(barbearia);
    controller_barbearia.buscarHorariosAgendados(barbearia);

    //Realizando o agendamento
    Barbeiro * barbeiro = *(barbearia->barbeirosBegin());
    Horario * horario = new Horario("11-02-2023", "17:00", "andre@gmail.com", barbeiro->getEmail());
    bool agendamento = controller_barbearia.realizarAgendamento(barbearia, barbeiro, cliente, horario);

    assert(agendamento);

    // Desmarcando o seu horário
    assert(controller_horario.deletarHorario(horario, cliente, barbearia));

    //Marcando novamente para o mesmo horário
    assert(controller_barbearia.realizarAgendamento(barbearia, barbeiro, cliente, horario));
}

/*
    Dado um cliente André, que deseja marcar um horário para corte às 12:00 do dia 12-02-2024
    Quando realizar o agendamento, ele será feito corretamente, mas deverá ser cancelado
    Então o cliente Vitor agendará no lugar de André, que não conseguirá mais marcar neste horario
*/
void functional_perder_horario(){
    Controller_Horario controller_horario;
    Controller_Cliente controller_cliente;
    Cliente *andre = controller_cliente.getClientePeloEmail("andre@gmail.com");
    Cliente *vitor = controller_cliente.getClientePeloEmail("vitor@gmail.com");
    controller_cliente.buscarHorariosAgendados(andre);

    Controller_Barbearia controller_barbearia;
    Barbearia * barbearia = controller_barbearia.buscarBarbeariaPeloEmail("barbeariaTadeu@gmail.com");
    controller_barbearia.buscaBarbeirosAssociados(barbearia);
    controller_barbearia.buscarHorariosAgendados(barbearia);

    //Realizando o agendamento
    Barbeiro * barbeiro = *(barbearia->barbeirosBegin());
    Horario * horarioAndre = new Horario("12-02-2023", "12:00", "andre@gmail.com", barbeiro->getEmail());
    assert(controller_barbearia.realizarAgendamento(barbearia, barbeiro, andre, horarioAndre));

    // Desmarcando o seu horário
    assert(controller_horario.deletarHorario(horarioAndre, andre, barbearia));

    //Marcando para Vitor
    Horario * horarioVitor = new Horario("12-02-2023", "12:00", "vitor@gmail.com", barbeiro->getEmail());
    assert(controller_barbearia.realizarAgendamento(barbearia, barbeiro, vitor, horarioVitor));

    //Marcando novamente para o mesmo horário para Andre
    assert(!controller_barbearia.realizarAgendamento(barbearia, barbeiro, andre, horarioAndre));
}


void functional_tests(){
    cout << "Iniciando testes funcionais" << endl;
    functional_agendar_horario_sucesso();
    functional_agendar_horario_falha();
    functional_agendar_horario_cancelar();
    functional_agendar_horario_duas_vezes();
    functional_perder_horario();
    cout << "Testes funcionais aprovados" << endl;
}
