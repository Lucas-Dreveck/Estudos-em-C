#include <stdio.h>

int soma_algarismos (int numero) {
    if (numero == 0) {
        return 0;
    } else {
        printf("Algarismo: %d \n", numero%10);
        return numero%10 + soma_algarismos(numero/10);
    }
}

int main () {
    int numero;
    printf("Escreva um numero para ser somado os seus algarismos: ");
    scanf("%d", &numero);
    printf("A soma dos algarismos deste numero eh igual a: %d", soma_algarismos(numero));
    return 0;
}