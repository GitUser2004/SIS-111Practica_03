// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 06/09/2023

// Fecha modificación: 06/09/2023

// Número de ejericio: 3

/* Problema planteado: Generar una matriz de N x N con números al azar entre A y B, y determinar:
La suma de la última columna
• El producto total de la última fila
• Obtener el mayor valor y su posición
• Obtener la desviación estándar de todos los elementos de la matriz */

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(){

    int n;
    cout<<"Ingresar el tamaño de la matriz: ";
    cin>>n;
    int matriz[n][n];
    int A,B;
    cout<<"Ingrese los limites para generar los numeros al azar: "<<endl;
    cout<<"A: ";
    cin>>A;
    cout<<"B: ";
    cin>>B;
    float prom=0;
    int suma=0;
    int prod=1;
    int mayor;
    int posx,posy;
    float desv=0;
    for(int a=0;a<n;a++){       // generacion de la matriz
        for(int b=0;b<n;b++){
            matriz[a][b]=A+rand()%((B+1)-A);
            prom=prom+matriz[a][b];
            cout<<matriz[a][b]<<" ";
        }
        cout<<endl;
    }
    mayor=matriz[0][0];     // declaracion de un valor inicial para el mayor
    for(int i=0;i<n;i++){       // suma de la ulima columna
        suma=suma+matriz[i][n-1];
    }
    for(int j=0;j<n;j++){       // producto de la ultima fila
        prod=prod*matriz[n-1][j];
    }
    for(int x=0;x<n;x++){       // ciclo para encontrar el mayor valor
        for(int y=0;y<n;y++){
            if(mayor<=matriz[x][y]){
                mayor=matriz[x][y];     // si hay repitentes se considera el ultimo valor
                posx=x;     // obtencion de la posicion
                posy=y;
            }
        }
    }
    prom=prom/(n*n);
    for(int d=0;d<n;d++){       // sumatoria para la desivacion
        for(int e=0;e<n;e++){
            desv=desv+pow((matriz[d][e]-prom),2);
        }
    }
    cout<<"La suma de la ultima columna es de: "<<suma<<endl;
    cout<<"El producto de la ultima fila es: "<<prod<<endl;
    cout<<"El mayor valor es: "<<mayor<<" y se encuentra en la fila "<<posx<<" y la columna "<<posy<<endl;
    cout<<"La desviacion estandar de la matriz es de: "<<sqrt(desv/(n*n));

    return 0;
}
