#include <stdio.h>

int main() {
    int senha;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    while (senha != 1234) {
        printf("Senha incorreta! Tente novamente: ");
        scanf("%d", &senha);
    }

    printf("Acesso permitido!\n");

    return 0;
}
