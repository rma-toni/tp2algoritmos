#include <iostream>
#include "tp2.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    //------------------------------EJERCICIO 1-----------------------------

    /*Ingrese un valor N (<25). Generar un arreglo de N componentes en el cual las mismas contengan los primeros numeros naturales
    pares e imprimirlo*/

    int n1;
    cout << "Ingrese un numero menor a 25: ";
    cin >> n1;
    while (n1>=25)
    {
        cout << "El numero ingresado es igual om mayor a 25, por favor ingrese uno menor: ";
        cin >> n1;
    }

    arrayPar(n1);
    
    //------------------------------EJERCICIO 2-----------------------------
    return 0;
}
