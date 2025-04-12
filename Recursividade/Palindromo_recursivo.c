#include <stdio.h>
#include <string.h>

int ehPalindromo(char str[], int inicio, int fim) {
    if (inicio >= fim) {
        return 1;
    }
    if (str[inicio] != str[fim]) {
        return 0;
    }
    return ehPalindromo(str, inicio + 1, fim - 1);
}

int main() {
    char palavra[] = "radar";

    if (ehPalindromo(palavra, 0, strlen(palavra) - 1)) {
        printf("Eh palindromo!\n");
    } else {
        printf("Nao eh palindromo.\n");
    }

    return 0;
}
