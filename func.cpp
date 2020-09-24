#include<iostream>
#include<cstdlib>
#include "fund.h"
#include <stdio.h>
#include <windows.h>
#include <cmath>
#include<stdlib.h>
#include<time.h>


using namespace std;

int un_jugador(char MU[25],int MP,int x){


    int c;
    char usuario[25];
    int puntuacion=0, puntuaciontotal=0;

    for( int i=0; i<23; i++){
                    gotoxy(i,0); printf("*");
                    gotoxy(i,2); printf("*");
                    gotoxy(3,1); printf("MODO UN JUGADOR ");
                    if(i<= 2){
                       gotoxy(0,i); printf("*");
                       gotoxy(23,i); printf("*");
                       }}
                     cout<<endl<<endl;

            cout<<endl<<endl;
            cout<<" INGRESE SU NOMBRE : "<<endl;
            cin>>usuario;
            cout<<endl;

            cout<<" RONDAS A JUGAR :"<<endl;
            cin>>c;
            cout<<endl;

      for(int j=0; j<c; j++){
      system("cls");
      cout << " RONDA "  << j+1 << endl;


    cout<<endl;
    puntuacion=tirar_dados(usuario,j);
    cout<<endl;
    puntuaciontotal+=puntuacion;


    }


cout << usuario << endl;

cout << "PUNTUACION TOTAL: " << ""<< puntuaciontotal <<" PUNTOS" << endl;

if(x==1){
    strcpy(MU, usuario);
    MP=puntuaciontotal;
}
else{
    if(puntuaciontotal>MP){
        strcpy(MU, usuario);
        MP=puntuaciontotal;
    }
}

return MP;
}


int tirar_dados(char usuario[],int j){

int tiros=1;
int dados[5];
int cantidad_dados;
int posicion;
char eleccion1;
char eleccion2;
char eleccion3;
int puntuacion=0;


cout << "TIRAR DADOS? (S/N)" << endl;
cin >> eleccion1;

system("cls");
if(eleccion1=='S'){

cout << " NUMERO DE TIROS : " << tiros << endl;
cout << endl;

generar_dados(dados);
mostrar_dados(dados);

cout << endl;
system("pause");

cout << endl;
}

cout << "VOLVER A TIRAR DADOS? (S/N)" << endl;
cin >> eleccion2;

if(eleccion2=='S'){

     cout << " CUANTOS DESEA REEMPLAZAR? " << endl;
     cin >> cantidad_dados;
     cout << endl;

     for (int x=0;x<cantidad_dados;x++){

     cout << "INGRESE LA POSICION DEL DADO QUE DESEA REEMPLAZAR(SOLO 1 A LA VEZ)" << endl;
     cin >> posicion;
     reemplazar_dado(dados,posicion);

     }
    system("cls");

     tiros++;
     cout << " NUMERO DE TIROS : " << tiros << endl;
     cout <<endl;
     mostrar_dados(dados);
     cout <<endl;

}

if(eleccion2=='N'){

puntuacion=combinaciones(dados);

if(puntuacion==50){

    cout << usuario <<" "<< "GANO POR GENERALA SERVIDA Y ADEMAS OBTUVO" <<" "<< puntuacion << " "<< "PUNTOS!" << endl;
    system("pause");
    system("cls");
    exit(0);
}
else{

cout << endl;
cout << " EN ESTA RONDA OBTUVO " << puntuacion << endl << " PUNTOS ! " << endl;

 }
}

 if(eleccion2=='S'){
cout << "VOLVER A TIRAR DADOS? (S/N)" << endl;
cin >> eleccion3;
 }

if(eleccion3=='S'){

 cout << " CUANTOS DESEA REEMPLAZAR? " << endl;
     cin >> cantidad_dados;
     cout << endl;

     for (int x=0;x<cantidad_dados;x++){

     cout << "INGRESE LA POSICION DEL DADO QUE DESEA REEMPLAZAR(SOLO 1 A LA VEZ)" << endl;
     cin >> posicion;
     reemplazar_dado(dados,posicion);


  }
  system("cls");
  tiros++;
     cout << " NUMERO DE TIROS : " << tiros << endl;

     cout<<endl;
   mostrar_dados(dados);
     cout<<endl;


    puntuacion=combinaciones(dados);

   cout << endl;
cout << " EN ESTA RONDA OBTUVO " << puntuacion << endl << " PUNTOS ! " << endl;

   }

if(eleccion3=='N'){

puntuacion=combinaciones(dados);

cout << endl;
cout << " EN ESTA RONDA OBTUVO  " << puntuacion << endl << " PUNTOS ! " << endl;

 }

  system("pause");
return (puntuacion);

}


void generar_dados(int v[5]){

srand(time(NULL));

for(int i=0;i<5;i++){

    v[i]= 1+rand()%6;

  }
 }


void mostrar_dados(int v[]){

cout <<"  "   "  DADOS  " << endl;
cout << endl;

for(int i=0;i<5;i++){

cout <<"  " << v[i]<<"  ";
  }
}



void reemplazar_dado(int dados[],int pos){

    dados[pos-1]= 1+rand()%6;
}



int combinaciones(int v[5]){

cout << endl;
int puntos=0;

for(int i=0;i<5;i++){
    if(v[i]==1){
       puntos+=1;
    }
    if(v[i]==2){
        puntos+=2;
    }
    if(v[i]==3){
        puntos+=3;
    }
    if(v[i]==4){
        puntos+=4;
    }
    if(v[i]==5){
        puntos+=5;
    }
    if(v[i]==6){
        puntos+=6;
    }
 }


int escalera=0;
int ruptura=0;

for(int t=0;t<4;t++){

    if(v[t]<v[t+1]){
        escalera=1;
    }
    else{
        ruptura=1;
    }
}
  if(escalera==1 && ruptura==0){
    puntos=25;
  }


int iguales=0;

for(int j=0;j<5;j++){
 for (int x=1;x<5;x++){
    if(v[j]==v[x]){
    iguales++;
    }
  }

  EL FOR DA LAS VUELTA DEL VECTOR (SON 5 NUMEROS) Y CREO OTRO FOR PARA COMPARARLO CON EL ANTERIOR PARA VER SI SON iguales

}
 if (iguales==13||iguales==16){  VEO SI IGUALES ES IGUAL A 13 0 16.  POKER 4 DADOS IGUALES.
    puntos=40;
 }
 else{
 if(iguales==20){       SI SON TODOS IGUALES SON MAS PUNTOS.  TODOS IGUALES GENERALA
    puntos=50;
     }

 }


 int igual=0;

 for (int p=0;p<5;p++){
    for (int o=0;o<5;o++){
        if(v[p]== v[o]){
            igual++;
        }
    }
}

if (igual==13){                   FULL
    puntos=30;
}

return puntos;
}





/**

FUNCION DE 2 JUGADORES

**/






int dos_jugadores(char MU2[25], int MP2 , int x2){

int puntuaciontotal1=0;
int puntuacion1=0;
int puntuaciontotal2=0;
int puntuacion2=0;
int c;
char nombre1[25];
char nombre2[25];

    cout<<" INGRESE EL NOMBRE DEL JUGADOR 1: "<<endl;
    cin>>nombre1;
    cout << endl;
    cout<<" INGRESE EL NOMBRE DEL JUGADOR 2: "<<endl;
    cin>>nombre2;
    cout << endl;

    cout<<" RONDAS A JUGAR :"<<endl;
    cin>>c;
    cout<<endl;

    for(int j=0; j<c; j++){
    system("cls");
    cout << " RONDA "  << j+1 << endl;    AL SER EL VECTOR DE 0 A HASTA DONDE LLEGA LE SUMAMOS 1 PARA QUE MUESTRE LA RONDA CORRECTA



    cout << "TURNO DE : " << nombre1 << endl;
    cout<<endl;
    puntuacion1=tirar_dados(nombre1,j);
    cout<<endl;
    puntuaciontotal1+=puntuacion1;

    system("cls");

    cout << "TURNO DE : " << nombre2 << endl;

    cout<<endl;
    puntuacion2=tirar_dados(nombre2,j);
    cout<<endl;
    puntuaciontotal2+=puntuacion2;
    }

    system("cls");

cout << nombre1 << endl;
cout << "PUNTUACION TOTAL: " << ""<< puntuaciontotal1 <<" PUNTOS" << endl;

cout << endl;

cout << nombre2 << endl;
cout << "PUNTUACION TOTAL: " << ""<< puntuaciontotal2 <<" PUNTOS" << endl;

system("PAUSE");
system("cls");


if(puntuaciontotal1>puntuaciontotal2){

    if(x2==1){
    strcpy(MU2, nombre1);
    MP2=puntuaciontotal1;
}
else{
    if(puntuaciontotal1>MP2){
        strcpy(MU2, nombre1);
        MP2=puntuaciontotal1;
    }
}

cout << nombre1 << "" << " ES EL GANADOR CON : " << " " <<puntuaciontotal1 << " " << "PUNTOS!" << endl;

return MP2;

}
else{
        if(x2==1){
    strcpy(MU2, nombre2);
    MP2=puntuaciontotal2;
}
else{
    if(puntuaciontotal1>MP2){
        strcpy(MU2, nombre2);
        MP2=puntuaciontotal2;
    }
}

cout << nombre2 << "" << " ES EL GANADOR CON : " << " " <<puntuaciontotal1 << " " << "PUNTOS!" << endl;

return MP2;  RETORNA MAXIMA PUNTUACION
    }

}




 void gotoxy(int x,int y){
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
 }
