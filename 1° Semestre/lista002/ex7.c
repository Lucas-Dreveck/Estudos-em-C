#include <stdio.h>

void main () {
    int sexo;
    float altura, peso_ideal;
    printf("Digite o sexo (1 para masculino e 2 para feminino): \n");
    scanf("%d", &sexo);
    printf("Digite a altura: \n");
    scanf("%f", &altura);
    if (sexo == 1) {
        peso_ideal = (72.7 * altura) - 58;
    } else if (sexo == 2) {
        peso_ideal = (62.1 * altura) - 44.7;
    }
    printf("O peso ideal eh: %.2f \n", peso_ideal);
}