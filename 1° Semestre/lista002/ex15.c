#include <stdio.h>

void main () {
    float salario, salario_final, diferenca;
    int cargo;
    printf("Digite o seu salario: ");
    scanf("%f", &salario);
    printf("Digite o seu cargo pelo codigo: \n");
    scanf("%d", &cargo);
    if (cargo == 101) {
        salario_final = salario + (salario * 0.1);
    } else if (cargo == 102) {
        salario_final = salario + (salario * 0.2);
    } else if (cargo == 103) {
        salario_final = salario + (salario * 0.3);
    } else {
        salario_final = salario + (salario * 0.4);
    }
    diferenca = salario_final - salario;
    printf("O seu salario era: %.2f e agora eh %.2f, uma diferenca de %.2f", salario, salario_final, diferenca);
}