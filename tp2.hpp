#include <iostream>

//---------------------------------------------------------EJERCICIO 1--------------------------------------------------------

/*Ingrese un valor N (<25). Generar un arreglo de N componentes en el cual las mismas contengan los primeros numeros naturales
pares e imprimirlo*/

void arrayPar(int n){
    int paresNaturales[n];
    for (int i = 1; i <= n; i++)
    {
        paresNaturales[i-1] = i*2;
        std::cout << paresNaturales[i-1] << std::endl;
    }    
}
