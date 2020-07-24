//Tarea 4 - Modificar el programa suma de pares

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //Variables
    int pares = 0;
    int impares = 0;
    int total = 0;

    for (int i = 1; i <= 10; i++)
    {
        //Condición para sumar números pares
        if (i % 2 == 0)
        {
            pares = pares + i;
        }

        //Condición para sumar números impares
        if (i % 2 != 0)
        {
            impares = impares + i;
        }
        cout << i << " ";
    }

    total = pares + impares; //Suma la cantidad de pares con la cantidad de impares

    cout << endl;
    cout << endl;
    cout << "Total de numeros Pares: " << pares << endl;
    cout << "Total de numeros Impares: " << impares << endl;
    cout << "Total de la suma de numeros pares e impares: " << total;
    return 0;
}