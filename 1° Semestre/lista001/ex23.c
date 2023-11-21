#include <stdio.h>

void main () {
    float tamanho, tamanho_sombra, predio, predio_sombra;
    printf("Digite o seu tamanho: ");
    scanf("%f", &tamanho);
    printf("Digite o tamanho da sua sombra: ");
    scanf("%f", &tamanho_sombra);
    printf("Digite o tamanho da sombra do predio: ");
    scanf("%f", &predio_sombra);
    predio = (tamanho * predio_sombra) / tamanho_sombra;
    printf("O tamanho do predio e: %.2f", predio);
}