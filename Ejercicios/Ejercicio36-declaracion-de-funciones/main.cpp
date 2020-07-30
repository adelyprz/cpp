#include <iostream>

using namespace std;

int sumar(int a, int b); 
int numero = 0;

int main(int argc, char const *argv[])
{
    numero = 5;
    cout << sumar(5,7);
    cout << endl << numero;
    return 0;
}

int sumar(int a, int b)
{   
    numero = 7;
    return a + b;
}