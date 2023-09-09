// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 07/09/2023

// Fecha modificación: 07/09/2023

// Número de ejericio: 4

/* Problema planteado: En la segunda temporada de The Walking Dead... */

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int a,b,rad;
    int cont=0;
    int posx,posy;
    cout<<"Ingrese el numero de filas de la matriz: ";
    cin>>a;
    cout<<"Ingrese el numero de columnas de la matriz: ";
    cin>>b;
    char esc[a][b];     // definicion de la matriz
    for(int i=0;i<a;i++){       // llenado de la matriz con numeros entre x y o
        for(int j=0;j<b;j++){
            rad=1+rand()%(3-1);
            if(rad==2){     // depende del numero coloca x o
                esc[i][j]='x';
            }
            else{
                if(rad==1){
                    esc[i][j]='o';
                }
            }
            cout<<esc[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int x=0;x<a;x++){       // barrido de la matriz para descubrir la posicion y contar los zombies
        for(int y=0;y<b;y++){
            if(esc[x][y]=='x'){
                posx=x;
                posy=y;
                cout<<"Hay zombies en: "<<x<<" "<<y<<endl;
                cont=cont+1;
            }
        }
    }
    int def1=0;
    int def2=0;
    for(int e=0;e<a;e++){       // barrido de filas y columnas
        int libfil=0;
        int libcol=0;
        for(int r=0;r<b;r++){
            if(esc[e][r]=='x'){
                libfil=libfil+1;
            }
            if(esc[r][e]=='x'){
                libcol=libcol+1;
            }
        }
        if(libfil==0){      // contabilizacion de filas y columnas libres
            def1=def1+1;
        }
        if(libcol==0){
            def2=def2+1;
        }
    }
    int primcol=0;
    for(int h=0;h<a;h++){       // barrido de la primer columna
        if(esc[h][0]=='x'){
            primcol=primcol+1;
        }
    }
    if(primcol>=2){
        cout<<"No es posible entrar al complejo"<<endl;
    }
    else{
        cout<<"Es posible entrar al complejo"<<endl;
    }
    cout<<"El numero de filas libres es de: "<<def1<<endl;
    cout<<"El numero de columnas libres es de: "<<def2<<endl;
    cout<<"EL numero de zombies es: "<<cont<<endl;
    cout<<"El numero de espacios libres es de: "<<(a*b)-cont;

    return 0;
}
