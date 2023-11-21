#include <stdio.h>

void main () {
    int galinhas;
    float chipident,chipalimento, total;
    printf("Digite quantas galinhas tem: ");
    scanf("%d", &galinhas);
    chipident = galinhas * 4;
    chipalimento = galinhas * 2 * 3.5;
    total = chipident + chipalimento;
    printf("Chip de identificacao: %.2f \nChip de alimento: %.2f \nTotal: %.2f", chipident, chipalimento, total);
}