#include <stdio.h>

int inverterNumero(int n, int resultado) {
    if (n == 0) {
        return resultado;
    }
    return inverterNumero(n / 10, resultado * 10 + (n % 10));
}

int main() {
    int numero = 12345;
    int invertido = inverterNumero(numero, 0);

    printf("Numero original: %d\n", numero);
    printf("Numero invertido: %d\n", invertido);

    return 0;
}
