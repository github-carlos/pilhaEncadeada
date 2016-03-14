#include "item.h"

Item::Item()
{

}

string Item::getNome() const
{
    return nome;
}

void Item::setNome(const string &value)
{
    nome = value;
}

string Item::getFone() const
{
    return fone;
}

void Item::setFone(const string &value)
{
    fone = value;
}

long long Item::getCpf() const
{
    return cpf;
}

void Item::setCpf(long long value)
{
    cpf = value;
}

