#include <stdio.h>

int main(){
    float num1, num2;
    char operador;
    printf("Informe um numero: ");
    scanf("%f", &num1);

    printf("Informe o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Informe um numero: ");
    scanf("%f", &num2);

    switch (operador){

        case '+':
            printf("Resultado: %.2f\n", num1 + num2);
            break;
        
        case '-':
            printf("Resultado: %.2f\n", num1 - num2);
            break;

        case '*':
            printf("Resultado: %.2f\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0){
                printf("Resultado: %.2f\n", num1 / num2);
            } else{
                printf("Erro: divisao por 0\n");
            }
            break;
        
        default:
            printf("Valor informado invalido...\n");
    }

    return 0;

}

