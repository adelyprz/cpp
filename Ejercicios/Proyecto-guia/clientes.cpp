#include <iostream>

using namespace std;

string arregloClientes[5][3] = {
    {"C001", "Yeltsin Hernandez", "99-98-94-53"},
    {"C001", "Maria Pozuello", "91-78-56-24"},
    {"C001", "Carlos Beltran", "81-97-77-37"},
    {"C001", "Nacho Gonzalez", "33-38-44-09"},
    {"C001", "Kareh Caballero", "99-99-99-99"},

};

void mostrarClientes()
{
            
    cout << "CODIGO       NOMBRE       TELEFONO" << endl;
    cout << "----------------------------------" << endl << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << arregloClientes[i][0] << " | ";
        cout << arregloClientes[i][1] << " | ";
        cout << arregloClientes[i][2] << " | ";
        cout << endl;

    }

    cout << endl;
    system("pause");
}