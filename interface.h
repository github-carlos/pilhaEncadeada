#ifndef INTERFACE_H
#define INTERFACE_H
#include "stack.h"

class Interface
{
public:
    Interface();
    void menu();

private:
    Stack pilhaUsuario;
    Item* obj;
};

#endif // INTERFACE_H
