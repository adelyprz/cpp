#include <iostream>

using namespace std;

int main (int arc, char const *argv[])
{
    int a = 5;
    int b = 10;
    int c = 7;

    if (a > b && a >c )
    {
        cout << "a es el mayor: " << a;

    }

    else if (b > a && b > c)
    {
        cout << "b es el mayor: " << b;

    }

    else if (c > a && c > b)
    {
        cout << "c es el mayor: " << c;

    }
    
    else
    {
        cout << "Hay números ingresados que son iguales";
    }
    

    return 0;
}