// Materia: Programaci�n I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creaci�n: 07/09/2023

// Fecha modificaci�n: 07/09/2023

// N�mero de ejericio: 7

/* Problema planteado: Efectuar la suma de una matriz tridimensional de orden n x n x n */

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int n;
    int suma=0;
    cout<<"Ingrese el tama�o de la matriz: ";
    cin>>n;
    int matriz[n][n][n];        // generar la matriz tridimensional
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                matriz[i][j][k]=rand()%9;       // llenar la matriz de randomicos
                suma=suma+matriz[i][j][k];      // sumar cada termino nuevo
                cout<<matriz[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    cout<<"La suma de la matriz es de: "<<suma;
    return 0;
}
