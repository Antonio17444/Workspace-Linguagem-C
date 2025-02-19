#include <stdio.h>

int main() {
    printf("Quadrados dos números de 1 a 10:\n");

    for (int i = 1; i <= 10; i++) {
        printf("%d^2 = %d\n", i, i * i);
    }

    return 0;
}
