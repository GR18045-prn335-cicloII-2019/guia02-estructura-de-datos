#include <stdio.h>

int main() {
    int matriz[3][3],i,j,numero,x,y,auxiliar;
    // System("clear");
    //clear();
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matriz[i][j]=0;
        }
    }
    //llenar el arreglo
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("ingrese el dato(fila[%d]columna[%d]);",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    //ordenar de manera descendente
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for (x=0 ; x<3 ; x++) {
                for ( y = 0; y <3 ; y++) {
                    if (matriz[i][j] > matriz[x][y]){
                        auxiliar=matriz[x][y];
                        matriz[x][y]=matriz[i][j];
                        matriz[i][j]=auxiliar;
                    }
                }
            }
        }
    }
    //imprimir la matriz
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("matriz [%d][%d]=%d",i,j,matriz[i][j]);
            printf("\n");
        }
    }
    return 0;
}