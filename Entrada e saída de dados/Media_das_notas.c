#include <stdio.h>

int main(){
    
    float nota1, nota2, nota3, media_final;

    printf("Informe a primeira nota do aluno:\n");
    scanf("%f", &nota1);

    printf("Informe a segunda nota do aluno:\n");
    scanf("%f", &nota2);

    printf("Informe a terceira nota do aluno:\n");
    scanf("%f", &nota3);

    media_final = (nota1+nota2+nota3) / 3;

    printf("\nA media do aluno e: %.1f", media_final);

    return 0;

}
