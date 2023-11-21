#include <stdio.h>

void main () {
    int numero_de_identificacao;
    float nota_1, nota_2, nota_3, media;
    printf("Digite o numero de identificacao: \n");
    scanf("%d", &numero_de_identificacao);
    printf("Digite a nota 1: \n");
    scanf("%f", &nota_1);
    printf("Digite a nota 2: \n");
    scanf("%f", &nota_2);
    printf("Digite a nota 3: \n");
    scanf("%f", &nota_3);
    media = (nota_1 + nota_2 + nota_3) / 3;
    if (media >= 7) {
        printf("Aprovado com media %.2f \n", media);
    } else if (media >= 5) {
        printf("Recuperacao com media %.2f \n", media);
    } else {
        printf("Reprovado com media %.2f \n", media);
    }
}