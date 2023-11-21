#include <stdio.h>

 main1 () {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    if (numero == 0) {
        printf("Zero");
    } else if (numero == 1) {
        printf("Um");
    } else if (numero == 2) {
        printf("Dois");
    } else if (numero == 3) {
        printf("Tres");
    } else {
        printf("O numero digitado eh menor que 0 ou maior que 3");
    }
    
}