#include <stdio.h>
#include <stdlib.h>

int main () {
    int **vetor, M, N;
    int maior1 = 0, maior2 = 0, m1linha = 0, m2linha = 0, m1coluna = 0, m2coluna = 0;
    
    printf("Escreva a quantidade de linhas e colunas: ");
    scanf("%d %d", &M, &N );
    
    vetor = (int *) malloc(M * sizeof(int));
    
    if (vetor == NULL) {
        exit(1);
    }

    for (int i = 0; i < M; i++){
        vetor[i] = (int *) malloc(N * sizeof(int));
    }
    
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("Escreva o valor [%d][%d]", i, j);
            scanf("%d", &vetor[i][j]);

        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (i == 0 && j == 0) {
                maior1 = vetor[i][j];
                m1linha = i;
                m1coluna = j;
                maior2 = vetor[i][j + 1];
                m2linha = i;
                m2coluna = j + 1;
            } else if (vetor[i][j] >= maior1 || vetor[i][j] >= maior2) {
                if (maior1 > maior2) {
                    maior2 = vetor[i][j];
                    m2linha = i;
                    m2coluna = j;
                } else {
                    maior1 = vetor[i][j];
                    m1linha = i;
                    m1coluna = j;
                }
            }
        }
    }

    printf("\nOs dois maiores valores sao: \n");
    if (maior1 > maior2) {
        printf("Maior valor: %d nas posicao: [%d][%d]", maior1, m1linha, m1coluna);
        printf("\nSegundo maior valor: %d nas posicao: [%d][%d]", maior2, m2linha, m2coluna);

    }else {
        printf("Maior valor: %d nas posicao: [%d][%d]", maior2, m2linha, m2coluna);
        printf("\nSegundo maior valor: %d nas posicao: [%d][%d]", maior1, m1linha, m1coluna);
    
    }
    free (vetor);
    return 0;
}