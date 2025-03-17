#include <stdio.h>

#define LINHAS 4
#define COLUNAS 4

int main(){
    int matriz[LINHAS][COLUNAS] = {0};

    for(int i = 0; i<LINHAS; i++){
        for(int j = 0; j<COLUNAS; j++){
            if (i == j){
                matriz[i][j] = 1; 
            }
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

