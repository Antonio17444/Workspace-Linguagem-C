#include <stdio.h>

int main(){
    int vetor[5];
    int soma = 0, media = 0, contador = 0;

    for(int i = 0; i<5; i++){
        printf("Informe um dado: \n");
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i<5;i++){
        soma += vetor[i];
        contador++;
    }
    media = soma / contador;

    printf("A media dos elementos do vetor e: %d", media);

    return 0;
}
