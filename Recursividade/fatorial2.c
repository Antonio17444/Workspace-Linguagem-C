#include <stdio.h>

int fatorial(int num){
    if (num == 0){
        return 1;
    } else {
        return num * fatorial(num -1);
    }
}

int main(){
    int num;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    printf("O fatorial de %d eh: %d", num, fatorial(num));
    return 0;
}
