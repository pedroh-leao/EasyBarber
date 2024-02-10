#ifndef BARBEIRO_H
#define BARBEIRO_H

#include "pessoa.h"

class Barbeiro : public Pessoa
{
private:
    /**
     * @brief Atributo privado representando o preço cobrado pelo barbeiro.
     */
    float preco;

public:
    /**
     * @brief Construtor da classe Barbeiro.
     * @param nome Nome do barbeiro.
     * @param endereco Endereço do barbeiro.
     * @param telefone Número de telefone do barbeiro.
     * @param email Endereço de email do barbeiro.
     * @param senha Senha do barbeiro.
     * @param preco Preço cobrado pelo barbeiro.
     */
    Barbeiro(string nome = "", string endereco = "", string telefone = "", string email = "", string senha = "", float preco = 0.0);

    /**
     * @brief Destrutor da classe Barbeiro.
     */
    virtual ~Barbeiro();

    /**
     * @brief Getter para o atributo preco.
     * @return Valor do preço cobrado pelo barbeiro.
     */
    float getPreco() const;

    /**
     * @brief Setter para o atributo preco.
     * @param preco Novo valor para o preço cobrado pelo barbeiro.
     */
    void setPreco(float preco);
};

#endif // BARBEIRO_H
