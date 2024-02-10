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

        horario = new Horario(data, hora);
        horarios.push_back(horario);
    }

    return horarios;
}
