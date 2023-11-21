#include <stdio.h>

void main () {
    float salario_minimo, salario_funcionario, quantidade_salarios;
    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario_minimo);
    printf("Digite o valor do salario do funcionario: ");
    scanf("%f", &salario_funcionario);
    quantidade_salarios = salario_funcionario / salario_minimo;
    printf("A quantidade de salarios minimos que o funcionario ganha e: %.2f", quantidade_salarios);
}