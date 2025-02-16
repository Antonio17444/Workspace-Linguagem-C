#include <stdio.h>

int main(){

    float celsius, fahrenheit;

    printf("Informe a temperatura em Celsius:\n");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) +32;

    printf("Resultado: %.2f", fahrenheit);
    
    return 0;

}
