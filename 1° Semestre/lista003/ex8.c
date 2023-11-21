#include <stdio.h>

void main () {
    int numero = 0;
    int i = 1, final = 0;
    while (i <= 20) {
        printf("Digite a idade da %d pessoa: \n", i, numero);
        scanf("%d", &numero);
        if (numero >= 18) {
            final++;
        }
        i++;
    }
    printf("Existem %d pessoas maiores de idade.", final);
}
