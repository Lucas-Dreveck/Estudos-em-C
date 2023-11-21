#include <stdio.h>

void main () {
    float valor_a, valor_b;
    printf("Digite o valor de A: \n");
    scanf("%f", &valor_a);
    printf("Digite o valor de B: \n");
    scanf("%f", &valor_b);
    if (valor_a > valor_b) {
        printf("O valor de A eh maior que o valor de B \n");
    } else if (valor_a < valor_b) {
        printf("O valor de B eh maior que o valor de A \n");
    } else {
        printf("Os valores de A e B sao iguais \n");
    }

}