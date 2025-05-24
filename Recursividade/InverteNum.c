#include <stdio.h>

int InverteNum(int num, int invertido){
    if (num == 0){
        return invertido;
    } else {
        return InverteNum(num / 10, invertido * 10 + num % 10);
    }
}

int main(){
    int numero;

    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &numero);

    int resultado = InverteNum(numero, 0);
    printf("%d", resultado);
    return 0;
}
