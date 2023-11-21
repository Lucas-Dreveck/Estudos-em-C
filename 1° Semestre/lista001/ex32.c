#include <stdio.h>

void main () {
    float peso_quilos, peso_gramas;
    printf("Informe o seu peso em quilos: ");
    scanf("%f", &peso_quilos);
    peso_gramas = peso_quilos * 1000;
    printf("O seu peso em gramas eh: %.2f", peso_gramas);
}