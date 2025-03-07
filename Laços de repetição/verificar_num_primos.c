#include <stdio.h>

int eh_primo(int num){
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++){
        if (num % i == 0) return 0;
    }
    return 1;
}

int main(){
    int num;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    if (eh_primo(num))
        printf("%d e primo...\n", num);
    
    else
        printf("%d nao e primo...\n", num);
    
    return 0;
}
