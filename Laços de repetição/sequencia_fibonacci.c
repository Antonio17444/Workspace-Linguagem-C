#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;

    printf("Informe a quantidade de termos: ");
    scanf("%d", &n);

    printf("Sequencia de Fibonacci (%d termos):\n", n);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    printf("\n");
    return 0;
}
