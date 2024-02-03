#include <QApplication>
#include "TelaAgendamento.h"
#include "Barbeiro.h"
#include "Cliente.h"
#include "barbearia.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    Barbearia barbearia("Barbearia do Tadeu", "Rua do Lino, 244 - Bauxita, Ouro Preto", "31998989898", "barbeariaTadeu@gmail.com", "08:00", "17:00");
    Barbeiro barbeiro("João", "Rua do Lino, 244 - Bauxita, Ouro Preto", "31999999999", "joaoBarber@gmail.com", "1234", 30.0);
    barbearia.add(&barbeiro);

    Cliente cliente("André", "Rua da UFOP, 123", "31988888888", "andre@gmail.com", "1234");

    TelaAgendamento telaAgendamento(&barbearia);
    telaAgendamento.show();

    return app.exec();
}
