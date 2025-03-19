#include <stdio.h>

#define linha_a 2
#define coluna_a 3
#define linha_b 3
#define coluna_b 2

int main(){
    int matriz1[linha_a][coluna_a] = {{1,2,3},{4,5,6}};
    int matriz2[linha_b][coluna_b] = {{7,8},{9,10},{11,12}};
    int matriz3[linha_a][coluna_b];
    int i,j,k;
    
    for(i = 0; i<linha_a; i++){
        for(j = 0;j<coluna_b; j++){
            matriz3[i][j] = 0;
        }
    }

    for(i = 0; i<linha_a;i++){
        for(j = 0; j<coluna_b; j++){
            for(k = 0; k<coluna_a; k++){
                matriz3[i][j] += matriz1[i][k] * matriz2[k][i];
            }
        }
    }

    printf("Resultado da multiplicacao das matrizes: \n");

    for(i = 0; i<linha_a; i++){
        for(j = 0; j<coluna_b; j++){
            printf("%4d", matriz3[i][j]);
        }
        printf("\n");
    }

    return 0;

}

