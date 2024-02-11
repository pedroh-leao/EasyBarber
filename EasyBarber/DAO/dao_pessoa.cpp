#include "dao_pessoa.h"

DAO_Pessoa::DAO_Pessoa() {}

vector<Horario*> DAO_Pessoa::buscaHorariosAgendados(Pessoa * pessoa, char identifier){

    vector<Horario*> horarios;

    string email = pessoa->getEmail();
    QString sqlExec;
    
    if(identifier == 'b') sqlExec = "select * from tb_horario where email_barbeiro = :email";
    else                  sqlExec = "select * from tb_horario where email_cliente = :email";

    QSqlQuery query;
    query.prepare(sqlExec);
    query.bindValue(":email", QString::fromStdString(email));

    if(!query.exec()){
        qDebug() << "Erro na consulta a tb_horario";
        return horarios;
    }

    Horario *horario;
    while(query.next()){
        string data = query.value(0).toString().toStdString();
        string hora = query.value(1).toString().toStdString();
        string email_cliente  = query.value(3).toString().toStdString();
        string email_barbeiro = query.value(4).toString().toStdString();

        horario = new Horario(data, hora, email_cliente, email_barbeiro);
        horarios.push_back(horario);
    }

    return horarios;
}

bool DAO_Pessoa::removeHorario(Pessoa * pessoa, Horario * horario){
    string email = pessoa->getEmail();

    QSqlQuery query;
    string sqlText = "delete from tb_horario where (email_cliente = '" + email + "' or "
                       "email_barbeiro = '" + email + "') and "
                       "hora = '" + horario->getHora() + "' and data = '" + horario->getData() + "'";

    return query.exec(QString::fromStdString(sqlText));

}
