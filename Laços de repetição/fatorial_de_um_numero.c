#include <stdio.h>

int main(){
    int num, fatorial = 1;
    printf("Informe um numero: ");
    scanf("%d", &num);
    for (int i = num; i>=1; i--){
        fatorial *= i;
    }
    printf("O fatorial de %d:\n", num);
    printf("%d", fatorial);
    return 0;
}
