#ifndef HORARIO_H
#define HORARIO_H

#include <string>
#include <iostream>
using namespace std;


class Horario
{
private:
    string data;
    string hora;
public:
    Horario(string data="", string hora="00:00");

    ~Horario(){};

    string getData() const;
    void setData(string data);

    string getHora() const;
    void setHora(string hora);

};

#endif // HORARIO_H
