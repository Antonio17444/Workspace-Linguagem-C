#include <stdio.h>

int Fatorial(int num){
    if (num <= 0){
        return 1;
    } else {
        return num * Fatorial(num -1);
    }
}

int main(){
    int num;

    printf("Informe o valor de Num: ");
    scanf("%d", &num);
    printf("O fatorial de %d eh: %d", num, Fatorial(num));
    return 0;
}