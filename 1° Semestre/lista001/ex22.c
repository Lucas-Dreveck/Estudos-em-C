#include <stdio.h>

void main () {
    int moeda_1, moeda_5, moeda_10, moeda_25, moeda_50, moeda_100;
    float valor;
    printf("Digite quantas moedas voce tem de cada respectivo tipo: \n");
    printf("Moeda de 1 centavo: ");
    scanf("%d", &moeda_1);
    printf("Moeda de 5 centavos: ");
    scanf("%d", &moeda_5);
    printf("Moeda de 10 centavos: ");
    scanf("%d", &moeda_10);
    printf("Moeda de 25 centavos: ");
    scanf("%d", &moeda_25);
    printf("Moeda de 50 centavos: ");
    scanf("%d", &moeda_50);
    printf("Moeda de 1 real: ");
    scanf("%d", &moeda_100);
    valor = moeda_1 * 0.01 + moeda_5 * 0.05 + moeda_10 * 0.10 + moeda_25 * 0.25 + moeda_50 * 0.50 + moeda_100;
    printf("O valor total das moedas e: %.2f", valor);
}