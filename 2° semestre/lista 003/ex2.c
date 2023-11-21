#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main () {
    int n = 0;
    char *vetor, *vetorF;
    printf("Escreva qual vai ser o tamanho da string: ");
    scanf("%d", &n);
    vetor = (char *) malloc(n*sizeof(char));
    vetorF = (char *) malloc(n*sizeof(char));
    if ( vetor == NULL) {
        printf("Erro de alocacao!");
        exit(1);
    }

    printf("Escreva a frase: ");
    scanf(" %[^\n]", vetor);

    size_t j = 0;
    for (size_t i = 0; i < n; i++) {
        char c = tolower(vetor[i]);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            vetorF[j] = vetor[i];
            j++;
        }
    }
    printf("%s", vetorF);
    free(vetor);
    free(vetorF);
    return 0;
}