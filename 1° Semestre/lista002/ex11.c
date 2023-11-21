#include <stdio.h>

void main () {
    int nivel_do_professor, quantidade_de_aulas;
    float  salario;
    printf("Digite o nivel do professor (1 para nivel 1, 2 para nivel 2 e 3 para nivel 3): \n");
    scanf("%d", &nivel_do_professor);
    printf("Digite a quantidade de aulas semanais: \n");
    scanf("%d", &quantidade_de_aulas);
    if (nivel_do_professor == 1) {
        salario = 12 * quantidade_de_aulas * 4.5;
    } else if (nivel_do_professor == 2) {
        salario = 17 * quantidade_de_aulas * 4.5;
    } else if (nivel_do_professor == 3) {
        salario = 25 * quantidade_de_aulas * 4.5;
    } else {
        printf("Nivel do professor invalido \n");
    }
    printf("O salario do professor eh de %.1f \n", salario);
}