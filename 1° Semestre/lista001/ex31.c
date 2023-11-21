#include <stdio.h>

void main () {
    float peso, novopesogordo, novopesomagro;
    printf("Informe o seu peso: ");
    scanf("%f", &peso);
    novopesogordo = peso * 1.15;
    novopesomagro = peso * 0.80;
    printf("O seu peso se engordar 15%% eh: %.2f e se emagrecer 20%% eh: %.2f", novopesogordo, novopesomagro);
}