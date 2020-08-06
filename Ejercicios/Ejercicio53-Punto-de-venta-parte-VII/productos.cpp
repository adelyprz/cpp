#include <iostream>
#include "factura.h" //en lugar de utilizar extern

using namespace std;


void productos(int opcion)
{
    system("cls");

    int opcionProducto = 0;

    switch (opcion)
    {
        case 1:
        {   
            cout << "BEBIDAS CALIENTES" << endl;
            cout << "*****************" << endl;
            cout << "1 - Capuccino" << endl;
            cout << "2 - Expresso" << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcionProducto;
            
            switch (opcionProducto)
            {
                case 1:
                    agregarProducto("1 Capuccino - L 40.00", 1, 40);
                    break;
                
                case 2:
                    agregarProducto("1 Expresso - L 30.00", 1, 30);
                    break;

                default:
                {
                    cout << "Opcion no valida";
                    return;
                    break;
                }
            }

            cout << endl;
            cout << "Producto agregado" << endl << endl;            
            system("pause");
            break;
        }
        case 2:
        {   
            cout << "BEBIDAS FRIAS" << endl;
            cout << "*************" << endl;
            cout << "1 - Granita de Cafe" << endl;
            cout << "2 - Iced Latte" << endl;
            cout << "3 - Pina Colada" << endl;
            cout << endl;
            cout << "Ingrese una opcion: ";
            cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
                agregarProducto("1 Granita de Cafe - L 49.00", 1, 49);
                break;
            case 2:
                agregarProducto("1 Iced Latte - L 35.00", 1, 35);
                break;
            case 3:
                agregarProducto("1 Pina Colada - L 40.00", 1, 40);
                break;
            
            default:
                {
                    cout << "Opcion no valida";
                    return;
                    break;
                }
            }

            cout << endl;
            cout << "Producto agregado" << endl << endl;
            system("pause");
            break;
        }
        case 3:
        {   
            cout << "REPOSTERIA" << endl;
            cout << "**********" << endl;
            cout << "1 - Black Tie Mousse Cake" << endl;
            cout << "2 - Tres Leches" << endl;
            cout << "3 - Carlota Rusa" << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
                agregarProducto("1 Black Tie Mousse Cake - L 90.00", 1, 90);
                break;
            case 2:
                agregarProducto("1 Tres Leches - L 55.00", 1, 55);
                break;
            case 3:
                agregarProducto("1 Carlota Rusa - L 60.00", 1, 60);
                break;
            
            default:
            {
                cout << "Ingrese una opcion valida";
                return;
                break;
            }
            
            }
            
            cout << endl;
            cout << "Producto agregado" << endl << endl;
            system("pause");
            break;
        }


        default:
            break;
    }
}