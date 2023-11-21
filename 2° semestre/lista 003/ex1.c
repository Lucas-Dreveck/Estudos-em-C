#include <stdio.h>
#include <stdlib.h>

int main () {
    int  n = 0, *vetor, par = 0, impar = 0;
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
        if (vetor[i] % 2 == 0) {
            par++;
        } else {
            impar++;
        }
    }
    printf("\ndo qual %d sao pares e %d sao impares.", par, impar);
    for (int i = 0; i < n; i++)
    free(vetor[i]);
    free(vetor);
    return 0;
}