#include <stdio.h>

int main(){
    int num, soma = 0;

    printf("Informe um numero (ou -1 para encerrar): ");
    scanf("%d", &num);

    while(num != -1){
        soma += num;
        printf("Informe um numero (ou -1 para encerrar): ");
        scanf("%d", &num);
    }

    printf("Resultado: %d\n", soma);

    return 0;
}

