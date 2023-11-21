#include <stdio.h>
#define salario 1200.00
#define conta1 200.00
#define conta2 120.00
#define juros 0.02
void main () {
    float conta_1, conta_2, resto_salario;
    conta_1 = conta1 + (conta1 * juros);
    conta_2 = conta2 + (conta2 * juros);
    resto_salario = salario - (conta_1 + conta_2);
    printf("Valor da conta 1: %.2f \n", conta_1);
    printf("Valor da conta 2: %.2f \n", conta_2);
    printf("Resto do salario: %.2f \n", resto_salario);
}