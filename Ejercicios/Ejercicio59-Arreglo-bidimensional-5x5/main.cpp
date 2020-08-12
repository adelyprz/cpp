//Tarea 11 - Crear un arreglo bidimensional de 5x5 y sumar todos sus elementos
/*  Crear un arreglo bidimensional de 5x5
    Inicializar cada elemento del arreglo con valores random
    Sumar todos los valores del arreglo bidimensional y mostrar un mensaje "Total Suma: ";
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{   

    int numeros [5][5];
    int total = 0;

    srand(time(NULL)); //Inicializa random

    //Utilizaremos un ciclo For y la propiedad random para asignar valores aleatorios a los numeros del arreglo
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            numeros[i][j] = {rand() % 10 + 1};

            total = total + numeros[i][j];
        }
    }

    //Salida en pantalla de los valores asignados al arreglo
    cout << "Se ha creado un arreglo de 5x5" << endl;
    cout << "Valores contenidos en el arreglo:" << endl;
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << numeros[i][j] << " ";
        }

        cout << endl;
    }
    
    cout << endl;
    cout << "Se van a sumar los valores contenidos...";
    cout << endl;
    cout << "Total Suma: " << total;
    return 0;
}