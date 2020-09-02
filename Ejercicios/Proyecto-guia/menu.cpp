#include <iostream>
#include "clientes.h";

using namespace std;

void menu()
{
    bool salir = false;

    while (salir == false)
    {
        int opcion = 0;
        system("cls");
        cout << "MENU PRINCIPAL" << endl;
        cout << "--------------" << endl;
        cout << endl;
        cout << "1 - Rentar Juegos" << endl;
        cout << "2 - Clientes" << endl;
        cout << "3 - Juegos" << endl;
        cout << "4 - Reporte de Rentas" << endl;
        cout << "5 - Salir" << endl;

        cout << endl;
        cout << endl;
        cout << "Ingrese un numero del menu y presione enter --> ";
        cin >> opcion;

        switch(opcion)
        {
            case 1:
                //rentar();
                system("pause");
                break;
            
            case 2:
                mostrarClientes();
                break;

            case 5:
                salir = true;
            
            default:
                break;
        }
        
        system("cls");
    }
}