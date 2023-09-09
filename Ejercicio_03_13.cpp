// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 07/09/2023

// Fecha modificación: 07/09/2023

// Número de ejericio: 13

/* Problema planteado: La farmacia FARMACARP tiene N sucursales, leer sus ventas por mes de un
año entero de cada sucursal y calcule: */

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int n;
    cout<<"Ingrese el numero de sucursales: ";
    cin>>n;
    int ventas[n][13];
    int venmes[12];
    int total=0;
    int totalparcial=0;
    int mayor,menor;
    cout<<"SUCU    1      2       3       4       5       6       7       8       9       10     11      12"<<endl;
    for(int i=0;i<n;i++){       // para llenar por meses
        totalparcial=0;
        for(int j=1;j<13;j++){
            ventas[i][j]=10+rand()%(101-10);
            total=total+ventas[i][j];
            totalparcial=totalparcial+ventas[i][j];
        }
        venmes[i]=totalparcial;     // calcular ventas por sucursal
    }
    for(int x=0;x<n;x++){
        ventas[x][0]=x+1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<13;j++){
            cout<<ventas[i][j]<<"      ";
        }
        cout<<endl;
    }
    cout<<"El total de ventas es: "<<total<<endl;
    cout<<"Las ventas por cada sucursal es:"<<endl;
    for(int y=0;y<n;y++){       // para imprimir las ventas de cada sucursal
        cout<<y+1<<" "<<venmes[y]<<endl;
    }
    mayor=venmes[0];
    int mas;
    for(int a=0;a<n;a++){       // para saber el mayor
        if(mayor<=venmes[a]){
            mayor=venmes[a];
            mas=a;
        }
    }
    menor=venmes[0];
    int menos;
    for(int b=0;b<n;b++){       // para saber el menor
        if(menor>=venmes[b]){
            menor=venmes[b];
            menos=b;
        }
    }
    cout<<"La sucursal que mas vendio es la sucursal "<<mas<<" con un total de "<<mayor<<endl;
    cout<<"La sucursal que menos vendio es la sucursal "<<menos<<" con un total de "<<menor<<endl;

    return 0;
}
