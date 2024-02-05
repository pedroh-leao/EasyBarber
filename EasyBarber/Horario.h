#ifndef HORARIO_H
#define HORARIO_H

#include <string>
#include <iostream>
using namespace std;

/**
 * @brief Classe que representa um Horario, contendo informações de data e hora.
 */
class Horario
{
private:
    /**
     * @brief Atributo privado representando a data associada ao horário.
     */
    string data;

    /**
     * @brief Atributo privado representando a hora associada ao horário.
     */
    string hora;

public:
    /**
     * @brief Construtor da classe Horario.
     * @param data String representando a data (formato YYYY-MM-DD).
     * @param hora String representando a hora (formato HH:MM).
     */
    Horario(string data = "", string hora = "00:00");

    /**
     * @brief Destrutor da classe Horario.
     */
    ~Horario(){};

    /**
     * @brief Getter para o atributo data.
     * @return String representando a data associada ao horário.
     */
    string getData() const;

    /**
     * @brief Setter para o atributo data.
     * @param data Nova string representando a data a ser associada ao horário.
     */
    void setData(string data);

    /**
     * @brief Getter para o atributo hora.
     * @return String representando a hora associada ao horário.
     */
    string getHora() const;

    /**
     * @brief Setter para o atributo hora.
     * @param hora Nova string representando a hora a ser associada ao horário.
     */
    void setHora(string hora);
};

#endif // HORARIO_H
