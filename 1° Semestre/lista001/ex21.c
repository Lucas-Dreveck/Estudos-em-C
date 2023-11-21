#include <stdio.h>

void main () {
    int lata, garrafa, garrafa_litro;
    float total;
    printf("Quantas latas foram compradas: \n");
    scanf("%d", &lata);
    printf("Quantas garrafas foram compradas: \n");
    scanf("%d", &garrafa);
    printf("Quantas garrafas de 2 litros foram compradas: \n");
    scanf("%d", &garrafa_litro);
    total = (lata * 0.35) + (garrafa * 0.60) + (garrafa_litro * 2.0);
    printf("O total de refrigerante comprado foi: %.2f", total);
}