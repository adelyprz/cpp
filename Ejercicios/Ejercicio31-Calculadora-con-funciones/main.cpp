#include <iostream>

using namespace std;

int sumar(int a, int b)
{
    return a + b;
}
int claculadora(int a, int b, char operador)
{
    //cout << "Ingrese el valor de a: ";
    if (operador == '+'){
        return sumar(a,b);
    }

    return -1;
}

int main (int argc, char const *argv[])
{
    int n1 = 0;
    int n2 = 0;
    char operador;

    cout << "Ingrese un valor para a: ";
    cin >> n1;
    cout << "Ingrese un valor para b: ";
    cin >> n2;
    cout << "Ingrese el operador (+,-,*,/): ";
    cin >> operador;

    cout << endl;

    cout << "Resultado de " << n1 << operador << n2 << " es: ";
    cout << claculadora(n1, n2, operador);

    return 0;
}