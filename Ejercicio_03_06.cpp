// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 07/09/2023

// Fecha modificación: 07/09/2023

// Número de ejericio: 6

/* Problema planteado: Generar una matriz NxN, que se llene con la serie de Fibonacci. */

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int n;
    cout<<"Ingrese el tamaño de la matriz: ";
    cin>>n;
    int matriz[n][n];
    int a=0;
    int b=1;
    int c;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c=a+b;
            matriz[i][j]=b;
            a=b;
            b=c;
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
