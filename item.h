#ifndef ITEM_H
#define ITEM_H
#include <iostream>
using namespace std;
class Item
{
public:
    Item();

    string getNome() const;
    void setNome(const string &value);

    string getFone() const;
    void setFone(const string &value);

    long long getCpf() const;
    void setCpf(long long value);

private:
    string nome;
    string fone;
    long long int cpf;
};

#endif // ITEM_H
