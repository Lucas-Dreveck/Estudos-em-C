#include <stdio.h>
#include <stdlib.h>

int main () {
    int  n = 0, x = 0, *vetor;
    printf("Escreva qual vai ser o tamanho do vetor criado: ");
    scanf("%d", &n);
    vetor = (int *) malloc(n*sizeof(int));
    if ( vetor == NULL) {
        printf("Erro de alocacao!");
        exit(1);
    }
    for (int i = 0; i < n; i++) {
        printf("Informe a posicao [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Voce escolheu fazer um vetor com %d posicoes com os seguintes valores: \n", n);
    for (int i = 0; i < n; i++) {
        printf("%d  ", vetor[i]);
    }
    printf("\nAgora escreva um valor X: ");
    scanf("%d", &x);
    printf("Os multiplos de %d dentro do vetor inserido sao: \n", x);
    for (int i = 0; i < n; i++) {
        if (vetor[i] % x == 0) {
            printf("%d  ", vetor[i]);
        }
    }
    free(vetor);
    return 0;
}