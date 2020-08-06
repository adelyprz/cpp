#include <iostream>

using namespace std;

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}
int main(int arg, char const *argv[])
{
    
    cout << fib(9);
    cout << endl;


    //Pruebas para cualquier posicion que se desee conocer su valor
    /*int pos = 0;
    cout << "Ingresa la posicion dentro de la sucesion de Fibonacci que quieres obtener: ";
    cin >> pos;
    cout << endl;
    cout << fib(pos);
    cout << endl;*/
    return 0;
}