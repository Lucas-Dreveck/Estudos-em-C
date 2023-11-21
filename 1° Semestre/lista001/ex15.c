#include <stdio.h>

void main () {
    float conta, felipe, aux1;
    int carlos, andre, aux2;
    printf("Escreva qual o valor da conta: \n");
    scanf("%f", &conta);
    aux1 = conta/3;
    carlos = aux1;
    andre = aux1;
    felipe = aux1 + ((aux1 - carlos) * 2);
    printf("A conta foi de R$%.2f, Carlos pagou R$%d, Andre pagou R$%d e Felipe pagou R$%.2f", conta, carlos, andre, felipe);
}