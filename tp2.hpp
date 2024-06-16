#include <iostream>

//---------------------------------------------------------EJERCICIO 1--------------------------------------------------------

/*Ingrese un valor N (<25). Generar un arreglo de N componentes en el cual las mismas contengan los primeros numeros naturales
pares e imprimirlo*/

void ejercicio1(int n){
    int paresNaturales[n];
    for (int i = 1; i <= n; i++)
    {
        paresNaturales[i-1] = i*2;
        std::cout << paresNaturales[i-1] << std::endl;
    }    
}

//---------------------------------------------------------EJERCICIO 2--------------------------------------------------------

/*Ingresar un valor entero N(<30) y a continuacion un conjunto de N elementos. Si el ultimo elemento del conjunto tiene un valor menor que 10 
imprimir los negativos y en caso contrario los demas*/

void ejercicio2(int n){
    int array1[n];
    //Se procede al ingreso de valores por consola
    for (int i = 0; i < n; i++)
    {
        std::cout << "Ingrese el elemento numero " << i+1 << ": ";
        std::cin >> array1[i];
    }
    //Si es menor a 10 se imprime negativos
    if (array1[n-1] < 10)
    {
        for (int i = 0; i < n; i++) if(array1[i] < 0) std::cout << array1[i] << " ";  
    }else{
        for (int i = 0; i < n; i++) if(array1[i] >= 0) std::cout << array1[i] << " ";
    }
}

//---------------------------------------------------------EJERCICIO 3-------------------------------------------------------

/*Ingresar un valor entero N (<20). A continuacion un conjunto VEC de N componentes. A partir de este conjunto gerar otro FACT en el que cada 
elemento sea el factorial del elemento homologo de VEC. Finalmente imprimir ambos vectoras a razon de un valor de cada uno por renglon
NOTA: EL PROGRAMA PRINCIPAL SOLO PUEDE TENER 6 INSTRUCCIONES*/

//--FUNCION AUXILIAR: Tomar en cuenta las limitacion para almacenar valor de un entero al momento de calcular el factorial de un numero mayor a 12
int factorial(int n){
   int f = 1;
   for (int i = 1; i <= n; i++)
   {
        f = f * i;
   }   
   return f;
}

void ejercicio3(int n){
    int VEC[n];
    int FACT[n];
    for (int i = 0; i < n; i++)
    {
        std::cout << "Ingrese el valor numero " << i+1 << ": ";
        std::cin >> VEC[i];
        FACT[i] = factorial(VEC[i]);
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << VEC[i] << FACT[i] << std::endl;
    }
}

//---------------------------------------------------------EJERCICIO 4-------------------------------------------------------

/*Ingresar un valor entero N (<25). A continuacion ingresar un conjunto VEC de N componentes. Si la suma de las componentes resulta mayor
que cero imprimir las de indice par, sino las de infice impar*/

void ejercicio4(int n){
    int VEC[n];
    int total = 0;
    for (int i = 0; i < n; i++) {
        std::cout << "Ingrese el valor numero " << i+1 << ": ";
        std::cin >> VEC[i];
        total += VEC[i];
    }
    
    if (total > 0) {
        for (int i = 0; i < n; i+=2) std::cout << VEC[i] << std::endl;
    } else if(total < 0){
        for (int i = 1; i < n; i+=2) std::cout << VEC[i] << std::endl;
    }
}

//---------------------------------------------------------EJERCICIO 5-------------------------------------------------------

/*Ingresar un valor entero N(<30). A continuacion ingresar un conjunto UNO y luego otro conjunto DOS, ambos de N componentes.
Generar e imprimir otro conjunto TRES intercalando los valores de posicion par de UNO e IMPAR de DOS
Diseñar un procedimiento que rellene un arreglo en posiciones salteadas con las componentes de otro y usarlo para cada conjunto*/

void ejercicio5(int n){
    int UNO[n];
    int DOS[n];
    int TRES[n];

    //Rellenamos el conjunto 1
    for (int i = 0; i < n; i++)
    {
        std::cout << "CONJUNTO UNO: Ingrese el valor numero " << i+1 << ": ";
        std::cin >> UNO[i];
    }
    //Rellenamos el conjunto 2
    for (int i = 0; i < n; i++)
    {
        std::cout << "CONJUNTO DOS: Ingrese el valor numero " << i+1 << ": ";
        std::cin >> DOS[i];
    }
    //Rellenamos le conjunto 3
    for (int i = 0; i < n; i++)
    {
        if(i%2 == 0){
            TRES[i] = UNO[i];
        }else{
            TRES[i] = DOS[i];
        }
        std::cout << TRES[i];
    }
}