#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int main(){
    int matriz1[LINHAS][COLUNAS];
    int matriz2[LINHAS][COLUNAS];
    int matriz_soma[LINHAS][COLUNAS];

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
            matriz_soma[i][j] = (matriz1[i][j] + matriz2[i][j]);
        
            printf("%4d", matriz_soma[i][j]);
        }
        printf("\n");

        }

    return 0;

}

