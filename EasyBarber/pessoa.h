#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using namespace std;

class Pessoa
{
protected:
    string nome;
    string endereco;
    string telefone;
    string email;
    string senha;

public:
    Pessoa(string nome = "", string endereco = "", string telefone = "", string email = "", string senha = "");

    virtual ~Pessoa();

    // Getters
    string getNome() const;
    string getEndereco() const;
    string getTelefone() const;
    string getEmail() const;
    string getSenha() const;

    // Setters
    void setNome(const string& nome);
    void setEndereco(const string& endereco);
    void setTelefone(const string& telefone);
    void setEmail(const string& email);
    void setSenha(const string& senha);
};

#endif // PESSOA_H
