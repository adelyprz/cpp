#include <iostream>
using namespace std;

 
int Modulus(int iN, int iMod) {
    int iQ = (iN/iMod);
    return iN - (iQ*iMod);
}

 
char GetChar(int iGenerator, char cBase, int iRange) {
    return (cBase + Modulus(iGenerator, iRange));
}

 
int main() {
    string contrasena;
    
    cout << "Eres un agente? ingresa tu password para acceder a la matrix: ";
    cin >> contrasena;
    
    if (contrasena == "smith") {
        system("COLOR 02");

 
        char caRow[80];
        int j = 7;
        int k = 2;
        int l = 5;
        int m = 1;
        int ciclos = 0;

 
        while (true) {
            int i = 0;
            
            // caracteres aleatorios
            while (i < 80) {
                if (caRow[i] != ' ') {
                    caRow[i] = GetChar(j + i*i, 33, 30);
                    cout << caRow[i];
                }
                
                ++i;
            }
            j = (j + 31);
            k = (k + 17);
            l = (l + 47);
            m = (m + 67);
            caRow[Modulus(j, 80)] = '-';
            caRow[Modulus(k, 80)] = ' ';
            caRow[Modulus(l, 80)] = '-';
            caRow[Modulus(m, 80)] = ' ';
            
            i = 0;
            while (i < 3000) {
                GetChar(1, 1, 1);
                 ++i;
            }

 
            ciclos++;
        }
    }           
    if (contrasena == "neo") {
        system("COLOR 02");

 
        char caRow[80];
        int j = 7;
        int k = 2;
        int l = 5;
        int m = 1;
        int ciclos = 0;
        int hack = 1; //variable que usaremos para hackear la matrix
        
 
        
        while (true) {
        //Se deben cumplir 10 iteraciones o ciclos dentro de la condición contrasena == "neo"
        while (hack <= 10){
            int i = 0;    
            
            // caracteres aleatorios
            
            while (i < 80) {
                if (caRow[i] != ' ') {
                    caRow[i] = GetChar(j + i*i, 33, 30);
                    cout << caRow[i];
                }
                
                ++i;
            }
            j = (j + 31);
            k = (k + 17);
            l = (l + 47);
            m = (m + 67);
            caRow[Modulus(j, 80)] = '-';
            caRow[Modulus(k, 80)] = ' ';
            caRow[Modulus(l, 80)] = '-';
            caRow[Modulus(m, 80)] = ' ';
            
            i = 0;
            while (i < 3000) {
                GetChar(1, 1, 1);
                 ++i;
                
            }

 
            ciclos++;
            hack++;
               
        }
        if (hack = 10){
            cout << endl;
            cout << endl << "*** EL SISTEMA FALLO ***";//Mensaje de error
            system("COLOR 04");
            return 0;
        }
        }

        system("COLOR 04");      
        
            
    }
     else {
        cout << endl;
        cout << "acceso a la matrix denegado";
        cout << endl;
    }

 
    return 0;
}