#include <stdio.h>
#define max 5

typedef struct {
    int codigo;
    char des[30];
    float preco;
} Caixa;

typedef struct {
    Caixa dados[max];
    int topo;
} Descritor;

Caixa vazio;
Descritor pilha;

int main(){
    pilha.topo = 0;

}


