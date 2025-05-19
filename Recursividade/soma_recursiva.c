#include <stdio.h>

int SomaNum(int num){
    if (num <= 0){
        return 0;
    } else {
        return num + SomaNum(num -1);
    }
}

int main(){
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);
    printf("A soma dos numeros de %d eh: %d", num, SomaNum(num));
    return 0;
}
