#include <stdio.h>

int main(){
    
    float num;

    printf("Informe um numero: ");
    scanf("%f",&num);

    for (int i = 1; i <= num; i++){
        
        printf("%.2f * %d = %.2f\n", num, i, num*i);

    }

    return 0;

}
