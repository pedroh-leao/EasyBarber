#include "Cliente.h"
#include <iostream>

Cliente::Cliente(string nome, string endereco, string telefone, string email, string senha)
        : Pessoa(nome, endereco, telefone, email, senha) {}

Cliente::~Cliente() {}

void Cliente::agendarHorario() {
    cout << "Agendando horário..." << endl;
}
