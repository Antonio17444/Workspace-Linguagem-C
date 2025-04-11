#include <stdio.h>

int Fibonacci(int num){
    if (num == 0){
        return 0;
    } else if (num == 1) {
        return 1;
    } else {
        return Fibonacci(num -1) + Fibonacci(num -2);
    }
}

int main(){
    int num;
    printf("Informe o termo da sequencia de Fibonacci desejado: ");
    scanf("%d", &num);
    printf("%d termo da sequencia: %d", num, Fibonacci(num));
    return 0;
}
