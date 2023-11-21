#include <stdio.h>

void main () {
    float preco, novopreco;
    printf("Informe o preco do produto: ");
    scanf("%f", &preco);
    novopreco = preco * 0.9;
    printf("O novo preco do produto eh: %.2f", novopreco);
}