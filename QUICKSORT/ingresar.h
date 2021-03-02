#include  <iostream>
#include <fstream>
using namespace std;


        void imprimirArreglo(int arr[], int n)
        {
            ofstream quicksort;
            quicksort.open("C:/Users/Usuario/Documents/QUICKSORT/Quicksort.txt", ios::app );

            for (int i=0; i<10; i++)
            {
                   cout<<"|"<<arr[i]<<"|";
                   quicksort<<"|"<<arr[i]<<"|";

            }
            quicksort<<endl;
            quicksort.close();

        }

