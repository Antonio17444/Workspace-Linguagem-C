#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int main(){
    int matriz1[LINHAS][COLUNAS];
    int matriz2[LINHAS][COLUNAS];
    int soma = 0;

    printf("Preenchendo os elementos da 1 Matriz\n");
    for(int i = 0; i<LINHAS; i++){
        for (int j = 0; j<COLUNAS; j++){
            printf("Elemento: ");
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Preenchendo os elementos da 2 Matriz\n");
    for(int i = 0; i<LINHAS; i++){
        for (int j = 0; j<COLUNAS; j++){
            printf("Elemento: ");
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            soma += matriz1[i][j];
            soma += matriz2[i][j];

        }

    }

    printf("A soma dos elementos das matrizes e: %d", soma);

    return 0;

}

