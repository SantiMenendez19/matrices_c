#ifndef FUNCMATRICES_H_INCLUDED
#define FUNCMATRICES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#define PAUSA system("pause")
#define LIMPIAR system("cls")

void cargarMatriz(int[][100],int,int);
void menu (int[][100],int[][100],int,int,int,int);
void mostrarMatriz(int[][100],int,int);
void productomatrices(int[][100],int[][100],int,int,int,int);
void trazamatriz (int[][100],int,int);
void matrizdiagonal(int[][100],int,int);
void matriztranspuesta (int[][100],int,int);
void matrizidentidad (int[][100],int,int);
void cambiarmatriztranspuesta(int[][100],int,int);
void lotepruebas(int[][100],int,int);
void transponerdiagsec(int[][100],int,int);
void transponercentro(int[][100],int,int);
int cantfilas ();
int cantcol ();

#endif // FUNCMATRICES_H_INCLUDED
