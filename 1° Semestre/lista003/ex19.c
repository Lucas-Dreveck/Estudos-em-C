#include <stdio.h>

void main () {
    float bebidas, quilos, total = 0;

    while (bebidas != 0 || quilos !=0) {
        printf("Qual o valor gasto com bebidas?\n");
        scanf("%f", &bebidas);
        printf("Qual o peso do prato em quilos?\n");
        scanf("%f", &quilos);
        total = bebidas + (quilos * 20);
        printf("O valor final da conta e R$%.2f. \n", total);
    } 
}