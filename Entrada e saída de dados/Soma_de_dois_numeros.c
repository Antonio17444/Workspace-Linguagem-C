#include <stdio.h>

int main(){
    int num1, num2, soma;

    printf("Informe um número:\n");
    scanf("%d", &num1);

    printf("Informe um segundo número:\n");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("A soma de %d com %d é igual a %d", num1, num2, soma);
    return 0;
}
