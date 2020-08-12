#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //Declaración de la variable como arreglo unidimensional
    int numeros[5];

    /*int indice = 3;

    numeros[indice] = 50;

    cout << numeros[indice] << endl;*/

    for (int i = 0; i < 5; i++)
    {
        numeros[i] = i;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << numeros[i] << endl;
    }
    
    

    return 0;
}