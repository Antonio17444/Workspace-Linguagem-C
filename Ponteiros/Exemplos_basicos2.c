#include <stdio.h>

int main(){

    int num = 10;
    int *ponteiro = &num;
    
    printf("Valor de num: %d\n", num);
    printf("Onde num esta armazenado na memoria: %p\n", &num);
    printf("Valor do ponteiro que aponta num: %p\n", ponteiro);
    printf("Valor apontado por ponteiro: %d\n", *ponteiro);
    return 0;

}
