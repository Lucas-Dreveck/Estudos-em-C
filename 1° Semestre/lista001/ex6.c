#include <stdio.h>

void main () {
    float peso, valor;
    printf("Qual o peso do prato: \n");
    scanf("%f", &peso);
    valor = peso * 12;
    printf("Voce tera que pagar %.2f pelo prato.", valor);
}