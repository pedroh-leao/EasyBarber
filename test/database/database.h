#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QFile>
#include <QSqlError>


class TesteDatabase{

public:
    TesteDatabase(){}

    void initTestCase();

    void cleanupTestCase();

    void popularBancoDeDados();

private:
    QSqlDatabase db;
};
