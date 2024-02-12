#ifndef HORARIO_H
#define HORARIO_H

#include <string>
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

    /**
     * @brief Atributo privado representando o email do cliente do horario
     */
    string email_cliente;

    /**
     * @brief Atributo privado representando o email do barbeiro do horario
     */
    string email_barbeiro;
public:
    /**
     * @brief Construtor da classe Horario.
     * @param data String representando a data (formato DD-MM-YYYY).
     * @param hora String representando a hora (formato HH:MM).
     * @param email_cliente String representando o email do cliente associado
     * @param email_barbeiro String representando o email do barbeiroassociado
    */
    Horario(string data = "", string hora = "00:00", string email_cliente = "", string email_barbeiro ="");

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

    /**
     * @brief Getter para o atributo email_cliente.
     * @return String representando o email do cliente associada ao horário.
     */
    string getEmailCliente();

    /**
     * @brief Getter para o atributo email_barbeiro.
     * @return String representando o email do barbeiro associada ao horário.
     */
    string getEmailBarbeiro();
};

#endif // HORARIO_H
