#include <stdio.h>

int potencia(int num, int elevado){
    if (elevado == 0){
        return 1;
    } else {
        return num * potencia(num, elevado -1);
    }
    
}

int main(){
    int a, b;
    printf("Informe o numero inteiro: ");
    scanf("%d", &a);
    printf("Informe o seu expoente: ");
    scanf("%d", &b);
    printf("Resultado: %d", potencia(a,b));
    return 0;
}
