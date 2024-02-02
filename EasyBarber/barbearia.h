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
    bool diasDeFuncionamento[7]; // Array to represent days of the week (e.g., Monday to Sunday)
    vector<Barbeiro> barbeiros;

public:
    Barbearia();
    Barbearia(string nome, string endereco, string telefone, string email, string inicioDeFuncionamento, string fimDeFuncionamento, const bool diasDeFuncionamento[]);

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

    bool getDiaDeFuncionamento(int dia) const;
    void setDiaDeFuncionamento(int dia, bool status);

    vector<Barbeiro>& getBarbeiros();
    const vector<Barbeiro>& getBarbeiros() const;
    void setBarbeiros(const vector<Barbeiro>& barbeiros);
};

#endif // BARBEARIA_H
