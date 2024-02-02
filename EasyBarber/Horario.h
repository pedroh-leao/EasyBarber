#ifndef HORARIO_H
#define HORARIO_H

#include <string>
#include <iostream>
using namespace std;


class Horario
{
private:
    string data;
    int hora;
public:
    Horario();
    Horario(string data="", int hora=0);

    ~Horario(){};

    string getData() const;
    void setData(string data);

    int getHora() const;
    void setHora(int hora);

};

#endif // HORARIO_H
