#include <iostream>

using namespace std;

bool login()
{
    string pwd = " ";
    int intentos = 0;

    while (intentos <= 3)
    {
        system("cls");

        if (intentos == 3)
        {
            cout << "No se pudo validar su clave de acceso, contacte al administrador" << endl;

            return false;
        }

        cout << "Ingrese su clave de acceso al sistema: ";
        cin >> pwd;

        if (pwd == "chanchito.text")
        {
            system("cls");
            return true;
        }

        intentos++;
    }

    return false;
}