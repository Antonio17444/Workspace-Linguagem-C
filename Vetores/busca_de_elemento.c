#include <stdio.h>

int main() {
    int vetor[5] = {10, 7, 19, 22, 17};
    int user_elemento = 0;
    int acertou = 0;

    while (acertou == 0) {
        printf("Informe o elemento: ");
        scanf("%d", &user_elemento);

        acertou = 0;
        for (int i = 0; i < 5; i++) {
            if (user_elemento == vetor[i]) {
                acertou = 1;
            }
        }

        if (acertou == 1) {
            printf("Acertou!\n");
        } 
        if (acertou == 0) {
            printf("Tente novamente...\n");
        }
    }

    return 0;
}

