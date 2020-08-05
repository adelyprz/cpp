#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int numero = 0;

    // Inicializa número random
    srand(time(NULL));

    for (int i = 0; i < 20; i++)
    {
        //Genera un número entre 1 y 10
        numero = rand() % 100 + 1;
        cout << "Numero al azar: " << numero << endl;
    }
    


    return 0;
}