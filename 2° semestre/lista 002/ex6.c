#include <stdio.h>

void frac (float num, int *inteiro, float *frac) {
    *inteiro = num;
    *frac = num - *inteiro;

}


int main () {
    float num, fract;
    int inteiro;
    printf("Escreva um numero real para ser dividido entre inteiro e fracionario: ");
    scanf("%f", &num);

    frac(num, &inteiro, &fract);
    printf("Parte inteira: %i\nParte fracionada: %f", inteiro, fract);
    return 0;
}