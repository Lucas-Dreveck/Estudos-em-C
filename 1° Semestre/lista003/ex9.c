#include <stdio.h>

void main () {
    int numero = 0;
    int i = 1, final = 0, aux = 0;
    while (i <= 10) {
        if (i == 1) {
            printf("Digite a idade da %d pessoa: \n", i, aux);
            scanf("%d", &aux);  
        }
        printf("Digite a idade da %d pessoa: \n", i, numero);
        scanf("%d", &numero);
        if (numero < aux) {
            aux = numero;
        }
        i++;
    }
    printf("A pessoa mais nova eh: %d", aux);
}
