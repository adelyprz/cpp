#include <iostream>

using namespace std;

int sumar(int a, int b)
{
    int resultado = 0;
    resultado = a + b;
    return resultado;
}

void sumarConValorPorReferencia(int a, int &b, int &resultado)
{
    a = 10;
    a = 12;
    resultado = 100; //a + b;
}

int main(int argc, char const *argv[])
{
    int num1 = 5;
    int num2 = 7;
    int r = 0;

    //sumar(num1, num2);

    sumarConValorPorReferencia(num1, num2, r);

    cout << num1 << endl;
    cout << num2 << endl;
    cout << r << endl;
    cout << "Finalizado";

    return 0;
}