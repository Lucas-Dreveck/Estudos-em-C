#include <stdio.h>

void main () {
    float salario, comissao, valorcomissao, novosalario;
    printf("Informe o salario do vendedor: ");
    scanf("%f", &salario);
    printf("Informe o valor total das vendas: ");
    scanf("%f", &comissao);
    valorcomissao = comissao * 0.04;
    novosalario = salario + valorcomissao;
    printf("A comissao ganha pelo vendedor eh de %.2f e o seu salario ficou em %.2f", valorcomissao, novosalario);
}