#include <stdio.h>

void main() {
    int nota1, nota2, nota3, total;
    printf("Escreva a nota do 1 aluno: \n");
    scanf("%d", &nota1);
    printf("Escreva a nota do 2 aluno: \n");
    scanf("%d", &nota2);
    printf("Escreva a nota do 3 aluno: \n");
    scanf("%d", &nota3);
    total = (nota1*1 + nota2*2 + nota3*3) / 6;
    printf("A media ponderada desses alunos e %d", total);
}