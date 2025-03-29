#include <stdio.h>
#define Max 50
#define Tamanho 2

typedef struct{
    char nome[Max];
    int matricula;
    float media; 
} Aluno;

int main(){
    Aluno aluno[Tamanho];
    printf("\t===== Informe =====\n");
    for(int i = 0; i<Tamanho; i++){
        printf("Nome Aluno %d: ", i+1);
        scanf("%s", aluno[i].nome);
        printf("Matricula Aluno %d: ", i+1);
        scanf("%d", &aluno[i].matricula);
        printf("Media Aluno %d: ", i+1);
        scanf("%f", &aluno[i].media);
    }

    printf("\t===== Alunos =====\n\n");

    for(int i = 0; i<Tamanho;i++){
        printf("\n\tAluno %d: \n\tNome: %s\n \tMatricula: %d\n \tMedia: %.1f\n",
            i+1, aluno[i].nome, aluno[i].matricula, aluno[i].media);
            printf("\n\t=======================\n");
    }

    return 0;
}
