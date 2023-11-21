#include <stdio.h>

void main () {
    int numero = 0;
    int i = 1, final = 0;
    while (i <= 20) {
        printf("Digite o %d numero: \n", i, numero);
        scanf("%d", &numero);
        if (numero > 0 && numero < 100) {
            final++;
        }
        i++;
    }
    printf("Existem %d numeros entre 0 e 100.", final);
}
