#include <iostream>

using namespace std;

void ejercicio1(int);
void ejercicio2(int);
void ejercicio3(int);
void ejercicio4(int);
void ejercicio5(int);
void ejercicio6v1(int);
void ejercicio6v2(int);
void ejercicio7(int);
void ejercicio8(int);
void ejercicio9(int);
void ejercicio10(int, int);
void ejercicio11(int, int);
void ejercicio12(int);
void ejercicio13(int);

int main(int argc, char const *argv[])
{
    int control, n, m;

    cout << "Ingrese el numero de ejercicio quiere probar: ";
    cin >> control;

    switch (control)
    {
    case 1:
        cout << "Ingrese un numero menor a 25: ";
        cin >> n;
        while (n>=25 || n<1){
            cout << "El numero ingresado es igual o mayor a 25, por favor ingrese uno menor: ";
            cin >> n;
        }
        ejercicio1(n);
        break;
    case 2:
        cout << "Ingrese un numero menor a 30: ";
        cin >> n;
        while (n>=30 || n<0){
            cout << "El numero ingresado es invalido, por favor ingrese uno menor a 30 y mayor que 0: ";
            cin >> n;
        }
        ejercicio2(n);
        break;
    case 3:
        cout << "Ingrese un numero menor a 20: ";
        cin >> n;
        ejercicio3(n);
        break;
    case 4:
        cout << "Ingrese un numero menor a 25: ";
        cin >> n;
        while (n>=25 || n<1){
            cout << "El numero ingresado es invalido, por favor ingrese uno menor a 25 y mayor que 0: ";
            cin >> n;
        }
        ejercicio4(n);
        break;
    case 5:
        cout << "Ingrese un numero menor a 30: ";
        cin >> n;
        while (n>=30 || n<1){
            cout << "El numero ingresado es invalido, por favor ingrese uno menor a 30 y mayor que 0: ";
            cin >> n;
        }
        ejercicio5(n);
        break;
    case 6:
        int cant;
        cout << "Ingrese un numero menor a 40: ";
        cin >> n;
        while (n>=40 || n<1){
            cout << "El numero ingresado es invalido, por favor ingrese uno menor a 40 y mayor que 0: ";
            cin >> n;
        }
        cout << "Desea recorrer el arreglo una(1) o dos veces(2): ";
        cin >> cant;
        switch (cant){
        case 1:
            ejercicio6v2(n);
            break;
        case 2:
            ejercicio6v1(n);
            break;
        }
        break;
    case 7:
        cout << "Ingrese un numero menor a 15: ";
        cin >> n;
        while (n>=15 || n<1){
            cout << "El numero ingresado es invalido, por favor ingrese uno menor a 15 y mayor que 0: ";
            cin >> n;
        }
        ejercicio7(n);
        break;
    case 8:
        cout << "Ingrese un numero menor a 25: ";
        cin >> n;
        while (n>=25 || n<1)
        {
            cout << "El numero ingresado es invalido, por favor ingrese uno menor a 25 y mayor que 0: ";
            cin >> n;
        }
        ejercicio8(n);
        break;
    case 9:
        cout << "Ingrese un numero menor a 40: ";
        cin >> n;
        while (n>=40 || n<1)
        {
            cout << "El numero ingresado es invalido, por favor ingrese uno menor a 40 y mayor que 0: ";
            cin >> n;
        }
        ejercicio9(n);
        break;
    case 10:
        cout << "Ingrese el valor M menor a 10: ";
        cin >> n;
        cout << "Ingrese el valor N menor a 15: ";
        cin >> m;
        ejercicio10(n, m);
        break;
    case 11:
        cout << "Ingrese el valor M menor a 25: ";
        cin >> n;
        cout << "Ingrese el valor N menor a 10: ";
        cin >> m;
        ejercicio11(n,m);
        break;
    case 12:
        cout << "Ingrese un valor menor a 40: ";
        cin >> n;
        ejercicio12(n);
        break;
    case 13:
        cout << "Ingrese un valor menor a 50: ";
        cin >> n;
        ejercicio13(n);
        break;
    }
    return 0;
}

//---------------------------------------------------------EJERCICIO 1--------------------------------------------------------

void ejercicio1(int n){
    int paresNaturales[n];
    for (int i = 1; i <= n; i++){
        paresNaturales[i-1] = i*2;
        cout << paresNaturales[i-1] << endl;
    }    
}

//---------------------------------------------------------EJERCICIO 2--------------------------------------------------------

void ejercicio2(int n){
    int array1[n];
    //Se procede al ingreso de valores por consola
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el elemento numero " << i+1 << ": ";
        cin >> array1[i];
    }
    //Si es menor a 10 se imprime negativos
    if (array1[n-1] < 10)
    {
        for (int i = 0; i < n; i++) if(array1[i] < 0) cout << array1[i] << " ";  
    }else{
        for (int i = 0; i < n; i++) if(array1[i] >= 0) cout << array1[i] << " ";
    }
}

//---------------------------------------------------------EJERCICIO 3-------------------------------------------------------

//--FUNCION AUXILIAR: Tomar en cuenta las limitacion para almacenar el valor de un entero al momento de calcular el factorial de un numero mayor a 12
int factorial(int n){
   int f = 1;
   for (int i = 1; i <= n; i++)
   {
        f = f * i;
   }   
   return f;
}

void ejercicio3(int n){
    int VEC[n],FACT[n];
    for (int i = 0; i < n; i++){
        cout << "Ingrese el valor numero " << i+1 << ": ";
        cin >> VEC[i];
        FACT[i] = factorial(VEC[i]);
    }
    for (int i = 0; i < n; i++) cout << VEC[i] << FACT[i] << endl;
}

//---------------------------------------------------------EJERCICIO 4-------------------------------------------------------

void ejercicio4(int n){
    int VEC[n];
    int total = 0;
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el valor numero " << i+1 << ": ";
        cin >> VEC[i];
        total += VEC[i];
    }
    
    if (total > 0) {
        for (int i = 0; i < n; i+=2) cout << VEC[i] << endl;
    } else if(total < 0){
        for (int i = 1; i < n; i+=2) cout << VEC[i] << endl;
    }
}

//---------------------------------------------------------EJERCICIO 5-------------------------------------------------------

void ejercicio5(int n){
    int UNO[n];
    int DOS[n];
    int TRES[n];

    //Rellenamos el conjunto 1
    for (int i = 0; i < n; i++)
    {
        cout << "CONJUNTO UNO: Ingrese el valor numero " << i+1 << ": ";
        cin >> UNO[i];
    }
    //Rellenamos el conjunto 2
    for (int i = 0; i < n; i++)
    {
        cout << "CONJUNTO DOS: Ingrese el valor numero " << i+1 << ": ";
        cin >> DOS[i];
    }
    //Rellenamos le conjunto 3
    for (int i = 0; i < n; i++)
    {
        if(i%2 == 0){
            TRES[i] = UNO[i];
        }else{
            TRES[i] = DOS[i];
        }
        cout << TRES[i];
    }
}

//---------------------------------------------------------EJERCICIO 6-------------------------------------------------------

//Recorre VALOR dos veces
void ejercicio6v1(int n){ //V1 sin errores
    int VALOR[n];
    int max = 0; //variable que almacena el valor maximo;
    int maxIndex;
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el valor numero " << i+1 << ": ";
        cin >> VALOR[i];
    }

    //Ahora recorremos VALOR por primero vez para ver cual es el valor maximo
    for (int i = 0; i < n; i++)
    {
        if(VALOR[i] > max){
            max = VALOR[i];
            maxIndex = i;   
        }
    }
    cout << "El valor maximo es " << max << " y se encuentra en la posicion " << maxIndex;
    //Ahora recorremos recorremos VALOR por segundo vez para ver si el valor maximo no es unico
    for (int i = maxIndex+1; i < n; i++)
    {
        if(VALOR[i] == max)
        {
            cout << "\nOtro valor igual se encuentra en la posicion: " << i;
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
        cout << "Ingrese el valor numero " << i+1 << ": ";
        cin >> VALOR[i];
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
    cout << "El valor maximo es " << max << " y se encuentra en las siguientes posiciones: "; 
    for (int i = 0; i < counter; i++)
    {
        cout << "  " << maxIndex[i];
    }
    
}

//---------------------------------------------------------EJERCICIO 7-------------------------------------------------------

void ejercicio7(int n){
    int DATO[n];
    int MEJORDATO[2];
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el valor numero " << i+1 << ": ";
        cin >> DATO[i];
    }

    //La forma que vamos a seguir es ordenar el conjunto DATO para luego asignar a MEJORDATO los ultimos dos valores
    int temp; //esta variable nos permitira almacenar el valor que vamos a intercambiar en el array
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-1; j++){
            if(DATO[j]>DATO[j+1]){
                temp=DATO[j];
                DATO[j]=DATO[j+1];
                DATO[j+1]=temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << DATO[i] << endl;
    }
    

    MEJORDATO[0] = DATO[n-1];
    MEJORDATO[1] = DATO[n-2];
    cout << "MEJORDATO: " << endl;
    for(int i = 0; i < 2; i++) cout << MEJORDATO[i] << endl;
}

//---------------------------------------------------------EJERCICIO 8-------------------------------------------------------

void ejercicio8(int n){
    int GG[n];
    int invGG[n];//aqui guardaremos el arreglo invertido
    int control;

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el valor numero " << i+1 << ": ";
        cin >> GG[i];
    }

    cout << "De que forma quiere mostrar el resultado (1 - Uno por linea, 2 - Diez por linea , 3 - Cinco por linea): ";
    cin >> control;

    for (int i = 0; i < n; i++)
    {
        invGG[i] = GG[(n-1)-i];
    }

    switch (control)
    {
        case 1:
            for (int i = 0; i < n; i++)
            {
                cout << invGG[i] << endl;   
            }
            break;
        case 2:
            for (int i = 0; i < n; i++)
            {
                if((i)%10 == 0) cout << endl;
                cout << invGG[i] << "  ";   
            }
            break;
        case 3:
            for (int i = 0; i < n; i++)
            {
                if((i)%5 == 0) cout << endl;
                cout << invGG[i] << "  ";   
            }
            break;
    }
}


//---------------------------------------------------------EJERCICIO 9-------------------------------------------------------

void ejercicio9(int n){
    int A[n], B[n], C[n];
    //Rellenamos los conjuntos A y B
    for (int i = 0; i < n; i++)
    {
        cout << "CONJUNTO A: Ingrese el elemento numero " << i+1 << ": ";
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "CONJUNTO B: Ingrese el elemento numero " << i+1 << ": ";
        cin >> B[i];
    }
    //A continuacion calculamos los elementos del conjunto C y se los imprime
    for (int i = 0; i < n; i++)
    {
        C[i] = A[i] + B[(n-1)-i];
        cout << C[i] << endl;
    }
}

//---------------------------------------------------------EJERCICIO 10-------------------------------------------------------

void ejercicio10(int M, int N){
    int largoC = M + N;
    int counter1 = 0;
    int counter2 = 0;
    int A[M], B[N], C[largoC]; //aun no conocemos la cantidad de elementos que tendra el conjunto D
    //Ingresar los valores de los conjuntos
    for (int i = 0; i < M; i++)
    {
        cout << "CONJUNTO A: Ingrese el elemento " << i+1 << ": ";
        cin >> A[i];
        if(A[i] != 0) counter1++;
    }
    for (int i = 0; i < N; i++){
        cout << "CONJUNTO B: Ingrese el elemento " << i+1 << ": ";
        cin >> B[i];
        if(B[i] != 0) counter1++;
    }

    //LLenamos el conjunto C.
    for (int i = 0; i < largoC; i++)
    {
        if (i < (largoC - N)) C[i] = A[i];
        if (i >= (largoC -N)) C[i] = B[i - M];
        cout << C[i] << endl;
    }
    
    //LLenamos el conjunto D.
    int D[counter1];
    counter1 = 0;
    for (int i = 0; i < largoC; i++)
    {
        if(C[i] != 0){
            D[counter1] = C[i];
            cout << D[counter1] << endl;
            counter1++;
        }
    }
}

//---------------------------------------------------------EJERCICIO 11-------------------------------------------------------

void ejercicio11(int M, int N){
    int largoTOTAL = M+N;
    int A[M], B[N], TOTAL[largoTOTAL];
    int indexA = 0;
    int indexB = 0;
    for (int i = 0; i < M; i++)
    {
        cout << "CONJUNTO A: Ingrese el elemento " << i+1 << ": ";
        cin >> A[i];
    }
    for (int i = 0; i < N; i++){
        cout << "CONJUNTO B: Ingrese el elemento " << i+1 << ": ";
        cin >> B[i];
    }
    for (int i = 0; i < largoTOTAL; i++)
    {
        if(A[indexA] < B[indexB]){
            TOTAL[i] = A[indexA];
            indexA++;
        }else if(A[indexA] > B[indexB]){
            TOTAL[i] = B[indexB];
            indexB++;
        }else{
            TOTAL[i] = A[indexA];
            indexA++;
        }
    }
    //imprimir
    for (int i = 0; i < largoTOTAL; i++)
    {
        cout << TOTAL[i] << endl;
    }
}

//---------------------------------------------------------EJERCICIO 12-------------------------------------------------------
un valor pesquisa X. Desarrollar el programa que determine e imprima:
a) Con cual elemento (posicion) del conjunto coincide, o
b) Entre cuales dos elementos (posiciones) se encuentro, o
c) Si es menor que el primero o mayor que el ultimo*/

void ejercicio12(int n){
    float x;
    float REFER[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el valor numero " << i+1 << ": ";
        cin >> REFER[i];
    }
    
    //INGRESA EL VALOR X
    cout << "Ingresa el valor que desea ubicar: ";
    cin >> x;

    //Verificamos si coincide con algun valor:
    if(x < REFER[0]) cout << "El valor x es menor que el primer elemento" << endl;
    if(x > REFER[n-1]) cout << "El valor x es mayor que el ultimo elemento" << endl;
    for (int i = 0; i < n; i++)
    {
        if(x == REFER[i]) cout << "El numero x coincide con el elemento numero " << i << endl;
        if(x > REFER[i] && x < REFER[i+1]) cout << "El numero x es mayor que el elemento " << i << " y el elemento " << (i+1) << endl;
    }         
}

//---------------------------------------------------------EJERCICIO 13-------------------------------------------------------

void ejercicio13(int n){
    int SINOR[n];
    int aux1[n], aux2[n];
    int max = 0, control;
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el elemento numero " << i+1 << ": ";
        cin >> SINOR[i];
    }

    cout << "Desea invertir(1) o ordenar(2) este elemento: ";
    cin >> control;

    switch (control)
    {
    case 1:    //A INVERTIR
        for (int i = 0; i < n; i++)
        {
            aux1[i] = SINOR[(n-i)-1];
        }
        cout << "Conjunto invertido: " << endl; 
        for (int i = 0; i < n; i++) {
            SINOR[i] = aux1[i];
            cout << SINOR[i] << endl;
        }
        break;
    case 2:
        int temp; //esta variable nos permitira almacenar el valor que vamos a intercambiar en el array
        for (int i = 0; i < n-1; i++)
        {
            for (int i = 0; i < n-1; i++){
                if(SINOR[i]>SINOR[i+1]){
                    temp=SINOR[i];
                    SINOR[i]=SINOR[i+1];
                    SINOR[i+1]=temp;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << SINOR[i] << endl;
        }
        break;
    }
}