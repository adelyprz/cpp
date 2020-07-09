#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //Valores iniciales
    int a = 1000;
    int b = 5000;
    int c = 7000;

    //Condiciones
    if (a > b)
    {
        if (a > c)
        {
            cout << "a es el mayor de las tres";
        }
        else
        {
            cout << "c es el mayor";
        }
    }
    else
    {
        if (b > c)
        {
            cout << "b es el mayor de los tres";
        }
        else
        {
            cout << "c es el mayor";
        }
        
    }
    
    return 0;
}

