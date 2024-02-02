#include <QApplication>
#include "TelaAgendamento.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    TelaAgendamento telaAgendamento;
    telaAgendamento.show();

    return app.exec();
}
