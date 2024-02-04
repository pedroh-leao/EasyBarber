#include <QApplication>
#include "TelaAgendamento.h"
#include "telaescolhabarbeiro.h"
#include "Barbeiro.h"
#include "Cliente.h"
#include "barbearia.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    Barbearia barbearia("Barbearia do Tadeu", "Rua do Lino, 244 - Bauxita, Ouro Preto", "31998989898", "barbeariaTadeu@gmail.com", "09:00", "17:00");
    Barbeiro barbeiro1("João", "Rua do Lino, 244 - Bauxita, Ouro Preto", "31999999999", "joaoBarber@gmail.com", "1234", 30.0);
    Barbeiro barbeiro2("Marcos", "Rua do Lino, 244 - Bauxita, Ouro Preto", "31888888888", "marcosBarber@gmail.com", "1234", 35.0);
    barbearia.add(&barbeiro1);
    barbearia.add(&barbeiro2);

    Cliente cliente("André", "Rua da UFOP, 123", "31988888888", "andre@gmail.com", "1234");

    TelaEscolhaBarbeiro telaEscolhaBarbeiro(&barbearia, &cliente);
    telaEscolhaBarbeiro.show();


    return app.exec();
}
