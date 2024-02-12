#include "unit_pessoa.h"

void unit_Pessoa_get_set_nome() {
    Pessoa pessoa;
    pessoa.setNome("João");
    assert(pessoa.getNome() == "João");
}

void unit_Pessoa_get_set_endereco() {
    Pessoa pessoa;
    pessoa.setEndereco("Campus Morro do Cruzeiro s/n, Bauxita, Ouro Preto");
    assert(pessoa.getEndereco() == "Campus Morro do Cruzeiro s/n, Bauxita, Ouro Preto");
}

void unit_Pessoa_get_set_telefone() {
    Pessoa pessoa;
    pessoa.setTelefone("(31) 3559-1408");
    assert(pessoa.getTelefone() == "(31) 3559-1408");
}

void unit_Pessoa_get_set_email(){
    Pessoa pessoa;
    pessoa.setEmail("joao@gmail.com");
    assert(pessoa.getEmail() == "joao@gmail.com");
}

void unit_Pessoa_get_set_senha() {
    Pessoa pessoa;
    pessoa.setSenha("senha123");
    assert(pessoa.getSenha() == "senha123");
}

void run_unit_test_pessoa() {
    cout << "Iniciando os testes unitários para Pessoa" << endl;

    unit_Pessoa_get_set_nome();
    unit_Pessoa_get_set_endereco();
    unit_Pessoa_get_set_telefone();
    unit_Pessoa_get_set_email();
    unit_Pessoa_get_set_senha();

    cout << "Todos os testes de Pessoa foram aprovados\n" << endl;
}
