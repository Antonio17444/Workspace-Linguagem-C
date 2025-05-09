#include <stdio.h>

void AlterarValor(int *ponteiro){
    *ponteiro = 20;
}

int main(){

    int num = 10; 
    AlterarValor(&num);
    printf("%d", num); 
    return 0;
}
