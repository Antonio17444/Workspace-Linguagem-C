#include <stdio.h>

int Fibonacci(int num){
    if (num == 0){
        return 0;
    } if (num == 1){
        return 1;
    } else {
        return Fibonacci(num -1) + Fibonacci(num -2);
    }
}

int main(){
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    printf("O %d° termo da sequencia de Fibonacci eh: %d", num, Fibonacci(num));
    return 0;
}
