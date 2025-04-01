#include <stdio.h>

typedef struct{
    char nome[40];
    int idade;
    char escola[30];
} Aluno;

typedef struct{
    char rua[50];
    int numero;
    char cidade[30];
    Aluno aluno;
} Endereco;

int main(){
    
    Endereco aluno;

    printf("Informe o seu nome: ");
    fgets(aluno.aluno.nome, 50, stdin);

    printf("Informe a sua idade: ");
    scanf("%d", &aluno.aluno.idade);
    getchar();

    printf("Informe o nome da sua escola: ");
    fgets(aluno.aluno.escola, 30, stdin);

    printf("Informe o nome da sua rua: ");
    fgets(aluno.rua, 50, stdin);

    printf("Informe o numero da sua casa: ");
    scanf("%d", &aluno.numero);
    getchar();

    printf("Informe o nome da sua cidade: ");
    fgets(aluno.cidade, 50, stdin);

    printf("\n\t====== Dados do Aluno ======\n\n");

    printf("Nome: %s", aluno.aluno.nome);
    printf("Idade: %d\n", aluno.aluno.idade);
    printf("Escola: %s", aluno.aluno.escola);
    printf("Endereco: \nRua - %sNumero - %d\nCidade - %s", aluno.rua, aluno.numero, aluno.cidade);

    return 0;
}