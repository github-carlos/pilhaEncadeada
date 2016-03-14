#include "interface.h"
#include <iostream>
using namespace std;
Interface::Interface()
{

}

void Interface::menu()
{
    int op;
    string nome, fone;
    long long cpf;

    do{
        cout << "\n1. inserir \n";
        cout << "2.Remover \n";
        cout << "Sair\n";

        cout << "? ";
        do{
        cin >> op;
        }while(op < 1 || op > 3);

        switch(op)
        {
            case 1:
                cout << "\nNome: ";
                cin.ignore();
                getline(cin, nome);
                cout << "\nFone: ";
                cin >> fone;
                cout <<"\nCpf: ";
                cin >> cpf;
                obj = new Item();
                obj->setNome(nome);
                obj->setFone(fone);
                obj->setCpf(cpf);


                pilhaUsuario.push(obj);

            break;
            case 2:
            try{
                obj = pilhaUsuario.pop();
                cout << "\nRemovido\n";
                cout << obj->getNome() << endl << obj->getFone() << endl << obj->getCpf() << endl;
                obj = 0;
        }catch(string msg)
            {
                cout << msg;
            }

            break;
        case 3:
                break;
        }
    }while(op != 3);
}
