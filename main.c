#include "funcmatrices.h"

// HECHO POR SANTIAGO MENENDEZ

int main()
{
    int Mat[100][100]= {};
    int fila1,fila2,col1,col2,eleccion;
    int Mat2[100][100]= {};
    printf("\n\n\n\n         Programa para calcular matrices:\n          Hecho por Santiago Menendez\n\n\n\n");
    PAUSA;
    LIMPIAR;
    printf("No hay matrices cargadas\n");
    PAUSA;
    LIMPIAR;
    do
    {
        printf("Que desea hacer? \n1-Cargar un lote de pruebas \n2-Cargar matrices a mano\n0-Cerrar Programa\n");
        scanf("%d",&eleccion);
        switch(eleccion)
        {
        case 2:
            printf("Va a cargar la matriz 1:\n");
            PAUSA;
            LIMPIAR;
            fila1 = cantfilas();
            LIMPIAR;
            col1 = cantcol();
            LIMPIAR;
            cargarMatriz(Mat,fila1,col1);
            printf("Ahora va a cargar la matriz 2:\n");
            PAUSA;
            LIMPIAR;
            fila2 = cantfilas();
            LIMPIAR;
            col2 = cantcol();
            LIMPIAR;
            cargarMatriz(Mat2,fila2,col2);
            menu(Mat,Mat2,fila1,col1,fila2,col2);
            return 0;
            break;
        case 1:
            fila1=col1=3;
            fila2=col2=3;
            lotepruebas(Mat,fila1,col1);
            lotepruebas(Mat2,fila2,col2);
            PAUSA;
            LIMPIAR;
            menu(Mat,Mat2,fila1,col1,fila2,col2);
            return 0;
            break;
        case 0:
            printf("El programa ha cerrado correctamente");
            break;
        default:
            printf("Error de eleccion\n");
            PAUSA;
            LIMPIAR;
            break;
        }
    }
    while(eleccion!=0);


    return 0;
}


