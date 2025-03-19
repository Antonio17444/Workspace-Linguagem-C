#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int main(){
    int matriz1[LINHAS][COLUNAS] = {{10,11,12}, {13,14,15}, {16,17,18}};
    int matriz2[LINHAS][COLUNAS] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int matriz_sub[LINHAS][COLUNAS] = {0};
    
    
    for(int i = 0; i<LINHAS; i++){
        for (int j = 0; j<COLUNAS;j++){
            matriz_sub[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }

    for(int i = 0; i<LINHAS; i++){
        for (int j = 0; j<COLUNAS;j++){
            printf("%4d", matriz_sub[i][j]);
        }
        printf("\n");
    }

    return 0;

}

