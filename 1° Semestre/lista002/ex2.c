#include <stdio.h>

void main () {
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    if (valor % 2 == 0) {
        printf("O valor %d eh par", valor);
    } else {
        printf("O valor %d eh impar", valor);
    }
}