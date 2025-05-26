#include <stdio.h>
#define tamanho 5

// Funções:

typedef struct {
    int idade;
    float altura;
    char nome[20];
} Pessoa;

typedef struct {
    Pessoa dados[5];
    int inicio, fim, quantidade;
} Descritor;

Descritor fila;
Pessoa vazio;

void imprimir(){
    printf("Fila: \n");
    for (int i = 0; i<fila.fim; i++){
        printf("Usuario %d:\n", i+1);
        printf("Idade: %d\nAltura: %2f\nNome: %s\n", fila.dados[i].idade, fila.dados[i].altura, fila.dados[i].nome);
    }
    printf("------------------------------------------------\n");
    printf("\n");
}

void enfileirar(){
    if (fila.fim<tamanho){

        printf("Informe sua idade: ");
        scanf("%d", &fila.dados[fila.fim].idade);
        printf("Informe sua altura: ");
        scanf("%f", &fila.dados[fila.fim].altura);
        printf("Informe seu primeiro nome: ");
        scanf("%s", &fila.dados[fila.fim].nome);

        fila.fim++;
        fila.quantidade++;


    } else {
        printf("A fila esta cheia!!\n");
    }
}

void desinfileirar(){
    if (fila.fim>0){
        for(int i = 0; i<fila.fim-1; i++){
            fila.dados[i] = fila.dados[i+1];
        }
        fila.fim--;
        fila.dados[fila.fim] = vazio;
    } else {
        printf("A fila esta vazia!!\n");    
    }
}

int main(){
    fila.fim = 0;
    fila.inicio = 0;
    fila.quantidade = 0;
    int op;

    do {

        imprimir();
        printf("---------- Menu ----------\n");
        printf("1 - Enfileirar\n");
        printf("2 - Desinfileirar\n");
        printf("3 - Imprimir\n");
        printf("0 - Sair...\n");
        printf("Escolha: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                enfileirar();
                break;
            case 2:
                desinfileirar();
                break;
            case 3:
                imprimir();
                break;
            case 0:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
        printf("\n");

    } while (op != 0);

    return 0;
}
