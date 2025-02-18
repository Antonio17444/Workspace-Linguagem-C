#include <stdio.h>

int main(){
    float produto, desconto;

    printf("Informe o valor da sua compra: ");
    scanf("%f", &produto);

    if (produto > 100 && produto <= 500){
        desconto = produto - (produto * 10/100);

        printf("O valor final com desconto aplicado e de %.2f", desconto);
    }

    else if(produto > 500){
        desconto = produto - (produto * 20/100);
        
        printf("O valor final com desconto aplicado e de %.2f", desconto);

    }
    else {
        
        desconto = produto;
        printf("Nao ha descontos para esta compra. Valor final: %.2f", desconto);

    }

    return 0;
}
