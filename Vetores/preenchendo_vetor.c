#include <stdio.h>

int main(){
    int vetor[10];

    for(int i = 0; i<10; i++){
        printf("Informe um dado: \n");
        scanf("%d", &vetor[i]);
    }

    printf("Dados inseridos no Vetor:\n");
    for(int i = 0; i<10; i++){
        printf("%d\n", vetor[i]);
    }
    printf("Fim...");

    return 0;
}
