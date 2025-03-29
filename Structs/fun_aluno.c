#include <stdio.h>
#define tamanho 50

typedef struct{
    int idade;
    float altura;
    char nome[tamanho];
} Aluno;

void exibiraluno(Aluno aluno){
    printf("\n===== Dados do Aluno =====\n");
    printf("Idade: %d\n", aluno.idade);
    printf("Altura; %.2f\n", aluno.altura);
    printf("Nome: %s\n", aluno.nome);
}

int main(){
    Aluno aluno = {19, 1.70, "Henrique"};
    exibiraluno(aluno);
    return 0;
}

