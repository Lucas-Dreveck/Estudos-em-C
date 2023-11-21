#include <stdio.h>

void main () {
    int valor_a, valor_b;
    printf("Digite o valor de A: \n");
    scanf("%d", &valor_a);
    printf("Digite o valor de B: \n");
    scanf("%d", &valor_b);
    if (valor_a > valor_b) {
        printf("A diferenca entre A e B eh de %d  \n", valor_a - valor_b);
    } else if (valor_a < valor_b) {
        printf("A diferenca entre B e A eh de %d \n", valor_b - valor_a);
    } else {
        printf("Os valores de A e B sao iguais \n");
    }

}