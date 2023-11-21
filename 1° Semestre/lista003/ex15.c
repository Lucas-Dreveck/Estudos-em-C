#include <stdio.h>

void main () {
    int quantidade = 0, i = 1, numero = 0, final = 0;
    printf ("Escreva quantos numeros voce quer: \n");
    scanf ("%d", &quantidade);
    while (i <= quantidade) {
        printf ("Escreva o %d numero \n", i);
        scanf ("%d", &numero);
        if (numero >= 0) {
            final+= numero;
        } else {
            printf("Voce digitou um numero negativo entao o programa sera encerrado \n");
            printf("A soma dos numeros positivos eh: %d \n", final);
            break;
        }
        printf("A soma dos numeros positivos eh: %d \n", final);
        i++;
    }
}