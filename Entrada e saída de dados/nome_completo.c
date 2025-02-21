#include <stdio.h>

int main(){
    char nome[30];

    printf("Informe seu nome completo: \n");
    fgets(nome, sizeof(nome), stdin);
    
    printf("Bem-vindo, %s", nome);

    return 0;
}
