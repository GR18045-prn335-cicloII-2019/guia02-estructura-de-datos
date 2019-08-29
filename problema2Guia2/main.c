#include <stdio.h>

int main() {
    int i,j,numero,fila,columna;
    // System("clear");
    //clear();
    printf("ingrese filas de la matriz");
    scanf("%d",&fila);
    printf("ingrese columnas de la matriz");
    scanf("%d",&columna);
   int matriz1[fila][columna];
   int matriz2[fila][columna];
   int matriz3[fila][columna];


    //llenar el arreglo 1
    printf("llene el arrelo 1");
    printf("\n");
    for(i=0;i<fila;i++){
        for(j=0;j<columna;j++){
            printf("ingrese el dato(fila[%d]columna[%d]);",i,j);
            scanf("%d",&matriz1[i][j]);
        }
    }
    printf("llene el arrelo 2");
    printf("\n");
    for(i=0;i<fila;i++){
        for(j=0;j<columna;j++){
            printf("ingrese el dato(fila[%d]columna[%d]);",i,j);
            scanf("%d",&matriz2[i][j]);
        }
    }
    //sumamos las dos matrices en una sola
    for(i=0;i<fila;i++){
        for(j=0;j<columna;j++){
            matriz3[i][j]=matriz1[i][j]+matriz2[i][j];
        }
    }
    //imprimimos la matriz 3
    printf("la matriz suma es: ");
    printf("\n");
    for(i=0;i<fila;i++){
        for(j=0;j<columna;j++){
            printf("matriz3 [%d][%d]=%d",i,j,matriz3[i][j]);
            printf("\n");
        }
    }

    return 0;
}