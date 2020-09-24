#include <iostream>
#include <cstdlib>
#include "fund.h"
#include <stdio.h>
#include <windows.h>
#include <conio.h>

using namespace std;


int main(){
int x=0,x2=0;
int opc, t=3, i, j;
int puntos=0;
char MU[25];
int MP=0;
char MU2[25];
int MP2=0;

        while(true){
                    system("cls");
                    for( i=0; i<23; i++){
                    gotoxy(i,0); printf("*");
                    gotoxy(i,2); printf("*");
                    gotoxy(3,1); printf("G E N E R A L A ");

                    if(i<= 2){
                       gotoxy(0,i); printf("*");
                       gotoxy(23,i); printf("*");
                       }}


                    cout<<endl;
                    cout<<endl<<endl;
                    cout<<"[OPCION 1] : UN JUGADOR"<<endl;
                    cout<<"............................."<<endl<<endl;
                    cout<<"[OPCION 2] : DOS JUGADORES "<<endl;
                    cout<<"............................."<<endl<<endl;
                    cout<<"[OPCION 3] : MAYOR PUNTUACION"<<endl;
                    cout<<"............................."<<endl<<endl;
                    cout<<"[OPCION 0] : SALIR " <<endl;
                    cout<<"............................."<<endl<<endl;
                    cout<<"[ELEGIR UNA OPCION]"<<endl;
                    cin>>opc;
                    cout<<"............................."<<endl<<endl;


                    system("cls");


                    switch(opc){

                     case 1:
                            x++;
                              MP=un_jugador(MU,MP,x);
                        break;
                     case 2:
                             MP2=dos_jugadores(MU2,MP2,x2);
                        break;
                     case 3:

                             cout<<"NOMBRE MODO[1 JUGADOR] CON MAYOR PUNTAJE :" << MU << endl<< "PUNTAJE :"<< MP <<" " << "PUNTOS ! "<<endl;
                             cout<<endl<<endl;
                             cout<<"NOMBRE MODO[2 JUGADORES] CON MAYOR PUNTAJE :" << MU2 << endl << "PUNTAJE : " << MP2 << " " << "PUNTOS ! " <<endl;


                         break;

                     case 0:

                         for( i=0; i<29; i++){
                    gotoxy(i,0); printf("*");
                    gotoxy(i,2); printf("*");
                    gotoxy(3,1); printf("USTED SALIO DEL JUEGO");
                    cout<<endl;

                    if(i<= 3){
                       gotoxy(0,i); printf("*");
                       gotoxy(28,i); printf("*");}}

                     return 0;
                     default:

                         for( i=0; i<23; i++){
                    gotoxy(i,0); printf("*");
                    gotoxy(i,2); printf("*");

                    gotoxy(3,1); printf("OPCION INCORRECTA");
                     cout<<endl<<endl;

                    if(i<= 2){
                       gotoxy(0,i); printf("*");
                       gotoxy(23,i); printf("*");}}
                       break;
                        }


                        system("pause");
                        }




                        return 0;
}


