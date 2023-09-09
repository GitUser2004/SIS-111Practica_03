// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 07/09/2023

// Fecha modificación: 07/09/2023

// Número de ejericio: 5

/* Problema planteado: Generar la matriz para un orden NxN */

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int n;
    cout<<"Ingrese el tamaño de la matriz: ";
    cin>>n;
    int matriz[n][n];       // definicion de la matriz
    int re=0;
    for(int i=0;i<n;i++){
        re=re+1;        // perimer termino de cada fila
        for(int j=0;j<n;j++){
            matriz[i][j]=re+j;      // llenado de cada fila
            cout<<matriz[i][j]<<" ";
        }
        re=re+1;        // lleva el primer termino a un impar
        cout<<endl;
    }

    return 0;
}
