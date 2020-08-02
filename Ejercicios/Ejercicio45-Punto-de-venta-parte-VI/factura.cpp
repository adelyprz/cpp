#include <iostream>

using namespace std;

double subtotal;
string lista_productos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
    lista_productos = lista_productos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
}

void imprimirFactura()
{
    //Variables necesarias para el calculo del impuesto y el total de factura
    double impuesto = 0;
    double total = 0;

    impuesto = subtotal * 0.15;
    total = subtotal + impuesto;

    system("cls");
    cout << "*******" << endl;
    cout << "FACTURA" << endl;
    cout << "*******" << endl;
    cout << endl;

    cout << "Productos: " << endl;
    cout << lista_productos;

    cout << endl;
    cout << "Subtotal:      L " << subtotal << endl;
    cout << "I.S.V 15%:     L " << impuesto << endl;
    cout << "Total a pagar: L " << total << endl;
    cout << endl;
    cout << endl;
    system("pause");
}