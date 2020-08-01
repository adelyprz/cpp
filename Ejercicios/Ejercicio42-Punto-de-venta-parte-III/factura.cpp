#include <iostream>

using namespace std;

double subtotal;
string lista_productos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
    lista_productos = lista_productos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
}