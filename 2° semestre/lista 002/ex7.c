#include <stdio.h>

void calc_esfera(float R, float *area, float *volume) {
    *area = (4 * 3.14 * R * R);
    *volume = (4 * 3.14 * R * R * R) / 3;
}

int main () {
    float raio, area, volume;
    printf("Escreva o raio da esfera: ");
    scanf("%f", &raio);
    calc_esfera(raio, &area, &volume);
    printf("A area da esfera eh: %.2f\n", area);
    printf("O volume da esfera eh: %.2f\n", volume);
    return 0;
}