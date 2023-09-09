// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 07/09/2023

// Fecha modificación: 07/09/2023

// Número de ejericio: 11

/* Problema planteado: . Realizar el típico juego del 3 en raya,  */

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    char juego[3][3]={{'-','-','-'},{'-','-','-'},{'-','-','-'}};       // generacion de 3 en raya
    int conteo=0;
    int x,y;
    int rivalx,rivaly;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<juego[i][j]<<" ";
        }
        cout<<endl;
    }
    while(conteo<9){        // condicion para terminar el juego
        int contfilx=0;     // contadores para un 3 en raya
        int contcolx=0;
        int contfilo=0;
        int contcolo=0;
        cout<<"Cual fila elige?: ";
        cin>>x;
        cout<<"Cual columna elige?: ";
        cin>>y;
        if(juego[x][y]=='-'){       // turno del jugador
            juego[x][y]='x';
        }
        else{
            cout<<"No es posible escribir en este lugar"<<endl;
            conteo=conteo-1;
        }
        rivalx=rand()%2;        // turno de la pc
        rivaly=rand()%2;
        while(juego[rivalx][rivaly]!='o'){      // condicion para no rellenar 2 veces
            if(juego[rivalx][rivaly]=='-'){
                juego[rivalx][rivaly]='o';
            }
            else{
                rivalx=rand()%2;
                rivaly=rand()%2;
            }
        }
        conteo=conteo+1;
        for(int i=0;i<3;i++){       // ciclo para ver si hay un 3 en raya
            for(int j=0;j<3;j++){
                if(juego[i][j]=='x'){
                    contfilx=contfilx+1;
                }
                else{
                    if(juego[j][i]=='x'){
                        contcolx=contcolx+1;
                    }
                    else{
                        if(juego[i][j]=='o'){
                            contfilo=contfilo+1;
                        }
                        else{
                            if(juego[j][i]=='o'){
                                contcolo=contcolo+1;
                            }
                        }
                    }
                }
            }
            if(contfilx==3||contcolx==3){
                conteo=9;
                cout<<"GANASTE"<<endl;
            }
            else{
                if(contfilo==3||contcolo==3){
                    conteo=9;
                    cout<<"PERDISTE"<<endl;
                }
                else{
                    contfilo=0;
                    contcolo=0;
                    contfilx=0;
                    contcolx=0;
                }
            }
        }
        if(contfilx==3||contcolx==3){
            conteo=9;
            cout<<"GANASTE"<<endl;
        }
        else{
            if(contfilo==3||contcolo==3){
                conteo=9;
                cout<<"PERDISTE"<<endl;
            }
        }
        if(juego[0][0]=='x'&&juego[1][1]=='x'&&juego[2][2]=='x'){       // consideran diagonales
            conteo=9;
            cout<<"GANASTE"<<endl;
        }
        else{
            if(juego[0][2]=='x'&&juego[1][1]=='x'&&juego[2][0]=='x'){
                conteo=9;
                cout<<"GANASTE"<<endl;
            }
            else{
                if(juego[0][0]=='o'&&juego[1][1]=='o'&&juego[2][2]=='o'){
                    conteo=9;
                    cout<<"PERDISTE"<<endl;
                }
                else{
                    if(juego[0][2]=='o'&&juego[1][1]=='o'&&juego[2][0]=='o'){
                        conteo=9;
                        cout<<"PERDISTE"<<endl;
                    }
                }
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<juego[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
