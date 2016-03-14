#include "node.h"

Node::Node()
{

}

Node *Node::getProximo() const
{
    return proximo;
}

void Node::setProximo(Node *value)
{
    proximo = value;
}

Item* Node::getIt() const
{
    return it;
}

void Node::setIt(Item* value)
{
    it = value;
}

