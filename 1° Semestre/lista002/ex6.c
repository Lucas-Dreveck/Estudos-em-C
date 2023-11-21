#include <stdio.h>

void main () {
    float valor_1, valor_2, valor_3;
    printf("Digite o primeiro valor: \n");
    scanf("%f", &valor_1);
    printf("Digite o segundo valor: \n");
    scanf("%f", &valor_2);
    printf("Digite o terceiro valor: \n");
    scanf("%f", &valor_3);
    printf ("Os valores em ordem decrescente são: \n");
    if (valor_1 > valor_2 && valor_1 > valor_3) {
        if (valor_2 > valor_3) {
            printf("%.2f, %.2f, %.2f \n", valor_1,valor_2,valor_3);
        } else {
            printf("%.2f, %.2f, %.2f \n", valor_1, valor_3, valor_2);
        }
    } else if (valor_2 > valor_1 && valor_2 > valor_3) {
        if (valor_1 > valor_3) {
            printf("%.2f, %.2f, %.2f \n", valor_2, valor_1, valor_3);
        } else {
            printf("%.2f, %.2f, %.2f \n", valor_2, valor_3, valor_1);
        }
    } else if (valor_3 > valor_1 && valor_3 > valor_2) {
        if (valor_1 > valor_2) {
            printf("%.2f, %.2f, %.2f \n", valor_3, valor_1, valor_2);
        } else {
            printf("%.2f, %.2f, %.2f \n", valor_3, valor_2, valor_1);
        }
    }
}