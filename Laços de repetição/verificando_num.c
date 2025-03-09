#include <stdio.h>

int main(){
    int num, contador = 0;

    do
    {
        printf("Informe um numero: ");
        scanf("%d", &num);
        contador += 1;
    } while (num <= 0);
        if (num>0){
            printf("Certo! voce tentou %d vezes\n", contador);
        }
    return 0;
}
