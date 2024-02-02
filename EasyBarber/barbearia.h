#ifndef BARBEARIA_H
#define BARBEARIA_H

#include <string>
#include <vector>
#include "Barbeiro.h"

using namespace std;

class Barbearia {
private:
    string nome;
    string endereco;
    string telefone;
    string email;
    string inicioDeFuncionamento;
    string fimDeFuncionamento;
    vector<Barbeiro*> barbeiros;

public:
    Barbearia();
    Barbearia(string nome, string endereco, string telefone, string email, string inicioDeFuncionamento, string fimDeFuncionamento);

    // Getters and Setters
    string getNome() const;
    void setNome(const string& nome);

    string getEndereco() const;
    void setEndereco(const string& endereco);

    string getTelefone() const;
    void setTelefone(const string& telefone);

    string getEmail() const;
    void setEmail(const string& email);

    string getInicioDeFuncionamento() const;
    void setInicioDeFuncionamento(const string& inicioDeFuncionamento);

    string getFimDeFuncionamento() const;
    void setFimDeFuncionamento(const string& fimDeFuncionamento);

    typedef vector<Barbeiro*>::iterator barbeirosIterator;
    barbeirosIterator barbeirosBegin();
    barbeirosIterator barbeirosEnd();
    bool add(Barbeiro *barbeiro);
    bool remove(Barbeiro *barbeiro);
};

#endif // BARBEARIA_H
