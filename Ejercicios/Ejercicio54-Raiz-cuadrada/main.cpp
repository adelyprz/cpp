#include <iostream>
#include <math.h> //Librería math.h para utilizar funciones matemáticas dentro de C++

using namespace std;

//Función Raiz Cuadrada: devuelve el valor de la raiz cuadrada de un numero dado
void raizCuadrada(int n1)
{
    //Variable que aloja el resultado del calculo de raiz cuadrada
    double raiz = 0;

    //Ciclo para evitar que el usuario ingrese un valor negativo (En matemáticas la raíz cuadrada de un numero negativo no tiene solución real)
    while (n1 < 0)
    {
        cout << "No tiene solucion real" << endl;
        cout << endl;
        cout << "Ingrese otro valor: ";
        cin >>  n1;
    }

    //Utilizando la librería math.h y haciendo uso de la función sqrt() se obtiene la raíz cuadrada de un número
    raiz = sqrt(n1);
    cout << endl;
    cout << "La raiz cuadrada de " << n1 << " es: " << raiz;
}

//Programa principal
int main(int argc, char const *argv[])
{
    //Variable
    int num = 0;

    //Entrada de datos
    cout << "Programa para el calculo de la raiz cuadrada de un numero";
    cout << endl;
    cout << endl;
    cout << "Ingrese un numero: ";
    cin >> num;

    //Invoca la función Raiz Cuadrada
    raizCuadrada(num);

    return 0;
}