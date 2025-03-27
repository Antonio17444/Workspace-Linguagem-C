#include <stdio.h>
#include <string.h>
#define Tamanho 3
#define Max 50

typedef struct {
    int idade;
    float altura;
    char nome[Max];
} Pessoa;

typedef struct {
    int dia;
    int mes;
    Pessoa;
} Aniversariante;

int main(){

    Aniversariante pessoa[Max];

    for (int i = 0; i<Tamanho; i++){
        printf("Nome Pessoa %d: ", i+1);
        scanf("%49s", pessoa[i].nome);
        printf("Idade Pessoa %d: ", i+1);
        scanf("%d", &pessoa[i].idade);
        printf("Altura Pessoa %d: ", i+1);
        scanf("%f", &pessoa[i].altura);
        printf("Dia em que faz Aniversario Pessoa %d: ", i+1);
        scanf("%d", &pessoa[i].dia);
        printf("Mes em que faz Aniversario Pessoa %d: ", i+1);
        scanf("%d", &pessoa[i].mes);
    }

    printf("\t========== Lista de Pessoas ==========\n");
    for(int i = 0; i<Tamanho;i++){
        printf("Nome: %s, Idade: %d, Altura: %.2f, Dia: %d, Mes: %d\n",
            pessoa[i].nome, pessoa[i].idade, pessoa[i].altura, pessoa[i].dia, pessoa[i].mes);
    }
    printf("\t======================================");
    return 0;
}
