#include <stdio.h>

void main () {
    float valor;
    printf("Digite um valor: \n");
    scanf("%f", &valor);
    if (valor < 0) {
        printf("Como o valor eh negativo o seu triplo fica em %.2f \n", valor * 3);
    } else if (valor > 0) {
        printf("Como o valor eh positivo o seu dobro fica em %.2f \n", valor * 2);
    } else if (valor == 0) {
        printf("O valor é zero");
    }

}