#include <QApplication>
#include "telainicialcliente.h""
#include "Barbeiro.h"
#include "barbearia.h"

#include <QtSql>
#include <QDebug>

void buscaHorariosAgendados(Cliente *cliente){
    string email = cliente->getEmail();
    string sqlExec = "select * from tb_horario where email_cliente='"+email+"'";

    QSqlQuery query;
    if(query.exec(QString::fromStdString(sqlExec))){
        Horario *horario;

        while(query.next()){
            string data = query.value(0).toString().toStdString();
            string hora = query.value(1).toString().toStdString();

            horario = new Horario(data, hora);

            cliente->add(horario);
        }
    }
    else
        qDebug() << "Erro na consulta a tb_horario";
}

void buscaHorariosAgendados(Barbearia *barbearia){
    for(auto it = barbearia->barbeirosBegin(); it < barbearia->barbeirosEnd(); it++){
        string email = (*it)->getEmail();
        string sqlExec = "select * from tb_horario where email_barbeiro='"+email+"'";

        QSqlQuery query;
        if(query.exec(QString::fromStdString(sqlExec))){
            Horario *horario;

            while(query.next()){
                string data = query.value(0).toString().toStdString();
                string hora = query.value(1).toString().toStdString();

                horario = new Horario(data, hora);

                (*it)->add(horario);
            }
        }
        else
            qDebug() << "Erro na consulta a tb_horario";
    }
}

void buscaBarbeirosAssociados(Barbearia *barbearia){
    string email = barbearia->getEmail();
    string sqlExec = "select * from tb_barbeiro where email_barbearia='"+email+"'";

    QSqlQuery query;
    if(query.exec(QString::fromStdString(sqlExec))){
        Barbeiro *barbeiro;

        while(query.next()){
            string nome = query.value(0).toString().toStdString();
            string endereco = query.value(1).toString().toStdString();
            string telefone = query.value(2).toString().toStdString();
            string email = query.value(3).toString().toStdString();
            string senha = query.value(4).toString().toStdString();
            float preco = query.value(5).toFloat();

            barbeiro = new Barbeiro(nome, endereco, telefone, email, senha, preco);

            barbearia->add(barbeiro);
        }
    }
    else
        qDebug() << "Erro na consulta a tb_barbeiro";
}

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QSqlDatabase bd = QSqlDatabase::addDatabase("QSQLITE");
    bd.setDatabaseName("C:/Users/Pedro/Documents/UFOP/4periodo/Engenharia de Software I/Trabalho em grupo/EasyBarber/EasyBarber.db");

    if(bd.open()) qDebug()<<"bd aberto";
    else qDebug()<<"Erro na abertura do bd";

    QSqlQuery query;
    //editar o add de barbearia, cliente e barbeiro, fazendo com que agora de um insert no bd

    Cliente *cliente;
    if(query.exec("select * from tb_cliente where email='andre@gmail.com'")){
        if(query.next()){
            string email = query.value(0).toString().toStdString();
            string nome = query.value(1).toString().toStdString();
            string endereco = query.value(2).toString().toStdString();
            string telefone = query.value(3).toString().toStdString();
            string senha = query.value(4).toString().toStdString();

            cliente = new Cliente(nome, endereco, telefone, email, senha);

            buscaHorariosAgendados(cliente);
        }
        else return -1;
    }
    else{
        qDebug() << "Erro na consulta a tb_cliente";
        return -1;
    }

    Barbearia *barbearia;
    if(query.exec("select * from tb_barbearia where email='barbeariaTadeu@gmail.com'")){
        if(query.next()){
            string nome = query.value(0).toString().toStdString();
            string endereco = query.value(1).toString().toStdString();
            string telefone = query.value(2).toString().toStdString();
            string email = query.value(3).toString().toStdString();
            string inicioDeFuncionamento = query.value(4).toString().toStdString();
            string fimDeFuncionamento = query.value(5).toString().toStdString();

            barbearia = new Barbearia(nome, endereco, telefone, email, inicioDeFuncionamento, fimDeFuncionamento);

            buscaBarbeirosAssociados(barbearia);
            buscaHorariosAgendados(barbearia); //busca os horários agendados de cada barbeiro associado a essa barbearia
        }
        else return -1;
    }
    else{
        qDebug() << "Erro na consulta a tb_barbearia";
        return -1;
    }

    //Barbearia barbearia("Barbearia do Tadeu", "Rua do Lino, 244 - Bauxita, Ouro Preto", "31998989898", "barbeariaTadeu@gmail.com", "09:00", "17:00");
    //Barbeiro barbeiro1("João", "Rua do Lino, 244 - Bauxita, Ouro Preto", "31999999999", "joaoBarber@gmail.com", "1234", 30.0);
    //Barbeiro barbeiro2("Marcos", "Rua do Lino, 244 - Bauxita, Ouro Preto", "31888888888", "marcosBarber@gmail.com", "1234", 35.0);
    //barbearia.add(&barbeiro1);
    //barbearia.add(&barbeiro2);

    //Cliente cliente("André", "Rua da UFOP, 123", "31988888888", "andre@gmail.com", "1234");

    TelaInicialCliente telaInicialCliente(barbearia, cliente);
    telaInicialCliente.show();

    return app.exec();
}
