#include <iostream>
#include "seguridad.h"
#include "menu.h"
using namespace std;

int main(int argc, char const *argv[])
{
    bool respuesta = login();

    if (respuesta == true)
    {
        cout << "Bienvenido al sistema";

        menu();
    }

    return 0;
}