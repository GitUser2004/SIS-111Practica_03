// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 07/09/2023

// Fecha modificación: 07/09/2023

// Número de ejericio: 12

/* Problema planteado: Queremos realizar una encuesta a 10 personas...  */

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int n;
    cout<<"Ingrese el tamaño de la matriz: ";
    cin>>n;
    int matriz[n][n];   // generacion de la matriz cuadrada
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            matriz[i][j]=rand()%9;
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    int a;
    cout<<"Ingrese una fila a borrar (de 0 a n): ";
    cin>>a;     // para quitar una fila
    for(int i=a;i<n;i++){
        for(int j=0;j<n;j++){
            matriz[i][j]=matriz[i+1][j];
        }
    }
    matriz[n-1][n];
    for(int i=0;i<(n-1);i++){
        for(int j=0;j<n;j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    int b;
    cout<<"Ingrese una columna a borrar (de 0 a n): ";
    cin>>b;     // para borrar una columna
    for(int i=0;i<n;i++){
        for(int j=b;j<n;j++){
            matriz[i][j]=matriz[i][j+1];
        }
    }
    matriz[n-1][n-1];
    for(int i=0;i<(n-1);i++){
        for(int j=0;j<(n-1);j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
