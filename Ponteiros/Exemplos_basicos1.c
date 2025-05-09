#include <stdio.h>

int main(){
    int valor = 10;
    int *ponteiro = &valor;
    printf("O valor que o ponteiro está apontando eh: %d", *ponteiro); // imprime o valor 10 na tela
    return 0;
}
