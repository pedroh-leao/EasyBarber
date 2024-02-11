#include <QApplication>
#include "View/telaescolhabarbeiro.h"
#include "Model/barbearia.h"

#include "View/telainicialcliente.h"

#include "Controller/controller_cliente.h"
#include "Controller/controller_barbearia.h"

#include <QDebug>



int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QSqlDatabase bd = QSqlDatabase::addDatabase("QSQLITE");
    bd.setDatabaseName("../EasyBarber.db");

    if(bd.open()) qDebug()<<"bd aberto";
    else qDebug()<<"Erro na abertura do bd";

    Controller_Cliente controller_cliente;
    Cliente *cliente = controller_cliente.getClientePeloEmail("andre@gmail.com");
    controller_cliente.buscarHorariosAgendados(cliente);

    Controller_Barbearia controller_barbearia;
    Barbearia * barbearia = controller_barbearia.buscarBarbeariaPeloEmail("barbeariaTadeu@gmail.com");
    controller_barbearia.buscaBarbeirosAssociados(barbearia);
    controller_barbearia.buscarHorariosAgendados(barbearia);

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
