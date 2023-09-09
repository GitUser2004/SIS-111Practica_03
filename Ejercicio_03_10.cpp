// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 07/09/2023

// Fecha modificación: 07/09/2023

// Número de ejericio: 10

/* Problema planteado: Queremos realizar una encuesta a 10 personas...  */

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int encu[10][3];
    int hombre=0;
    int mujer=0;
    int suh=0;
    int sum=0;
    int toth=0;
    int totm=0;
    cout<<"GENERO       SITUACION LABORAL       SUELDO"<<endl;
    for(int i=0;i<10;i++){      // generacion de las situaciones con opciones aleatorias
        encu[i][0]=1+rand()%(3-1);
        encu[i][1]=1+rand()%(3-1);
        if(encu[i][1]==1){
            encu[i][2]=600+rand()%(2001-600);       // considera desempleo
        }
        else{
            encu[i][2]=0;
        }
    }
    cout<<"Si esta desempleado(a) (2) su sueldo es 0"<<endl;
    for(int i=0;i<10;i++){
        for(int j=0;j<3;j++){
            cout<<encu[i][j]<<"                  ";
        }
        cout<<endl;
    }
    for(int i=0;i<10;i++){      // ciclo para conoces todas las posibles opciones que se pide
        if(encu[i][0]==1){
            hombre=hombre+1;        // conteo de hombres y mujeres
            if(encu[i][1]==1){      // situacion laboral
                suh=suh+1;
                toth=toth+encu[i][2];       //suma de salario
            }
        }
        else{
            if(encu[i][0]==2){
                mujer=mujer+1;
                if(encu[i][1]==1){
                    sum=sum+1;
                    totm=totm+encu[i][2];
                }
            }
        }
    }
    cout<<"El porcentaje de hombres es de: "<<hombre*10<<"%"<<endl;
    cout<<"El porcentaje de mujeres es de: "<<mujer*10<<"%"<<endl;
    cout<<"El porcentaje de hombres con empleo es: "<<suh*10<<"%"<<endl;
    cout<<"El porcentaje de mujeres con empleo es: "<<sum*10<<"%"<<endl;
    cout<<"El promedio del sueldo de hombres con empleo es: "<<toth/suh<<endl;
    cout<<"El promedio del sueldo de mujeres con empleo es: "<<totm/sum<<endl;

    return 0;
}
