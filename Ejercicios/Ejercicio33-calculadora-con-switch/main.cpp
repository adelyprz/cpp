#include <iostream>

using namespace std;

int sumar(int a, int b)
{
    return a + b;
}

int restar(int a, int b)
{
    return a - b;
}

int multiplicar(int a, int b)
{
    return a * b;
}

int dividir(int a, int b)
{
    if(b != 0)
    {
        return a / b;
    }
    throw "La division entre 0 no esta definida";
}
int calculadora(int a, int b, char operador)
{
    switch (operador)
    {
    case '+':
        return sumar(a, b);
        break;
    
    case '-':
        return restar(a, b);
        break;

    case '*':
        return multiplicar(a, b);
        break;

    case '/':
        return dividir(a, b);
        break;
    
    default:
        break;
    }

    throw "El operador no existe";
}

int main (int argc, char const *argv[])
{
    int n1 = 0;
    int n2 = 0;
    char operador;
    int resultado;

    cout << "Ingrese un valor para a: ";
    cin >> n1;
    cout << "Ingrese un valor para b: ";
    cin >> n2;
    cout << "Ingrese el operador (+,-,*,/): ";
    cin >> operador;

    cout << endl;

    try
    {   
        resultado = calculadora(n1, n2, operador);
        cout << "Resultado de " << n1 << " " << operador << " " << n2 << " es: ";
        cout << resultado;
    }
    catch(const char* error)
    {
        cout << error;
    }
    

    return 0;
}