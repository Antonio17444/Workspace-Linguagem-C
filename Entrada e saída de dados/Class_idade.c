#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    switch (idade / 10) {
        case 0:
        case 1:
            printf("Criança\n");
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Adulto\n");
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            printf("Idoso\n");
            break;
        default:
            if (idade >= 13 && idade <= 17)
                printf("Adolescente\n");
            else
                printf("Idade inválida\n");
    }

    return 0;
}
