#include <stdio.h>

void main () {
    float valor_carro, valor_final;
    int ano_carro;
    printf("Digite o valor do carro: ");
    scanf("%f", &valor_carro);
    printf("Digite o ano do carro: ");
    scanf("%d", &ano_carro);
    if (ano_carro < 1990) {
        valor_final = valor_carro + (valor_carro * 0.01);
    } else {
        valor_final = valor_carro + (valor_carro * 0.015);
    }
    printf("O valor final do carro e: %.2f", valor_final);
}