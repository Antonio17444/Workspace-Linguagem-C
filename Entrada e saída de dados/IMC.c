#include <stdio.h>

int main() {
    float altura, peso, imc;

    printf("Informe seu peso (kg): ");
    scanf("%f", &peso);

    printf("Informe sua altura (m): ");
    scanf("%f", &altura);

    if (peso <= 0 || altura <= 0) {
        printf("Erro: Peso e altura devem ser valores positivos.\n");
        return 1;
    }

    imc = peso / (altura * altura);

    printf("Seu IMC: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Classificação: Abaixo do peso.\n");
    } else if (imc >= 18.5 && imc < 24.9) {
        printf("Classificação: Peso normal.\n");
    } else if (imc >= 25 && imc < 29.9) {
        printf("Classificação: Sobrepeso.\n");
    } else if (imc >= 30 && imc < 34.9) {
        printf("Classificação: Obesidade grau 1.\n");
    } else if (imc >= 35 && imc < 39.9) {
        printf("Classificação: Obesidade grau 2.\n");
    } else {
        printf("Classificação: Obesidade grau 3 (mórbida).\n");
    }

    return 0;
}
