#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //Datos de entrada
    double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;
    int descuento = 0;
    double calculoDescuento = 0;
    double calculoImpuesto = 0;
    char exenta;

    cout << "Ingrese el subtotal de la factura: ";
    cin >> subtotal;

    cout << "Ingrese el descuento (0, 10, 15, 20): ";
    cin >> descuento;

    cout << "Es factura exenta? S/N: ";
    cin >> exenta;

    //Proceso
    calculoDescuento = (subtotal * descuento) / 100;

    if (exenta == 'S' || exenta == 's') //Condición si la factura es exenta
    {
        calculoImpuesto = 0;
    }

    else if (exenta == 'N' || exenta == 'n')   //Condicición si la factura no es exenta.
    {
        calculoImpuesto = (subtotal - calculoDescuento) * impuesto;
    }

    else
    {
        calculoImpuesto = (subtotal - calculoDescuento) * impuesto; //Condición en caso de ingresarse cualquier otro valor distinto de S, s, N o n.
    }


    total = subtotal - calculoDescuento + calculoImpuesto;


    //Salida

    cout << endl;
    cout << "Total a pagar: " << total;

    return 0;
}