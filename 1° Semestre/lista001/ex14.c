#include <stdio.h>

void main () {
    float raio, areapizza;
    printf("Insira o raio da pizza. \n");
    scanf("%f", &raio);
    areapizza = 3.14 * (raio * raio);
    printf("A area da pizza e: %.2f", areapizza);
}