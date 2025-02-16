#include <stdio.h>

int main(){
    int num1, num2, num3;

    printf("Informe o primeiro numero:\n");
    scanf("%d", &num1);

    printf("Informe o segundo numero:\n");
    scanf("%d", &num2);

    printf("Informe o terceiro numero:\n");
    scanf("%d", &num3);

    if (num1>num2 && num1>num3){
        printf("O %d e o maior numero!", num1);
    }

    if (num2>num1 && num2>num3){
        printf("O %d e o maior numero!", num2);
    }

    if (num3>num1 && num3>num2){
        printf("O %d e o maior numero!", num3);
    }
    return 0;
}
