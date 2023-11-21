#include <stdio.h>

void main () {
    float salario, salarioplus, salarioimpostos;
    printf("Insira o seu salario: \n");
    scanf("%f", &salario);
    salarioplus = salario*1.15;
    salarioimpostos = salarioplus*0.92;
    printf("O seu salario era %.2f, apos aumento ficou em %.2f e apos impostos e %.2f",salario, salarioplus, salarioimpostos);

}