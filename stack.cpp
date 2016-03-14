#include "stack.h"

void Stack::push(Item* item)
{
    Node* aux = topo;
    topo = new Node();
    topo->setIt(item);
    topo->setProximo(aux);
    qtd++;
}

Item* Stack::pop()
{
    if(!vazia()){
    Item* aux = topo->getIt();
    Node* copiaTopo = topo;
    topo = topo->getProximo();
    qtd--;
    delete copiaTopo;
    return aux;
    }
    else
    throw string("\nPILHA VAZIA\n");

}
bool Stack::vazia()
{
    return qtd == 0;
}
