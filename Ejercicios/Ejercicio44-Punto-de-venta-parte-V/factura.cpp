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
    system("cls");
    cout << "*******" << endl;
    cout << "FACTURA" << endl;
    cout << "*******" << endl;
    cout << endl;

    cout << "Productos: " << endl;
    cout << lista_productos;

    cout << endl;
    cout << "Subtotal: " << subtotal;
    cout << endl;
    cout << endl;
    system("pause");
}