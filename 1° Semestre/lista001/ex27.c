#include <stdio.h>

void main () {
    float valor1, valor2, divisao;
    printf("Informe o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Informe o segundo valor: ");
    scanf("%f", &valor2);
    divisao = valor1 / valor2;
    printf("A divisao entre os dois valores eh: %.2f", divisao);
    
}