// Materia: Programaci�n I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creaci�n: 06/09/2023

// Fecha modificaci�n: 06/09/2023

// N�mero de ejericio: 1

// Problema planteado: Elabore un programa que lea una matriz de orden n x n y la cambie la fila 1 por
// la fina n.

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int n;
    cout<<"Ingrese el tama�o de la matriz: ";
    cin>>n;
    int matriz[n][n];       // definir el tama�o de la matriz
    int aux[n];
    for(int a=0;a<n;a++){       // rellenar la matriz de numeros random
        for(int b=0;b<n;b++){
            matriz[a][b]=rand()%9;
            cout<<matriz[a][b]<<" ";
        }
    cout<<endl;
    }
    cout<<endl;
    for(int c=0;c<n;c++){       // ciclo para reordenar la ultima y la primera fila
        aux[c]=matriz[0][c];        // vector auxiliar para almacenar
        matriz[0][c]=matriz[n-1][c];
        matriz[n-1][c]=aux[c];
    }
    for(int x=0;x<(n);x++){     // impresion de la nueva matriz reordenada
        for(int y=0;y<n;y++){
            cout<<matriz[x][y]<<" ";
        }
    cout<<endl;
    }
    return 0;
}
