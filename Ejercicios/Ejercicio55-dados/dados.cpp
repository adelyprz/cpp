#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void dadosArrojados(int a, int b)
{
    //Condiciones para el primer dado
    switch (a)
    {
    case 1:
    {
        cout << " ------- " << endl;
        cout << "|       |" << endl;
        cout << "|   *   |" << endl;
        cout << "|       |" << endl;
        cout << " ------- " << endl;
        cout << endl;
            break;
    }
    case 2:
    {
        cout << " ------- " << endl;
        cout << "|       |" << endl;
        cout << "|   *   |" << endl;
        cout << "|     * |" << endl;
        cout << " ------- " << endl;
        cout << endl;
        break;
    }
    case 3:
    {
        cout << " ------- " << endl;
        cout << "| *     |" << endl;
        cout << "|   *   |" << endl;
        cout << "|     * |" << endl;
        cout << " ------- " << endl;
        cout << endl;
        break;
    }
    case 4:
    {
        cout << " ------- " << endl;
        cout << "| *   * |" << endl;
        cout << "|       |" << endl;
        cout << "| *   * |" << endl;
        cout << " ------- " << endl;
        cout << endl;
        break;
    }
    case 5:
    {
        cout << " ------- " << endl;
        cout << "| *   * |" << endl;
        cout << "|   *   |" << endl;
        cout << "| *   * |" << endl;
        cout << " ------- " << endl;
        cout << endl;
        break;
    }
    case 6:
    {
        cout << " ------- " << endl;
        cout << "| *   * |" << endl;
        cout << "| *   * |" << endl;
        cout << "| *   * |" << endl;
        cout << " ------- " << endl;
        cout << endl;
        break;
    }

    
    default:
        break;
    }

    //Condiciones para el segundo dado
    switch (b)
    {
    case 1:
    {
        cout << endl;
        cout << " ------- " << endl;
        cout << "|       |" << endl;
        cout << "|   *   |" << endl;
        cout << "|       |" << endl;
        cout << " ------- " << endl;
        cout << endl;
        break;
    }
    case 2:
    {
        cout << endl;
        cout << " ------- " << endl;
        cout << "|       |" << endl;
        cout << "|   *   |" << endl;
        cout << "|     * |" << endl;
        cout << " ------- " << endl;
        cout << endl;
        break;
    }
    case 3:
    {
        cout << endl;
        cout << " ------- " << endl;
        cout << "| *     |" << endl;
        cout << "|   *   |" << endl;
        cout << "|     * |" << endl;
        cout << " ------- " << endl;
        cout << endl;
        break;
    }
    case 4:
    {
        cout << endl;
        cout << " ------- " << endl;
        cout << "| *   * |" << endl;
        cout << "|       |" << endl;
        cout << "| *   * |" << endl;
        cout << " ------- " << endl;
        cout << endl;
        break;
    }
    case 5:
    {
        cout << endl;
        cout << " ------- " << endl;
        cout << "| *   * |" << endl;
        cout << "|   *   |" << endl;
        cout << "| *   * |" << endl;
        cout << " ------- " << endl;
        cout << endl;
        break;
    }
    case 6:
    {
        cout << endl;
        cout << " ------- " << endl;
        cout << "| *   * |" << endl;
        cout << "| *   * |" << endl;
        cout << "| *   * |" << endl;
        cout << " ------- " << endl;
        cout << endl;
        break;
    }
    
    default:
        break;
    }
}