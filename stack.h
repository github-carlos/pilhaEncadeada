#ifndef STACK_H
#define STACK_H
#include "node.h"

class Stack
{
public:
    Stack():topo(0), qtd(0){}
    ~Stack() { delete topo; }


    void push (Item *);

    Item *pop();

    int getQtd() { return qtd; }

    bool vazia();

private:
    Node* topo;
    int qtd;
};

#endif // STACK_H
