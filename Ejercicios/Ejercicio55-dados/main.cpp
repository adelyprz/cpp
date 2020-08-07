//Librerías necesarias para realizar uso de la propiedad o función Random
#include <iostream>
#include <stdlib.h> 
#include <time.h>
#include "dados.h"

using namespace std;

//Función para simular el dibujo de un par de dados
void dados()
{
    cout << endl;
    cout << " ------- " << "  " << " ------- " << endl;
    cout << "| *   * |" << "  " << "| *   * |" << endl;
    cout << "|   *   |" << "  " << "| *   * |" << endl;
    cout << "| *   * |" << "  " << "| *   * |" << endl;
    cout << " ------- " << "  " << " ------- " << endl;
    cout << endl;
    cout << endl;
}
//Programa que simula el lanzamiento de dos dados
int main(int argc, char const *arv[])
{
    //Variables
    int dado1 = 0;
    int dado2 = 0;
    char tecla;
    int intentos = 0;
    

    while(intentos == 0)
    {
    //Inicio del programa
    system("cls");
    cout << "Bienvenido al juego de los dados!" << endl;
    dados();
    cout << "Vamos a lanzar los dados y ver tu suerte" << endl;
    cout << endl;
    system("pause");

    //Inicializa Random
    srand(time(NULL));

    //Se generan números al azar entre 1 y 6 (Las caras de los dados)
    dado1 = rand() % 6 + 1;
    dado2 = rand() % 6 + 1;

    //Muestra el resultado final
    system("cls");
    cout << "El resultado obtenido es: " << dado1 << " y " << dado2 << endl;
    cout << endl;
    //Invoca la función que permite visualizar los dados lanzados
    dadosArrojados(dado1, dado2); 
    intentos++;

    //Mensaje al final del juego
    cout << "Desea volver a jugar? (S/n)";
    cin >> tecla;

    //Condición positiva para volver a jugar
    if(tecla == 'S' || tecla == 's')
    {
        intentos = 0;
        system("pause");
    }
    }   
    return 0;
}