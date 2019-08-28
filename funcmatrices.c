#include "funcmatrices.h"

void lotepruebas(int M[][100],int fila,int col)
{
    int i,j;
    for (i=0;i<fila;i++)
    {
        for(j=0;j<col;j++)
        {
            M[i][j]= rand() % 21;
        }
    }
}

void cargarMatriz(int M[][100],int fila,int col)
{
    int j,i;
    int num;
    for (i=0;i<fila;i++)
    {
        for (j=0;j<col;j++)
        {
            printf("Ingrese un numero para la posicion %d - %d : \n",i+1,j+1);
            scanf("%d",&num);
            M[i][j]=num;
            LIMPIAR;
        }
    }
}

void mostrarMatriz (int M[][100],int fila,int col)
{
    int i,j;
    printf("Matriz cargada:\n");
    for (i=0;i<fila;i++)
    {
        for (j=0;j<col;j++)
        {
            printf("%2d ",M[i][j]);
        }
        printf("\n");
    }
}

void productomatrices(int M[][100],int M2[][100],int fila1,int fila2,int col1,int col2)
{
    int i,j,k;
    int tot;
    if (col1 == fila2)
    {
        for (i=0;i<fila1;i++)
        {
            for (j=0;j<col2;j++)
            {
                tot=0;
                for (k=0;k<col1;k++)
                {
                    tot=tot+M[i][k]*M2[k][j];
                }
                printf("%d ",tot);
            }
            printf("\n");
        }
    }
    else
    {
        printf("No se puede hacer producto entre matrices \nporque la cantidad de columnas de la primer matriz\nno coincide con la cantidad de filas de la segunda matriz\n");
    }

}

int cantfilas ()
{
    int fila;
    printf("Cuantas filas?\n");
    do
    {
        scanf("%d",&fila);
    }while(fila<1 || fila >100);
    return fila;
}

int cantcol ()
{
    int col;
    printf("Cuantas columnas?\n");
    do
    {
        scanf("%d",&col);
    }while(col<1 || col>100);
    return col;
}

void trazamatriz (int M[][100],int fila,int col)
{
    int j,i;
    int tot=0;
    if (fila==col)
    {
        for (i=0;i<fila;i++)
        {
            for (j=0;j<col;j++)
            {
            tot=i==j?tot+M[i][j]:tot+0;
            }
        }
        printf("La traza de la matriz es: %d \n",tot);
    }
    else
    {
        printf("Las matriz no es cuadrada\n");
    }

}

void matrizdiagonal (int M[][100],int fila,int col)
{
    int i,j;
    int b=0;
    if(fila==col)
    {
        for (i=0;i<fila;i++)
        {
            for (j=0;j<col;j++)
            {
                b=((i!=j && M[i][j]==0)||(i==j && M[i][j]!=0))?b+0:b+1;
            }
        }
        printf("La matriz");
        printf(b==0?" ES DIAGONAL\n":" NO ES DIAGONAL\n");
    }
    else
    {
        printf("Las matriz no es cuadrada\n");
    }
}

void matriztranspuesta (int M[][100],int fila,int col)
{
    int i,j;
    printf("Matriz Transpuesta:\n");
    for (i=0;i<col;i++)
    {
        for (j=0;j<fila;j++)
        {
            printf("%d ",M[j][i]);
        }
        printf ("\n");
    }
}

void matrizidentidad (int M[][100],int fila,int col)
{
    int i,j;
    int b=0;
    if(fila==col)
    {
        for (i=0;i<fila;i++)
        {
            for (j=0;j<col;j++)
            {
                b=((i!=j && M[i][j]==0)||(i==j && M[i][j]==1))?b+0:b+1;
            }
        }
        printf("La matriz");
        printf(b==0?" ES MATRIZ IDENTIDAD\n":" NO ES MATRIZ IDENTIDAD\n");
    }
    else
    {
        printf("Las matriz no es cuadrada\n");
    }
}

void cambiarmatriztranspuesta(int M[][100],int fila,int col)
{
    int i,j,aux;
    for(i=0;i<fila;i++)   //recorrio el triangulo superior para que se transponga
    {
        for(j=i+1;j<col;j++)
        {
            aux=M[i][j];
            M[i][j]=M[j][i];
            M[j][i]=aux;
        }
    }
}

void transponerdiagsec(int M[][100],int fila,int col)
{
    int i,j,aux;
    for(i=0;i<fila-1;i++)
    {
        for(j=0;j<col-1-i;j++)
        {
            aux=M[i][j];
            M[i][j]=M[fila-1-j][col-1-i];
            M[fila-1-j][col-1-i]=aux;
        }
    }
}

void transponercentro(int M[][100],int fila,int col)
{
    int i,j,aux;
    for(i=0;i<fila/2;i++)
    {
        for(j=0;j<col-i;j++)
        {
            aux=M[i][j];
            M[i][j]=M[fila-i-1][col-j-1];
            M[fila-i-1][col-j-1]=aux;
        }
    }
}
