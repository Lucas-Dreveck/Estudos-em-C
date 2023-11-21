#include <stdio.h>

void main () {
    float total_litros, total_agua, total_maracuja;
    printf("Informe a quantidade de litros de suco de maracuja: ");
    scanf("%f", &total_litros);
    total_agua = total_litros * 0.8;
    total_maracuja = total_litros * 0.2;
    printf("A quantidade de agua necessaria para fazer o suco eh: %.2f litros e a quantidade de maracuja eh: %.2f litros", total_agua, total_maracuja);
}