#include <stdio.h>

int main() {
    //declaramos variables
    int fila,columna,suma=0,i,j;
    //pedimos dimension de la matriz
    printf("ingrese filas de la matriz");
    scanf("%d",&fila);
    printf("ingrese columnas de la matriz");
    scanf("%d",&columna);
    //declaramos la matriz
    int matriz1[fila][columna];
    //llenamos el arreglo
    printf("llene el arrelo ");
    printf("\n");
    for(i=0;i<fila;i++){
        for(j=0;j<columna;j++){
            printf("ingrese el dato(fila[%d]columna[%d]);",i,j);
            scanf("%d",&matriz1[i][j]);
        }
    }
    //sumamos todos los valores de la matriz
    for(i=0;i<fila;i++){
        for(j=0;j<columna;j++){
        suma=suma+matriz1[i][j];
        }
    }
    //imprimimos
    printf("la suma de la matriz es: %d ",suma);
    return 0;
}