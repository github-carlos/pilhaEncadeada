#ifndef NODE_H
#define NODE_H
#include "item.h"

class Node
{
public:
    Node();

    Node *getProximo() const;
    void setProximo(Node *value);

    Item *getIt() const;
    void setIt(Item *value);

private:
    Node* proximo;
    Item* it;
};

#endif // NODE_H
