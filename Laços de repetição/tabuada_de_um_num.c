#include <stdio.h>

int main(){
    
    int num;

    printf("Informe um numero: ");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++){
        
        printf("%.2d * %d = %.2d\n", num, i, num*i);

    }

    return 0;

}
