#include <stdio.h>

void main () {
    float lado1, lado2, area;
    printf("Informe o lado 1 do quadrado: ");
    scanf("%f", &lado1);
    printf("Informe o lado 2 do quadrado: ");
    scanf("%f", &lado2);
    area = lado1 * lado2;
    printf("A area do retangulo eh: %.2f", area);
}