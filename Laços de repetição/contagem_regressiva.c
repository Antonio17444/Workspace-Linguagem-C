#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero para iniciar a contagem regressiva: ");
    scanf("%d", &num);
    printf("Contagem regressiva:\n");
    while (num >= 0) {
        printf("%d\n", num);
        num--;
    }
    printf("Fim da contagem!\n");
    return 0;
}
