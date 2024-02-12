#include "database.h"

void TesteDatabase::initTestCase() {
    try{
        QFile::remove("EasyBarber_test.db");
    }
    catch (...){}


    // Create a QSqlDatabase object
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("EasyBarber_test.db");

    if (db.open())
        qDebug() << "Database opened successfully.";
    else {
        qDebug() << "Error: Failed to open database";
        return;
    }

    QStringList sqlCommands;
    sqlCommands << "CREATE TABLE tb_cliente (email TEXT(100) PRIMARY KEY, nome TEXT(100), endereco TEXT(100), telefone TEXT(20), senha TEXT(25));"
                << "CREATE TABLE tb_barbearia (nome TEXT(100), endereco TEXT(100), telefone TEXT(20), email TEXT(100) PRIMARY KEY, inicioDeFuncionamento TEXT(5), fimDeFuncionamento TEXT(5));"
                << "CREATE TABLE tb_barbeiro (nome TEXT(100), endereco TEXT(100), telefone TEXT(20), email TEXT(100) PRIMARY KEY, senha TEXT(25), preco REAL, email_barbearia TEXT(100) REFERENCES tb_barbearia(email));"
                << "CREATE TABLE tb_horario (data TEXT(10), hora TEXT(5), id INTEGER PRIMARY KEY AUTOINCREMENT, email_cliente TEXT(100) REFERENCES tb_cliente(email), email_barbeiro TEXT(100) REFERENCES tb_barbeiro(email));";

    QSqlQuery query(db);

    for (const QString &sql : sqlCommands) {
        if (!query.exec(sql)) {
            qDebug() << "Error executing query: " << query.lastError().text();
            qDebug() << sql;
            return;
        }
    }

    qDebug() << "Tables created successfully.";
}


void TesteDatabase::cleanupTestCase() {
    // Close the database connection
    db.close();

    // Remove the database file
    QFile::remove("EasyBarber_test.db");
}

void TesteDatabase::popularBancoDeDados(){

    QSqlQuery query;
    //Barbearia
    query.prepare("INSERT INTO tb_barbearia (nome, endereco, telefone, email, inicioDeFuncionamento, fimDeFuncionamento) "
                  "VALUES (:nome, :endereco, :telefone, :email, :inicioDeFuncionamento, :fimDeFuncionamento)");
    query.bindValue(":nome", "Barbearia do Tadeu");
    query.bindValue(":endereco", "Rua do Lino, 244 - Bauxita, Ouro Preto");
    query.bindValue(":telefone", "31998989898");
    query.bindValue(":email", "barbeariaTadeu@gmail.com");
    query.bindValue(":inicioDeFuncionamento", "09:00");
    query.bindValue(":fimDeFuncionamento", "17:00");
    if (!query.exec()) {
        qDebug() << "Error executing query";
        return;
    }

    //Barbeiro
    query.prepare("INSERT INTO tb_barbeiro (nome, endereco, telefone, email, senha, preco, email_barbearia) "
                  "VALUES (:nome, :endereco, :telefone, :email, :senha, :preco, :email_barbearia)");

    query.bindValue(":nome", "João");
    query.bindValue(":endereco", "Rua do Lino, 244 - Bauxita, Ouro Preto");
    query.bindValue(":telefone", "31999999999");
    query.bindValue(":email", "joaoBarber@gmail.com");
    query.bindValue(":senha", "1234");
    query.bindValue(":preco", 30.0);
    query.bindValue(":email_barbearia", "barbeariaTadeu@gmail.com");
    if (!query.exec()) {
        qDebug() << "Error executing query";
        return;
    }

    query.bindValue(":nome", "Marcos");
    query.bindValue(":endereco", "Rua do Lino, 244 - Bauxita, Ouro Preto");
    query.bindValue(":telefone", "31888888888");
    query.bindValue(":email", "marcosBarber@gmail.com");
    query.bindValue(":senha", "1234");
    query.bindValue(":preco", 35.0);
    query.bindValue(":email_barbearia", "barbeariaTadeu@gmail.com");
    if (!query.exec()) {
        qDebug() << "Error executing query";
        return;
    }

    //Cliente
    query.prepare("INSERT INTO tb_cliente (email, nome, endereco, telefone, senha) "
                  "VALUES (:email, :nome, :endereco, :telefone, :senha)");
    query.bindValue(":email", "andre@gmail.com");
    query.bindValue(":nome", "André");
    query.bindValue(":endereco", "Rua da UFOP, 123");
    query.bindValue(":telefone", "31988888888");
    query.bindValue(":senha", "1234");
    if (!query.exec()) {
        qDebug() << "Error executing query";
        return;
    }

    query.bindValue(":email", "vitor@gmail.com");
    query.bindValue(":nome", "Vitor");
    query.bindValue(":endereco", "Avenida Principal");
    query.bindValue(":telefone", "3197777777");
    query.bindValue(":senha", "4321");
    if (!query.exec()) {
        qDebug() << "Error executing query";
        return;
    }

    qDebug() << "Banco de dados populado.";
}
