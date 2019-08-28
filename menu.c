#include "funcmatrices.h"

void menu (int M[][100],int M2[][100],int fila1,int col1,int fila2,int col2)
{
    int OP,aux;

    do
    {
        printf("Elije una opcion:\n");
        printf("1-Mostrar Matriz 1\n");
        printf("2-Mostrar Matriz 2\n");
        printf("3-Calcular el producto entre las Matrices\n");
        printf("4-Cambiar Matriz 1\n");
        printf("5-Cambiar Matriz 2\n");
        printf("6-Calcular traza\n");
        printf("7-Saber si es matriz diagonal\n");
        printf("8-SIGUIENTE PAGINA\n");
        printf("9-Salir\n");
        printf("Opcion:  ");
        scanf("%d",&OP);
        LIMPIAR;
        switch(OP)
        {
        case 1:
            mostrarMatriz(M,fila1,col1);
            PAUSA;
            LIMPIAR;
            break;
        case 2:
            mostrarMatriz(M2,fila2,col2);
            PAUSA;
            LIMPIAR;
            break;
        case 3:
            printf("Producto entre matrices:\n");
            productomatrices(M,M2,fila1,fila2,col1,col2);
            PAUSA;
            LIMPIAR;
            break;
        case 4:
            printf("¿De verdad desea cambiar la matriz 1?\n");
            printf("1-SI\n2-NO\n");
            scanf("%d",&OP);
            LIMPIAR;
            switch (OP)
            {
            case 1:
                fila1 = cantfilas();
                LIMPIAR;
                col1 = cantcol();
                LIMPIAR;
                cargarMatriz(M,fila1,col1);
                break;
            case 2:
                printf("Se cancelo la operacion\n");
                break;
            default:
                printf("Opcion no valida\n");
                PAUSA;
                LIMPIAR;
                break;
            }
            break;
        case 5:
            printf("¿De verdad desea cambiar la matriz 2?\n");
            printf("1-SI\n2-NO\n");
            scanf("%d",&OP);
            LIMPIAR;
            switch (OP)
            {
            case 1:
                fila2 = cantfilas();
                LIMPIAR;
                col2 = cantcol();
                LIMPIAR;
                cargarMatriz(M2,fila2,col2);
                break;
            case 2:
                printf("Se cancelo la operacion\n");
                break;
            default:
                printf("Opcion no valida\n");
                PAUSA;
                LIMPIAR;
                break;
            }
            break;
        case 6:
            printf("Que matriz desea usar?\n");
            printf("1-Matriz 1\n");
            printf("2-Matriz 2\n");
            scanf("%d",&OP);
            LIMPIAR;
            switch (OP)
            {
            case 1:
                trazamatriz(M,fila1,col1);
                PAUSA;
                LIMPIAR;
                break;
            case 2:
                trazamatriz(M2,fila2,col2);
                PAUSA;
                LIMPIAR;
                break;
            default:
                printf("Opcion no valida\n");
                PAUSA;
                LIMPIAR;
                break;
            }
            break;
        case 7:
            printf("Que matriz desea usar?\n");
            printf("1-Matriz 1\n");
            printf("2-Matriz 2\n");
            scanf("%d",&OP);
            LIMPIAR;
            switch (OP)
            {
            case 1:
                matrizdiagonal(M,fila1,col1);
                PAUSA;
                LIMPIAR;
                break;
            case 2:
                matrizdiagonal(M2,fila2,col2);
                PAUSA;
                LIMPIAR;
                break;
            default:
                printf("Opcion no valida\n");
                PAUSA;
                LIMPIAR;
                break;
            }
            break;
        case 8:
            do
            {
                printf("1-Mostrar matriz transpuesta\n");
                printf("2-Averiguar si es matriz identidad\n");
                printf("3-Transponer Matriz\n");
                printf("4-Transponer por diagonal secundaria\n");
                printf("5-Transponer por el centro\n");
                printf("9-PAGINA ANTERIOR\n");
                printf("Opcion:  ");
                scanf("%d",&OP);
                LIMPIAR;
                switch(OP)
                {
                case 1:
                    printf("Que matriz desea usar?\n");
                    printf("1-Matriz 1\n");
                    printf("2-Matriz 2\n");
                    scanf("%d",&OP);
                    LIMPIAR;
                    switch (OP)
                    {
                    case 1:
                        matriztranspuesta(M,fila1,col1);
                        PAUSA;
                        LIMPIAR;
                        break;
                    case 2:
                        matriztranspuesta(M2,fila2,col2);
                        PAUSA;
                        LIMPIAR;
                        break;
                    }
                    break;
                case 2:
                    printf("Que matriz desea usar?\n");
                    printf("1-Matriz 1\n");
                    printf("2-Matriz 2\n");
                    scanf("%d",&OP);
                    LIMPIAR;
                    switch (OP)
                    {
                    case 1:
                        matrizidentidad(M,fila1,col1);
                        PAUSA;
                        LIMPIAR;
                        break;
                    case 2:
                        matrizidentidad(M2,fila2,col2);
                        PAUSA;
                        LIMPIAR;
                        break;
                    }
                    break;
                case 3:
                    printf("Que matriz desea usar?\n");
                    printf("1-Matriz 1\n");
                    printf("2-Matriz 2\n");
                    scanf("%d",&OP);
                    LIMPIAR;
                    switch (OP)
                    {
                    case 1:
                        cambiarmatriztranspuesta(M,fila1,col1);
                        aux=fila1;
                        fila1=col1;
                        col1=aux;
                        PAUSA;
                        LIMPIAR;
                        break;
                    case 2:
                        cambiarmatriztranspuesta(M2,fila2,col2);
                        aux=fila2;
                        fila2=col2;
                        col2=aux;
                        PAUSA;
                        LIMPIAR;
                        break;
                    default:
                        printf("Opcion no valida\n");
                        PAUSA;
                        LIMPIAR;
                        break;
                    }
                    break;
                case 4:
                    printf("Que matriz desea usar?\n");
                    printf("1-Matriz 1\n");
                    printf("2-Matriz 2\n");
                    scanf("%d",&OP);
                    LIMPIAR;
                    switch (OP)
                    {
                    case 1:
                        transponerdiagsec(M,fila1,col1);
                        PAUSA;
                        LIMPIAR;
                        break;
                    case 2:
                        transponerdiagsec(M2,fila2,col2);
                        PAUSA;
                        LIMPIAR;
                        break;
                    default:
                        printf("Opcion no valida\n");
                        PAUSA;
                        LIMPIAR;
                    }
                case 5:
                    transponercentro(M,fila1,col1);
                    PAUSA;
                    LIMPIAR;
                    break;
                case 9:
                    LIMPIAR;
                    break;
                default:
                    printf("Opcion no valida\n");
                    PAUSA;
                    LIMPIAR;
                    break;
                }
                break;
            }
            while(OP!=9);
            OP=10;
            break;
        case 9:
            printf("El programa la cerrado correctamente\n");
            break;
        default:
            printf("Opcion no valida\n");
            PAUSA;
            LIMPIAR;
            break;
        case 10:
            break;
        }
    }
    while(OP!=9);
    PAUSA;
}
