#include "dao_barbearia.h"

DAO_Barbearia::DAO_Barbearia() {
    dao_barbeiro = new DAO_Barbeiro();
    dao_horario = new DAO_Horario();
}

DAO_Barbearia::~DAO_Barbearia(){}

Barbearia* DAO_Barbearia:: buscaBarbeariaPeloEmail(string emailBarbearia){
    QString sqlExec = "select * from tb_barbearia where email=:email";

    QSqlQuery query;
    query.prepare(sqlExec);
    query.bindValue(":email", QString::fromStdString(emailBarbearia));

    if (!query.exec()) return nullptr;
    if (!query.next()) return nullptr;

    string nome =     query.value(0).toString().toStdString();
    string endereco = query.value(1).toString().toStdString();
    string telefone = query.value(2).toString().toStdString();
    string email =    query.value(3).toString().toStdString();
    string inicioDeFuncionamento = query.value(4).toString().toStdString();
    string fimDeFuncionamento =    query.value(5).toString().toStdString();

    Barbearia* barbearia = new Barbearia(nome, endereco, telefone, email, inicioDeFuncionamento, fimDeFuncionamento);

    return barbearia;
}

void DAO_Barbearia::buscaBarbeirosAssociados(Barbearia * barbearia){
    string email = barbearia->getEmail();
    QString sqlExec = "select * from tb_barbeiro where email_barbearia=:email";

    QSqlQuery query;
    query.prepare(sqlExec);
    query.bindValue(":email", QString::fromStdString(email));

    if(!query.exec())
        qDebug() << "Erro na consulta a tb_barbeiro";


    Barbeiro *barbeiroTemp;
    while(query.next()){
        string nome = query.value(0).toString().toStdString();
        string endereco = query.value(1).toString().toStdString();
        string telefone = query.value(2).toString().toStdString();
        string email = query.value(3).toString().toStdString();
        string senha = query.value(4).toString().toStdString();
        float preco = query.value(5).toFloat();

        barbeiroTemp = new Barbeiro(nome, endereco, telefone, email, senha, preco);

        barbearia->add(barbeiroTemp);
    }
}

void DAO_Barbearia::buscarHorariosAgendados(Barbearia * barbearia){
    vector<Horario*> horarios;

    for(auto it = barbearia->barbeirosBegin(); it < barbearia->barbeirosEnd(); it++){
        horarios = dao_barbeiro->buscaHorariosAgendados((*it));

        for(Horario* horario : horarios){
            (*it)->add(horario);
        }
    }

}

bool DAO_Barbearia::realizarAgendamento(Barbeiro* barbeiro, Cliente* cliente, Horario* horario){
    return dao_horario->adicionarHorario(barbeiro, cliente, horario);
}

bool DAO_Barbearia::removerBarbeiro(Barbeiro * barbeiro){
    QString sqlText = "delete from tb_barbeiro where email= :email";

    QSqlQuery query;
    query.prepare(sqlText);
    query.bindValue(":email", QString::fromStdString(barbeiro->getEmail()));

    return query.exec();
}



bool DAO_Barbearia::atualizarCampoString(string& campo, string& novoValor, string& email){
    if(campo != "nome" && campo != "endereco" && campo != "telefone" && campo != "inicioDeFuncionamento" && campo != "fimDeFuncionamento"){
        qDebug() << "Valor de campo inválido";
        return false;
    }

    QString sqlText = "update tb_barbearia set " + QString::fromStdString(campo) + "=:novoValor where email=:email";

    QSqlQuery query;
    query.prepare(sqlText);
    query.bindValue(":novoValor", QString::fromStdString(novoValor));
    query.bindValue(":email", QString::fromStdString(email));

    return query.exec();
}

