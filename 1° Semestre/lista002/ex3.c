#include <stdio.h>

void main () {
    float valor_a, valor_b;
    printf("Digite o valor de A: \n");
    scanf("%f", &valor_a);
    printf("Digite o valor de B: \n");
    scanf("%f", &valor_b);
    if (valor_a == valor_b) {
        printf("A soma dos valores fica: %.2f \n", valor_a + valor_b);
    } else if (valor_a != valor_b) {
        printf("A multiplicacao dos valores fica: %.2f \n", valor_a * valor_b);
    }
}