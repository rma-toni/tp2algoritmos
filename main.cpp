#include <iostream>
#include "tp2.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    //------------------------------EJERCICIO 1-----------------------------

    /*Ingrese un valor N (<25). Generar un arreglo de N componentes en el cual las mismas contengan los primeros numeros naturales
    pares e imprimirlo*/

    /*int n1;
    cout << "Ingrese un numero menor a 25: ";
    cin >> n1;
    //compruebo que el numero ingresado sea menor a 25 y mayor que 0
    while (n1>=25 || n1<1)
    {
        cout << "El numero ingresado es igual om mayor a 25, por favor ingrese uno menor: ";
        cin >> n1;
    }

    ejercicio1(n1);*/
    
    //------------------------------EJERCICIO 2-----------------------------

    /*Ingresar un valor entero N(<30) y a continuacion un conjunto de N elementos. Si el ultimo elemento del conjunto tiene un valor menor que 10 
    imprimir los negativos y en caso contrario los demas*/

    int n2;
    cout << "Ingrese un numero menor a 30: ";
    cin >> n2;
    //compruebo que el numero ingresado sea menor a 25 y mayor que 0
    while (n2>=30 || n2<0)
    {
        cout << "El numero ingresado es invalido, por favor ingrese uno menor a 30 y mayor que 0: ";
        cin >> n2;
    }

    ejercicio2(n2);

    return 0;
}
