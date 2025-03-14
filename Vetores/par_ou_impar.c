#include <stdio.h>

int main(){
    
    int vetor[5];
    int soma_pares = 0;
    int soma_impares = 0;

    printf("Informe os elementos do vetor:\n");
    for(int i = 0; i<5; i++){
        printf("Insira: ");
        scanf("%d", &vetor[i]);
    }

    printf("Resultado: \n");
    for(int i = 0; i<5; i++){
        if (vetor[i] % 2 == 0){
            soma_pares += 1;
        } else{
            soma_impares += 1;
        }
    }
    printf("Existem %d vetores pares e %d vetores impares.", soma_pares, soma_impares);
    return 0;
}

