// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 06/09/2023

// Fecha modificación: 06/09/2023

// Número de ejericio: 1

// Problema planteado: Generar la matriz espiral para un orden n

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int n;
    cout<<"Ingrese el tamaño de la matriz: ";
    cin>>n;
    int matriz[n][n];
    int re=0;
    int cont=0;
    for(re;re<(n-re);re++){
        cont=cont+1;
        matriz[n][re]=cont;
        cout<<matriz[n][re];
    }
    for(re;re<(n-re);re++)
    return 0;
}
