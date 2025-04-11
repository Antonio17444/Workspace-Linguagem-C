#include <stdio.h>

void contagem_regressiva(int num){
    if (num < 0){
        return;
    } else {
        printf("%d\n", num);
        contagem_regressiva(num -1);
    }
}

int main(){
    int num;

    printf("informe um numero inteiro: ");
    scanf("%d", &num);
    printf("Contagem regressiva:\n");
    contagem_regressiva(num);
    return 0;
}
