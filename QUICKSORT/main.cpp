#include <iostream>
//#include <demoaed>
#include "quicksort.h"
#include "ingresar.h"
#include<fstream>


using namespace std;




int main()
{
    ofstream quicksort;
    quicksort.open("C:/Users/Usuario/Documents/QUICKSORT/Quicksort.txt", ios::app );
    cout<<"Algoritmo de Ordenamiento QUICKSORT";
    quicksort<<"Algoritmo de Ordenamiento QUICKSORT";
    cout<<endl;
    quicksort<<"\n";
    int A[10]= {88, -6, 69, -33, 98, 7, 23, -5, 0, 100};
    imprimirArreglo(A,10);
    cout<<endl;
    ordenar(A,0,9);
    imprimirArreglo(A,10);
    cout<<endl;
    return 0;
}
