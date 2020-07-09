#include <iostream>

using namespace std;

int main (int argc, char const *argv[])
{
    int numero = 0;
    int numerosecreto = 7;

    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << endl;

    if (numero == numerosecreto)
    {
        cout << "Adivinaste el numero secreto: " << numero;
    }

    else
    {
        cout << "No adivinaste ";
    }

    return 0;
}