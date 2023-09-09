// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 07/09/2023

// Fecha modificación: 07/09/2023

// Número de ejericio: 8

/* Problema planteado: Multiplique dos matrices una de N x M y la otra de M x N */

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int n;
    int m;
    cout<<"Ingrese la dimension n para las matrices: ";
    cin>>n;
    cout<<"Ingrese la dimension m para las matrices: ";
    cin>>m;
    int matriz1[n][m];
    int matriz2[m][n];
    int resultado[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            matriz1[i][j]=rand()%9;
            cout<<matriz1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int a=0;a<m;a++){
        for(int b=0;b<n;b++){
            matriz2[a][b]=rand()%9;
            cout<<matriz1[a][b]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int aux;
    for(int x=0;x<n;x++){
        for(int y=0;y<n;y++){
            aux=matriz1[x][y]*matriz2[y][x];
            for(int z=0;z<n;z++){
                resultado[x][y]=0+aux;
                cout<<resultado[x][y]<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
