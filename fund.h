#ifndef FUND_H_INCLUDED
#define FUND_H_INCLUDED

void cargar_vector( int [] ,int );

void gotoxy(int ,int );

void generar_dados(int []);

int un_jugador(char MU[25],int MP,int x);

void mostrar_dados(int []);

int tirar_dados(char [],int j);

int tirar_dados();

void reemplazar_dado(int [],int );

int combinaciones(int []);



/**
DOS JUGADORES
**/



int dos_jugadores(char MP2[25], int MU2, int x2);

#endif // FUND_H_INCLUDED
