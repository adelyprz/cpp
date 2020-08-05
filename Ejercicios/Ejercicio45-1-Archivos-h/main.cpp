#include <iostream>
#include "calculadora.h"
#include "alumnos.h"

using namespace std;

//extern int sumar(int a, int b);


int main(int argc, char const *argv[])
{
    cout << calcular(5, 7, '+');
    cout << endl;
    cout << nombreCompleto() << endl;
    cout << obtenerEdad();

    return 0;
}

