#include "dao_barbeiro.h"
#include <iostream>

DAO_Barbeiro::DAO_Barbeiro() {}

Barbeiro * DAO_Barbeiro::getBarbeiroPeloEmail(string barbeiroEmail){

    QString sqlExec = "select * from tb_barbeiro where email=:email";
    QSqlQuery query;
    query.prepare(sqlExec);
    query.bindValue(":email", QString::fromStdString(barbeiroEmail));

    if(!query.exec()) return nullptr;
    if(!query.next()) return nullptr;

    string nome = query.value(0).toString().toStdString();
    string endereco = query.value(1).toString().toStdString();
    string telefone = query.value(2).toString().toStdString();
    string email = query.value(3).toString().toStdString();
    string senha = query.value(4).toString().toStdString();
    float preco = query.value(5).toFloat();

    return new Barbeiro(nome, endereco, telefone, email, senha, preco);
}

vector<Horario*> DAO_Barbeiro::buscaHorariosAgendados(Barbeiro * barbeiro){
    char identifier = 'b';
    return DAO_Pessoa::buscaHorariosAgendados(barbeiro, identifier);
}

bool DAO_Barbeiro::removeHorario(Barbeiro * barbeiro, Horario * horario){
    return DAO_Pessoa::removeHorario(barbeiro, horario);
}

bool DAO_Barbeiro::updateNome(Barbeiro* barbeiro, const string& nome) {
    QString sqlText = "update tb_barbeiro set nome = :nome where email = :email";
    QSqlQuery query;
    query.prepare(sqlText);
    query.bindValue(":nome", QString::fromStdString(nome));
    query.bindValue(":email", QString::fromStdString(barbeiro->getEmail()));

    return query.exec();
}

bool DAO_Barbeiro::updateEndereco(Barbeiro* barbeiro, const string& endereco) {
    QString sqlText = "update tb_barbeiro set endereco = :endereco where email = :email";
    QSqlQuery query;
    query.prepare(sqlText);
    query.bindValue(":endereco", QString::fromStdString(endereco));
    query.bindValue(":email", QString::fromStdString(barbeiro->getEmail()));

    return query.exec();
}

bool DAO_Barbeiro::updateTelefone(Barbeiro* barbeiro, const string& telefone) {
    QString sqlText = "update tb_barbeiro set telefone = :telefone where email = :email";
    QSqlQuery query;
    query.prepare(sqlText);
    query.bindValue(":telefone", QString::fromStdString(telefone));
    query.bindValue(":email", QString::fromStdString(barbeiro->getEmail()));

    return query.exec();
}

bool DAO_Barbeiro::updateSenha(Barbeiro* barbeiro, const string& senha) {
    QString sqlText = "update tb_barbeiro set senha = :senha where email = :email";
    QSqlQuery query;
    query.prepare(sqlText);
    query.bindValue(":senha", QString::fromStdString(senha));
    query.bindValue(":email", QString::fromStdString(barbeiro->getEmail()));

    return query.exec();
}

bool DAO_Barbeiro::updatePreco(Barbeiro* barbeiro, const float& preco) {
    QString sqlText = "update tb_barbeiro set preco = :preco where email = :email";
    QSqlQuery query;
    query.prepare(sqlText);
    query.bindValue(":preco", preco);
    query.bindValue(":email", QString::fromStdString(barbeiro->getEmail()));

    return query.exec();
}
