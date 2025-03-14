#include <stdio.h>

int main(){
    
    int vetor[5];
    int soma = 0;

    printf("Informe os elementos do vetor:\n");
    for(int i = 0; i<5; i++){
        printf("Insira: ");
        scanf("%d", &vetor[i]);
    }

    printf("Soma dos elementos desse vetor: ");
    for(int i = 0; i<5; i++){
        soma += vetor[i];
    }
    printf("%d", soma);
    return 0;
}

