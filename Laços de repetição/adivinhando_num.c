#include <stdio.h>

int main(){
    int num1 = 19, num2;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num2);

    while(num2 != num1){
        if (num2 > num1){
            printf("Muito alto! Tente novamente: ");
        } else {
            printf("Muito baixo! Tente novamente: ");
        }
        scanf("%d", &num2);
    }

    printf("Voce acertou!\n");

    return 0;
}




