#include <stdio.h>

void main () {
    int valortabuada;
    printf("Digite o valor da tabuada: \n");
    scanf("%d", &valortabuada);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d \n", valortabuada, i, valortabuada * i);
}
}