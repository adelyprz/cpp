#include <iostream>

using namespace std;

int sumar(int a, int b) //Funcion de suma
{
    return a + b;
}

int restar(int a, int b) //Funcion de resta
{
    return a - b;
}

int main(int argc, char const *argv[])
{
    system("cls");

    int n1 = 0;
    int n2 = 0;
    cout << "Ingrese el valor de a: ";
    cin >> n1;
    cout << "Ingrese el valor de b: ";
    cin >> n2;

    cout << endl;

    cout << "El resultado de la suma es: " << sumar(n1,n2);
    cout << endl;
    cout << "El resultado de la resta es: " << restar(n1,n2);
    cout << endl;
    return 0;
}