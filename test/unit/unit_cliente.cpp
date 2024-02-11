#include "unit_cliente.h"

void run_unit_test_cliente(){
    cout << "Iniciando os testes unitários para Cliente" << endl;

    unit_Cliente_getClientePeloEmail();
    unit_Cliente_buscarHorariosAgendados();
    unit_Cliente_updateNome();
    unit_Cliente_updateEndereco();
    unit_Cliente_updateTelefone();
    unit_Cliente_updateSenha();

    cout << "Todos os testes de Cliente foram aprovados\n" << endl;
}


void unit_Cliente_getClientePeloEmail(){
    Controller_Cliente controller_cliente;
    Cliente * cliente = controller_cliente.getClientePeloEmail("andre@gmail.com");

    assert(
        cliente->getNome() == "André" &&
        cliente->getEmail() == "andre@gmail.com" &&
        cliente->getTelefone() == "31988888888"
    );

    delete cliente;
}
void unit_Cliente_buscarHorariosAgendados(){
    Controller_Cliente controller_cliente;
    Cliente * cliente = controller_cliente.getClientePeloEmail("andre@gmail.com");
    int total_horarios = controller_cliente.buscarHorariosAgendados(cliente);
    assert(total_horarios == 0);
    delete cliente;
}
void unit_Cliente_updateNome(){
    Controller_Cliente controller_cliente;
    Cliente * cliente = controller_cliente.getClientePeloEmail("andre@gmail.com");
    controller_cliente.updateNome(cliente, "Nome2");

    Cliente * cliente2 = controller_cliente.getClientePeloEmail("andre@gmail.com");
    assert(cliente->getNome() == cliente2->getNome());

    delete cliente;
    delete cliente2;
}
void unit_Cliente_updateEndereco(){
    Controller_Cliente controller_cliente;
    Cliente * cliente = controller_cliente.getClientePeloEmail("andre@gmail.com");
    controller_cliente.updateEndereco(cliente, "Endereco2");

    Cliente * cliente2 = controller_cliente.getClientePeloEmail("andre@gmail.com");
    assert(cliente->getEndereco() == cliente2->getEndereco());

    delete cliente;
    delete cliente2;
}
void unit_Cliente_updateTelefone(){
    Controller_Cliente controller_cliente;
    Cliente * cliente = controller_cliente.getClientePeloEmail("andre@gmail.com");
    controller_cliente.updateTelefone(cliente, "Telefone2");

    Cliente * cliente2 = controller_cliente.getClientePeloEmail("andre@gmail.com");
    assert(cliente->getTelefone() == cliente2->getTelefone());

    delete cliente;
    delete cliente2;
}
void unit_Cliente_updateSenha(){
    Controller_Cliente controller_cliente;
    Cliente * cliente = controller_cliente.getClientePeloEmail("andre@gmail.com");
    controller_cliente.updateSenha(cliente, "Senha2");

    Cliente * cliente2 = controller_cliente.getClientePeloEmail("andre@gmail.com");
    assert(cliente->getSenha() == cliente2->getSenha());

    delete cliente;
    delete cliente2;
}