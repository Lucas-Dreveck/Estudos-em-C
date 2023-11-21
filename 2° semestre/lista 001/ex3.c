#include <stdio.h>

int soma (int vetor[], int valor) {
    if (valor  == -1) {
        return 0;
    } else {
        return (vetor[valor] + soma(vetor, valor - 1));
    }
}


int main () {
    int valor;
    printf("Escreva o tamanho do seu vetor\n");
    scanf("%d", &valor);

    int vetor[valor];

    for (int i = 0; i < valor; i++) {
        printf("Escreva o %d valor:", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("A soma de todos os valores do vetor eh %d", soma(vetor, valor - 1));

    return 0;
}