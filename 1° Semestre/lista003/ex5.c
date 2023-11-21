#include <stdio.h>

void main () {
    int numero = 0;
    int i = 1, final = 0;
    while (i <= 10) {
        printf("Digite o %d numero: \n", i, numero);
        scanf("%d", &numero);
        final+=numero;
        i++;
    }
    printf("A soma dos numeros eh: %d", final);
}