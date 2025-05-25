#include <stdio.h>

int SomaNum(int num){
    if (num == 0){
        return 0;
    } else {
        return (num % 10) + SomaNum(num/10);
    }
}

int main(){
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);
    int resultado = SomaNum(num);
    printf("A soma dos numeros de %d eh: %d", num, resultado);
    return 0;
}
