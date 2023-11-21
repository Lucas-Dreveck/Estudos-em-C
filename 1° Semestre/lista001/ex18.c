#include <stdio.h>

void main () {
    float horas, horasext, salarioliq, salariobruto;
    printf("Digite quantas horas trabalhou: ");
    scanf("%f", &horas);
    printf("Digite quantas horas extras trabalhou: ");
    scanf("%f", &horasext);
    salariobruto = (horas * 10) + (horasext * 15);
    salarioliq = salariobruto - (salariobruto * 0.1);
    printf("Salario bruto: %.2f \nSalario liquido: %.2f", salariobruto, salarioliq);
}