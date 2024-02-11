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

    unit_Barbearia_buscarBarbeariaPeloEmail();
    unit_Barbearia_buscarBarbeirosAssociados();
    unit_Barbearia_buscarHorariosAgendados();
    unit_Barbearia_removerBarbeiro();
    unit_Barbearia_atualizaNome();
    unit_Barbearia_atualizaEndereco();
    unit_Barbearia_atualizaTelefone();
    unit_Barbearia_atualizarInicioDeFuncionamento();
    unit_Barbearia_atualizarFimDeFuncionamento();

    cout << "Todos os testes de Barbearia foram aprovados\n" << endl;
}



void unit_Barbearia_buscarBarbeariaPeloEmail(){
    Controller_Barbearia controller_barbearia;
    Barbearia * barbearia = controller_barbearia.buscarBarbeariaPeloEmail("barbeariaTadeu@gmail.com");

    assert(
        barbearia->getEmail() == "barbeariaTadeu@gmail.com" &&
        barbearia->getTelefone() == "31998989898" &&
        barbearia->getInicioDeFuncionamento() == "09:00" &&
        barbearia->getFimDeFuncionamento() == "17:00"
    );
}

void unit_Barbearia_buscarBarbeirosAssociados(){
    Controller_Barbearia controller_barbearia;
    Barbearia * barbearia = controller_barbearia.buscarBarbeariaPeloEmail("barbeariaTadeu@gmail.com");
    controller_barbearia.buscaBarbeirosAssociados(barbearia);

    auto barbeiro = barbearia->barbeirosBegin();
    assert((*barbeiro)->getEmail() == "joaoBarber@gmail.com");
    barbeiro++;
    assert((*barbeiro)->getEmail() == "marcosBarber@gmail.com");
}

void unit_Barbearia_buscarHorariosAgendados(){

}

void unit_Barbearia_removerBarbeiro(){
    Controller_Barbearia controller_barbearia;
    Barbearia * barbearia = controller_barbearia.buscarBarbeariaPeloEmail("barbeariaTadeu@gmail.com");
    controller_barbearia.buscaBarbeirosAssociados(barbearia);

    int contador = 0;
    for(auto atual = barbearia->barbeirosBegin(); atual != barbearia->barbeirosEnd(); atual++) contador++;

    Barbeiro * remover = *(barbearia->barbeirosBegin());

    assert(controller_barbearia.removerBarbeiro(barbearia, remover));

    int contador2 = 0;
    for(auto atual = barbearia->barbeirosBegin(); atual != barbearia->barbeirosEnd(); atual++) contador++;
    assert(contador2 < contador);

    delete barbearia;

}

void unit_Barbearia_atualizaNome(){
    Controller_Barbearia controller_barbearia;
    Barbearia * barbearia = controller_barbearia.buscarBarbeariaPeloEmail("barbeariaTadeu@gmail.com");
    controller_barbearia.atualizarNome(barbearia, "barbearia2");

    Barbearia * barbearia2 = controller_barbearia.buscarBarbeariaPeloEmail("barbeariaTadeu@gmail.com");
    assert(barbearia2->getNome() == "barbearia2");

    delete barbearia;
    delete barbearia2;
}

void unit_Barbearia_atualizaEndereco(){
    Controller_Barbearia controller_barbearia;
    Barbearia * barbearia = controller_barbearia.buscarBarbeariaPeloEmail("barbeariaTadeu@gmail.com");
    controller_barbearia.atualizarEndereco(barbearia, "endereco2");

    Barbearia * barbearia2 = controller_barbearia.buscarBarbeariaPeloEmail("barbeariaTadeu@gmail.com");
    assert(barbearia2->getEndereco() == "endereco2");

    delete barbearia;
    delete barbearia2;
}

void unit_Barbearia_atualizaTelefone(){
    Controller_Barbearia controller_barbearia;
    Barbearia * barbearia = controller_barbearia.buscarBarbeariaPeloEmail("barbeariaTadeu@gmail.com");
    controller_barbearia.atualizarTelefone(barbearia, "Telefone2");

    Barbearia * barbearia2 = controller_barbearia.buscarBarbeariaPeloEmail("barbeariaTadeu@gmail.com");
    assert(barbearia2->getTelefone() == "Telefone2");

    delete barbearia;
    delete barbearia2;
}

void unit_Barbearia_atualizarInicioDeFuncionamento(){
    Controller_Barbearia controller_barbearia;
    Barbearia * barbearia = controller_barbearia.buscarBarbeariaPeloEmail("barbeariaTadeu@gmail.com");
    controller_barbearia.atualizarInicioDeFuncionamento(barbearia, "23:20");

    Barbearia * barbearia2 = controller_barbearia.buscarBarbeariaPeloEmail("barbeariaTadeu@gmail.com");
    assert(barbearia2->getInicioDeFuncionamento() == "23:20");

    delete barbearia;
    delete barbearia2;
}

void unit_Barbearia_atualizarFimDeFuncionamento(){
    Controller_Barbearia controller_barbearia;
    Barbearia * barbearia = controller_barbearia.buscarBarbeariaPeloEmail("barbeariaTadeu@gmail.com");
    controller_barbearia.atualizarFimDeFuncionamento(barbearia, "23:25");

    Barbearia * barbearia2 = controller_barbearia.buscarBarbeariaPeloEmail("barbeariaTadeu@gmail.com");
    assert(barbearia2->getFimDeFuncionamento() == "23:25");

    delete barbearia;
    delete barbearia2;
}


