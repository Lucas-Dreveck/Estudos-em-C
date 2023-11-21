#include <stdio.h>

void main () {
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    if (valor % 2 == 0) {
        printf("O valor %d eh par e somando 5 a ele fica em %d", valor, valor + 5);
    } else {
        printf("O valor %d eh impar e somando 8 a ele fica em %d", valor, valor + 8);
    }
}