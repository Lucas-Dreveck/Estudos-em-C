#include <stdio.h>

void main () {
    float diagonal_maior, diagonal_menor, area_losango;
    printf("Digite o valor da diagonal maior: ");
    scanf("%f", &diagonal_maior);
    printf("Digite o valor da diagonal menor: ");
    scanf("%f", &diagonal_menor);
    area_losango = (diagonal_maior * diagonal_menor) / 2;
    printf("A area do losango e: %.2f", area_losango);
}