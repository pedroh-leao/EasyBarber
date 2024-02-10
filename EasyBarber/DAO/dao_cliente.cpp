#include "dao_cliente.h"

DAO_Cliente::DAO_Cliente() {}

Cliente* DAO_Cliente::getClientePeloEmail(string userEmail){
    //andre@gmail.com

    QString sqlExec = "select * from tb_cliente where email=:email";

    QSqlQuery query;
    query.prepare(sqlExec);
    query.bindValue(":email", QString::fromStdString(userEmail));

    if(!query.exec()) return nullptr;
    if(!query.next()) return nullptr;


    string email = query.value(0).toString().toStdString();
    string nome = query.value(1).toString().toStdString();
    string endereco = query.value(2).toString().toStdString();
    string telefone = query.value(3).toString().toStdString();
    string senha = query.value(4).toString().toStdString();

    Cliente *cliente = new Cliente(nome, endereco, telefone, email, senha);

    return cliente;
}

vector<Horario*> DAO_Cliente::buscaHorariosAgendados(Cliente * cliente){
    char identifier = 'c';
    return DAO_Pessoa::buscaHorariosAgendados(cliente, identifier);
}

bool DAO_Cliente::updateNome(Cliente* cliente, const string& nome) {
    QString sqlText = "update tb_cliente set nome = :nome where email = :email";
    QSqlQuery query;
    query.prepare(sqlText);
    query.bindValue(":nome", QString::fromStdString(nome));
    query.bindValue(":email", QString::fromStdString(cliente->getEmail()));

    return query.exec();
}

bool DAO_Cliente::updateEndereco(Cliente* cliente, const string& endereco) {
    QString sqlText = "update tb_cliente set endereco = :endereco where email = :email";
    QSqlQuery query;
    query.prepare(sqlText);
    query.bindValue(":endereco", QString::fromStdString(endereco));
    query.bindValue(":email", QString::fromStdString(cliente->getEmail()));

    return query.exec();
}

bool DAO_Cliente::updateTelefone(Cliente* cliente, const string& telefone) {
    QString sqlText = "update tb_cliente set telefone = :telefone where email = :email";
    QSqlQuery query;
    query.prepare(sqlText);
    query.bindValue(":telefone", QString::fromStdString(telefone));
    query.bindValue(":email", QString::fromStdString(cliente->getEmail()));

    return query.exec();
}

bool DAO_Cliente::updateSenha(Cliente* cliente, const string& senha) {
    QString sqlText = "update tb_cliente set senha = :senha where email = :email";
    QSqlQuery query;
    query.prepare(sqlText);
    query.bindValue(":senha", QString::fromStdString(senha));
    query.bindValue(":email", QString::fromStdString(cliente->getEmail()));

    return query.exec();
}
