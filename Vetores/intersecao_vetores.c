#include <stdio.h>

int main() {
    int A[10], B[10], C[10]; 
    int tamanhoC = 0;

    // Leitura do vetor A
    printf("Digite 10 elementos do vetor A:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite 10 elementos do vetor B:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (A[i] == B[j]) { 
                int jaExiste = 0;
                for (int k = 0; k < tamanhoC; k++) {
                    if (C[k] == A[i]) {
                        jaExiste = 1;
                        break;
                    }
                }
                if (!jaExiste) {
                    C[tamanhoC] = A[i];
                    tamanhoC++;
                }
            }
        }
    }

    printf("Elementos em comum nos vetores A e B:\n");
    if (tamanhoC == 0) {
        printf("Nenhum elemento em comum.\n");
    } else {
        for (int i = 0; i < tamanhoC; i++) {
            printf("%d ", C[i]);
        }
        printf("\n");
    }

    return 0;
}
