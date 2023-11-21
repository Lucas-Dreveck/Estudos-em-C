#include <stdio.h>

void main () {
    float valor1, valor2, valor3, multiplicacao;
    printf("Informe o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Informe o segundo valor: ");
    scanf("%f", &valor2);
    printf("Informe o terceiro valor: ");
    scanf("%f", &valor3);
    multiplicacao = valor1 * valor2 * valor3;
    printf("O resultado da multiplicacao dos valores eh: %.2f", multiplicacao);
}