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

//---------------------------------------------------------EJERCICIO 6-------------------------------------------------------

/*Ingresar un valor entero N(<40). A continuacion ingresar un conjunto VALOR de N elementos. Determinar e imprimir el valor maximo y
la posicion del mismo dentro del conjunto. Si el maximo no es unico, imprimir todas las posiciones en que se encuentra.*/

//Recorre VALOR dos veces
void ejercicio6v1(int n){ //V1 sin errores
    int VALOR[n];
    int max = 0; //variable que almacena el valor maximo;
    int maxIndex;
    for (int i = 0; i < n; i++)
    {
        std::cout << "Ingrese el valor numero " << i+1 << ": ";
        std::cin >> VALOR[i];
    }

    //Ahora recorremos VALOR por primero vez para ver cual es el valor maximo
    for (int i = 0; i < n; i++)
    {
        if(VALOR[i] > max){
            max = VALOR[i];
            maxIndex = i;   
        }
    }
    std::cout << "El valor maximo es " << max << " y se encuentra en la posicion " << maxIndex;
    //Ahora recorremos recorremos VALOR por segundo vez para ver si el valor maximo no es unico
    for (int i = maxIndex+1; i < n; i++)
    {
        if(VALOR[i] == max)
        {
            std::cout << "\nOtro valor igual se encuentra en la posicion: " << i;
        }      
    }
    
    
}

//Recorre VALOR una vez
void ejercicio6v2(int n){
    int VALOR[n];
    int max = 0; //variable que almacena el valor maximo;
    int counter; //contara cuandos max hay
    int maxIndex[n]; //este Vector almacenara todos los lugares en los que se encuentra la posicion maxima;
    for (int i = 0; i < n; i++)
    {
        std::cout << "Ingrese el valor numero " << i+1 << ": ";
        std::cin >> VALOR[i];
    }

    //TODO: Hacemos todo lo que hicimos en la funcion anterior de una sola vez 
    for (int i = 0; i < n; i++)
    {
        if(VALOR[i] > max){
            max = VALOR[i];
            counter = 1;
            maxIndex[counter-1] = i;
        }else if(VALOR[i] == max){
            counter++;
            maxIndex[counter-1] = i;
        }
    }

    //Imprimimos los datos obtenidos.
    std::cout << "El valor maximo es " << max << " y se encuentra en las siguientes posiciones: "; 
    for (int i = 0; i < counter; i++)
    {
        std::cout << "  " << maxIndex[i];
    }
    
}

//---------------------------------------------------------EJERCICIO 7-------------------------------------------------------

//SIN FINALIZAR

/* Ingresar un valor entero N(<15). A continuacion ingresar un conjunto DATO de N elementos. Generar otro conjunto de dos componentes MEJORDATO
donde el primer elemento sea el mayor valor de DATO y el segundo el siguiente mayor(puede ser el mismo si esta repetido)*/

void ejercicio7(int n){
    int DATO[n];
    int MEJORDATO[2];
    int max = 0, max2 = 0;
    for (int i = 0; i < n; i++)
    {
        std::cout << "Ingrese el valor numero " << i+1 << ": ";
        std::cin >> DATO[i];
    }
    //averiguamos el valor maximo
    for (int i = 0; i < n; i++)
    {
        if(DATO[i] > max){
            max = DATO[i];
        }
    }
    MEJORDATO[0] = max; //lo asignamos al primer valor de MEJORDATO


    //TODO: Buscar y asignar segundo valor.
    for (int i = 0; i < n; i++)
    {
        if(DATO[i] > max)
        {
            /* code */
        } 
    }
    
}

//---------------------------------------------------------EJERCICIO 8-------------------------------------------------------

/*Ingresar un valor entero N(<25). A continuacion ingresar un conjunto GG de N elementos. Imprimir el arreglo en orden inverso generando tres
estrategias para imprimir el arreglo en orden inverso los elementos a razon de:
a) Uno por linea    b) Diez por linea   c) Cinco por linea con identificacion*/

void ejercicio8(int n){
    int GG[n];
    int invGG[n];//aqui guardaremos el arreglo invertido
    int control;

    for (int i = 0; i < n; i++)
    {
        std::cout << "Ingrese el valor numero " << i+1 << ": ";
        std::cin >> GG[i];
    }

    std::cout << "De que forma quiere mostrar el resultado (1 - Uno por linea, 2 - Diez por linea , 3 - Cinco por linea): ";
    std::cin >> control;

    for (int i = 0; i < n; i++)
    {
        invGG[i] = GG[(n-1)-i];
    }

    switch (control)
    {
        case 1:
            for (int i = 0; i < n; i++)
            {
                std::cout << invGG[i] << std::endl;   
            }
            break;
        case 2:
            for (int i = 0; i < n; i++)
            {
                if((i)%10 == 0) std::cout << std::endl;
                std::cout << invGG[i] << "  ";   
            }
            break;
        case 3:
            for (int i = 0; i < n; i++)
            {
                if((i)%5 == 0) std::cout << std::endl;
                std::cout << invGG[i] << "  ";   
            }
            break;
    }
}


//---------------------------------------------------------EJERCICIO 9-------------------------------------------------------

/*Ingresar un valor entero N(<40). A continuacion ingresar un conjunto A y luego otro conjunto B ambos de N elementos. Generar un arreglo C donde
cada elemento se forme de la siguiente forma:
C[1] <- A[1] + B[N]         C[2] <- A[2] + B[N-1]     ....................     C[N] <- A[N] + B[1]*/

void ejercicio9(int n){
    int A[n], B[n], C[n];
    //Rellenamos los conjuntos A y B
    for (int i = 0; i < n; i++)
    {
        std::cout << "CONJUNTO A: Ingrese el elemento numero " << i+1 << ": ";
        std::cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << "CONJUNTO B: Ingrese el elemento numero " << i+1 << ": ";
        std::cin >> B[i];
    }
    //A continuacion calculamos los elementos del conjunto C y se los imprime
    for (int i = 0; i < n; i++)
    {
        C[i] = A[i] + B[(n-1)-i];
        std::cout << C[i] << std::endl;
    }
}

//---------------------------------------------------------EJERCICIO 10-------------------------------------------------------

/*Ingresar dos valores enteros M(<10) y N(<15). A continuacion ingresar un conjunto A de M elementos y luego otro B de N elementos. Generar e imprimir:
a) Un conjunto C resultante de la anexion de A y B.
b) Un conjunto D resultante de la anexion de los elementos distintos de cero de A y B.*/

void ejercicio10(int M, int N){
    int largoC = M + N;
    int counter1 = 0;
    int counter2 = 0;
    int A[M], B[N], C[largoC]; //aun no conocemos la cantidad de elementos que tendra el conjunto D
    //Ingresar los valores de los conjuntos
    for (int i = 0; i < M; i++)
    {
        std::cout << "CONJUNTO A: Ingrese el elemento " << i+1 << ": ";
        std::cin >> A[i];
        if(A[i] != 0) counter1++;
    }
    for (int i = 0; i < N; i++){
        std::cout << "CONJUNTO B: Ingrese el elemento " << i+1 << ": ";
        std::cin >> B[i];
        if(B[i] != 0) counter1++;
    }

    //LLenamos el conjunto C.
    for (int i = 0; i < largoC; i++)
    {
        if (i < (largoC - N)) C[i] = A[i];
        if (i >= (largoC -N)) C[i] = B[i - M];
        std::cout << C[i] << std::endl;
    }
    
    //LLenamos el conjunto D.
    int D[counter1];
    counter1 = 0;
    for (int i = 0; i < largoC; i++)
    {
        if(C[i] != 0){
            D[counter1] = C[i];
            std::cout << D[counter1] << std::endl;
            counter1++;
        }
    }
}

//---------------------------------------------------------EJERCICIO 11-------------------------------------------------------

/*Ingresar dos valores enteros M(<25) y N(<10). A continuacion ingresar un conjunto A de M elementos y luego otro B de N elementos, ambos ordenados en forma
creciente por magnitud. Generar e imprimir el conjunto TOTAL resultante del apareo por magnitud de los conjuntos A y B*/

void ejercicio11(){

}

//---------------------------------------------------------EJERCICIO 12-------------------------------------------------------

/*Ingresar un valor entero N(<40). Luego ingresar un conjunto REFER de N elementos reales (ingresan ordenados por magnitud creciente). Finalmente ingresar
un valor pesquisa X. Desarrollar el programa que determine e imprima:
a) Con cual elemento (posicion) del conjunto coincide, o
b) Entre cuales dos elementos (posiciones) se encuentro, o
c) Si es menor que el primero o mayor que el ultimo*/

void ejercicio12(){

}

//---------------------------------------------------------EJERCICIO 13-------------------------------------------------------

/*Ingresar un valor entero CANT(<50) y a continuacion un conjunto SINOR de CANT elementos. Desarrollar un programa que determine e imprima:
a)El conjunto SINOR en el que cada elemento original se intercambie por su simetrico: A[1] con A[CANT], A[2] con A[CANT-1], ..... etc.
b)El conjunto SINOR ordenado de menor a mayor sobre si mismo indicando la posicion que ocupaba cada elmento en el conjunto original.*/

void ejercicio13(){

}