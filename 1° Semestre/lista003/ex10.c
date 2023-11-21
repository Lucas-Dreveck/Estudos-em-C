#include <stdio.h>

void main () {
    int numero = 0, i = 1, final = 0;
    printf("Digite o numero: \n");
    scanf("%d", &numero);
    while (i <= 10) {
        final = numero * i;
        printf("%d x %d = %d \n", numero, i, final);
        i++;
    }
}