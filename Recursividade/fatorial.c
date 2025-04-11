#include <stdio.h>

int fatorial(int num){
    if (num == 0 || num == 1)
        return 1;
    else 
        return num * fatorial(num - 1);
}

int main(){
    int num;
    printf("informe um numero inteiro: ");
    scanf("%d", &num);
    if (num >= 0){
        printf("O fatorial de %d eh %d", num, fatorial(num));
    } else{
        printf("Entrada invalida");
    }
    return 0;
}
