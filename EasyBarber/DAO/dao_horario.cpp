#include "dao_horario.h"

DAO_Horario::DAO_Horario() {}


bool DAO_Horario::adicionarHorario(Barbeiro* barbeiro, Cliente* cliente, Horario* horario){
    QString sqlText = "insert into tb_horario (data, hora, email_cliente, email_barbeiro) "
                  "values (:data, :hora, :email_cliente, :email_barbeiro)";

    QSqlQuery query;
    query.prepare(sqlText);
    query.bindValue(":data", QString::fromStdString(horario->getData()));
    query.bindValue(":hora", QString::fromStdString(horario->getHora()));
    query.bindValue(":email_cliente", QString::fromStdString(cliente->getEmail()));
    query.bindValue(":email_barbeiro", QString::fromStdString(barbeiro->getEmail()));

    return query.exec();
}

bool DAO_Horario::deletarHorario(Horario * horario){
    QString sqlExec = "delete from tb_horario where (email_cliente = :email_cliente and  email_barbeiro = :email_barbeiro ) and  hora=:hora and data=:data";

    QSqlQuery query;
    query.prepare(sqlExec);
    query.bindValue(":email_cliente", QString::fromStdString(horario->getEmailCliente()));
    query.bindValue(":email_barbeiro", QString::fromStdString(horario->getEmailBarbeiro()));
    query.bindValue(":hora", QString::fromStdString(horario->getHora()));
    query.bindValue(":data", QString::fromStdString(horario->getHora()));

    return query.exec();

}