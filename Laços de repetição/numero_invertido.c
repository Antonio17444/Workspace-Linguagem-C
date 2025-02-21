#include <stdio.h>

int inverterNumero(int num) {
    int invertido = 0;
    
    while (num != 0) {
        int digito = num % 10;
        invertido = invertido * 10 + digito;
        num /= 10;
    }
    
    return invertido;
}

int main() {
    int numero;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    printf("Numero invertido: %d\n", inverterNumero(numero));
    
    return 0;
}
