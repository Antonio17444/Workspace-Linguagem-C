#include <stdio.h>

int Potencia(int num1, int num2){
    if (num2 == 0){
        return 1;
    } else {
        return num1 * Potencia(num1, num2-1);
    }
}

int main(){
    int base;
    int expoente;

    printf("Informe a base: ");
    scanf("%d", &base);
    printf("Informe o expoente: ");
    scanf("%d", &expoente);
    printf("A potencia de %d elevado ao expoente %d eh: %d", base, expoente, Potencia(base,expoente));
    return 0;
}
