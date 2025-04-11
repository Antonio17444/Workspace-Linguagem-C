#include <stdio.h>

int soma_numeros(int num){
    if (num == 1){
        return 1;
    } else {
        return num + soma_numeros(num -1);
    }
}

int main(){
    int num;
    printf("Informe um numero inteiro positivio: ");
    scanf("%d", &num);
    if (num < 1){
        printf("0");
    } else {
        printf("A soma dos %d numeros eh: %d", num, soma_numeros(num));
    }
    return 0;
}