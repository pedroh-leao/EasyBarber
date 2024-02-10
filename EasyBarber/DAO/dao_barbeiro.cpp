#include "dao_barbeiro.h"

DAO_Barbeiro::DAO_Barbeiro() {}

vector<Horario*> DAO_Barbeiro::buscaHorariosAgendados(Barbeiro * barbeiro){
    char identifier = 'b';
    return DAO_Pessoa::buscaHorariosAgendados(barbeiro, identifier);
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
