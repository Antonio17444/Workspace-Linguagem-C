#include <stdio.h>

void contagem(int num){
    if (num < 0){
        return;
    } else {
        printf("%d\n", num);
        contagem(num-1);
    }
}

int main(){
    int num;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    contagem(num);
    return 0;
}
