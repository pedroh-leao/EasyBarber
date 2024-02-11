#include "Barbearia.h"

Barbearia::Barbearia() {}

Barbearia::Barbearia(string nome, string endereco, string telefone, string email, string inicioDeFuncionamento, string fimDeFuncionamento)
    : nome(nome), endereco(endereco), telefone(telefone), email(email), inicioDeFuncionamento(inicioDeFuncionamento), fimDeFuncionamento(fimDeFuncionamento) {}

string Barbearia::getNome() const {
    return nome;
}

void Barbearia::setNome(const string& nome) {
    this->nome = nome;

    string sqlText = "update tb_barbearia set nome='" + nome + "' where email='" + email + "'";
    if(query.exec(QString::fromStdString(sqlText)))
        this->nome = nome;
    else
        qDebug() << "Erro na atualização da barbearia.";
}

string Barbearia::getEndereco() const {
    return endereco;
}

void Barbearia::setEndereco(const string& endereco) {
    this->endereco = endereco;

    string sqlText = "update tb_barbearia set endereco='" + endereco + "' where email='" + email + "'";
    if(query.exec(QString::fromStdString(sqlText)))
        this->endereco = endereco;
    else
        qDebug() << "Erro na atualização da barbearia.";
}

string Barbearia::getTelefone() const {
    return telefone;
}

void Barbearia::setTelefone(const string& telefone) {
    this->telefone = telefone;

    string sqlText = "update tb_barbearia set telefone='" + telefone + "' where email='" + email + "'";
    if(query.exec(QString::fromStdString(sqlText)))
        this->telefone = telefone;
    else
        qDebug() << "Erro na atualização da barbearia.";
}

string Barbearia::getEmail() const {
    return email;
}

void Barbearia::setEmail(const string& email) {
    this->email = email;
}

string Barbearia::getInicioDeFuncionamento() const {
    return inicioDeFuncionamento;
}

void Barbearia::setInicioDeFuncionamento(const string& inicioDeFuncionamento) {
    this->inicioDeFuncionamento = inicioDeFuncionamento;

    string sqlText = "update tb_barbearia set inicioDeFuncionamento='" + inicioDeFuncionamento + "' where email='" + email + "'";
    if(query.exec(QString::fromStdString(sqlText)))
        this->inicioDeFuncionamento = inicioDeFuncionamento;
    else
        qDebug() << "Erro na atualização da barbearia.";
}

string Barbearia::getFimDeFuncionamento() const {
    return fimDeFuncionamento;
}

void Barbearia::setFimDeFuncionamento(const string& fimDeFuncionamento) {
    this->fimDeFuncionamento = fimDeFuncionamento;

    string sqlText = "update tb_barbearia set fimDeFuncionamento='" + fimDeFuncionamento + "' where email='" + email + "'";
    if(query.exec(QString::fromStdString(sqlText)))
        this->fimDeFuncionamento = fimDeFuncionamento;
    else
        qDebug() << "Erro na atualização da barbearia.";
}

Barbearia::barbeirosIterator Barbearia::barbeirosBegin(){
    return barbeiros.begin();
}

Barbearia::barbeirosIterator Barbearia::barbeirosEnd(){
    return barbeiros.end();
}

bool Barbearia::add(Barbeiro* barbeiro){
    unsigned long long lenBefore = barbeiros.size();

    barbeiros.push_back(barbeiro);

    return (lenBefore != barbeiros.size());
}

bool Barbearia::remove(Barbeiro* barbeiro){
    string sqlText = "delete from tb_barbeiro where email='" + barbeiro->getEmail() + "'";

    if(query.exec(QString::fromStdString(sqlText))){
        for(Barbearia::barbeirosIterator it = barbeirosBegin(); it < barbeirosEnd(); it++){
            if((*it)->getEmail() == barbeiro->getEmail()){
                barbeiros.erase(it);
                //delete barbeiro;
                return true;
            }
        }
    }
    else qDebug() << "Erro ao tentar remover barbeiro do banco de dados!";

    return false;
}

bool Barbearia::realizarAgendamento(Barbeiro* barbeiro, Cliente* cliente, Horario* horario){
    
    if (cliente->existsHorario(horario) || barbeiro->existsHorario(horario)) return false;

    string sqlText = "insert into tb_horario (data, hora, email_cliente, email_barbeiro) values"
                     "('"+ horario->getData() +"', '"+ horario->getHora() +"', '"+ cliente->getEmail() +"', '"+ barbeiro->getEmail() +"')";

    if(query.exec(QString::fromStdString(sqlText))) {
        barbeiro->add(horario);
        cliente->add(horario);
    }

    else {
        qDebug() << "Erro ao tentar inserir novo horário de agendamento!";
        return false;
    }

    return true;
}
