#include "Cliente.h"

Cliente :: Cliente(){}

Cliente :: Cliente(string nome, string cpf, string senha){
    this->nome = nome;
    this->cpf = cpf;
    this->senha = senha;
}

Cliente :: ~Cliente(){}

string Cliente :: getNome() const{
    return nome;
}

void Cliente :: setNome(string nome){
    this->nome = nome;
}

string Cliente :: getCpf() const{
    return cpf;
}

void Cliente :: setCpf(string cpf){
    this->cpf = cpf;
}

string Cliente :: getSenha() const{
    return senha;
}

void Cliente :: setSenha(string senha){
    this->senha = senha;
}
