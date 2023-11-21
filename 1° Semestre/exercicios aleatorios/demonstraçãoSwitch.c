#include <stdio.h>

main () {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    switch (numero) {
        case 0: printf("Zero"); break;
        case 1: printf("Um"); break;
        case 2: printf("Dois"); break;
        case 3: printf("Tres"); break;
        default: printf("O numero digitado eh menor que 0 ou maior que 3"); break;
    }
}