#include <stdio.h>

int main(){
    int num, soma_num = 0;

    printf("Informe um numero: ");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++){
        soma_num+=i;
    }

    printf("A soma dos numeros de %d e igual a %d", num, soma_num);

    return 0;

}
