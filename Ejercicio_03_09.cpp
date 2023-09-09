// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 07/09/2023

// Fecha modificación: 07/09/2023

// Número de ejericio: 9

/* Problema planteado: Traspones una matriz de N x M */

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int n,m;
    cout<<"Ingrese la dimension n de la matriz: ";
    cin>>n;
    cout<<"Ingrese la dimension m de la matriz: ";
    cin>>m;
    int matriz[n][m];       // inicia una matriz con las dimensiones n m
    int transpuesta[m][n];      // crea la matriz con las dimensiones invertidas
    for(int i=0;i<n;i++){       // impresion de la matriz principal
        for(int j=0;j<m;j++){
            matriz[i][j]=rand()%9;
            transpuesta[j][i]=matriz[i][j];
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<m;i++){       // impresion de la matriz transpuesta
        for(int j=0;j<n;j++){
            cout<<transpuesta[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
