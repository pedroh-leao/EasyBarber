#include "Barbeiro.h"

Barbeiro::Barbeiro(string nome, string endereco, string telefone, string email, string senha, float preco)
    : Pessoa(nome, endereco, telefone, email, senha), preco(preco) {}

Barbeiro::~Barbeiro() {}

float Barbeiro::getPreco() const {
    return preco;
}

void Barbeiro::setPreco(float preco) {
    this->preco = preco;

    string sqlText = "update tb_barbeiro set preco=" + to_string(preco) + " where email='" + email + "'";
    if(query.exec(QString::fromStdString(sqlText)))
        this->preco = preco;
    else
        qDebug() << "Erro na atualização do barbeiro.";
}
