#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{   

    //Ejercicio6 - Calculadora

    //Variables para las operaciones
    int a = 0;
    int b = 0;
    int suma = 0;
    int resta = 0;
    int multiplicacion = 0;
    double division = 0;

    //Datos de entrada
    cout << "Ingrese un valor para a: ";
    cin >> a;

    cout << "Ingrese un valor para b (debe ser distinto de 0 para realizar una division): ";
    cin >> b;

    cout << endl;
    
    //Procesamiento de los datos
    suma = a + b; //operacion de suma

    resta = a - b; //operacion de resta

    multiplicacion = a * b; //operacion de multiplicacion

    division = a / b; //operacion de division (b debe ser distinto de 0);    

    //Salida de la informacion o datos procesados
    cout << "La suma de a + b es: " << suma << endl;
    cout << "La resta de a - b es: " << resta << endl;
    cout << "La multiplicacion de a * b es: " << multiplicacion << endl;
    cout << "La division de a / b es: " << division << endl;
    

    return 0;
}
