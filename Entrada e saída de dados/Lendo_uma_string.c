#include <stdio.h>

int main(){
    char nome[50];

    printf("Informe seu primeiro nome:\n");
    scanf("%s", nome);

    printf("Ola %s, Bem-vindo!", nome);
    
    return 0;
}

