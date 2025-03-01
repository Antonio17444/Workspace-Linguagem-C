#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int num;

    printf("Informe um número de 1 a 7:\n");
    scanf("%d", &num);
    switch(num) {

        case 1:
            printf("É segunda-feira\n");
            break;
        
        case 2:
            printf("É Terça-feira\n");
            break;
        
        case 3:
            printf("É Quarta-feira\n");
            break;
        
        case 4:
            printf("É Quinta-feira\n");
            break;
        
        case 5:
            printf("É Sexta-feira\n");
            break;
        
        case 6:
            printf("É sábado\n");
            break;
        
        case 7:
            printf("É Domingo\n");
            break;
        
        default:
            printf("Entrada inválida...\n");


    }

    return 0;

}
