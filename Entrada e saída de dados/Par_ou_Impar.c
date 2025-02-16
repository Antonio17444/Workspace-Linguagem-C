#include <stdio.h>

int main(){
    int num;

    printf("Informe um numero:\n");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("O numero %d e Par", num);
    } else{
        printf("O numero %d e Impar", num);
    }
    return 0;
}
