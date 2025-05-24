#include <stdio.h>

int Fibonacci(int num){
    if (num == 0){
        return 0;
    } if (num == 1){
        return 1;
    } else {
        return Fibonacci(num-1) + Fibonacci(num-2);
    }
}

int main(){
    int termo;
    printf("Informe o termo da sequencia de Fibonacci desejada: ");
    scanf("%d", &termo);
    printf("O %d termo da sequencia eh: %d", termo, Fibonacci(termo));
    return 0;
}
