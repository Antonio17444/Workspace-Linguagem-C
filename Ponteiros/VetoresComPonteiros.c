#include <stdio.h>

int main(){

    int vetor[] = {1,2,3};
    int *ponteiro = vetor;
    for(int i = 0; i<3; i++){
        printf("%d\n", *(ponteiro+i));
    }
    return 0;
}
