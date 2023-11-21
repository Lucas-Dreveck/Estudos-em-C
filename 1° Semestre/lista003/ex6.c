#include <stdio.h>

void main () {
    int numero = 0;
    int i = 1, final = 0;
    while (i <= 20) {
        printf("Digite a idade da %d pessoa: \n", i, numero);
        scanf("%d", &numero);
        final+=numero;
        i++;
    }
    printf("A soma das idades eh: %d", final);
}
