#include <stdio.h>

void somaPonteiro (int *valorA, int valorB){
    *valorA = *valorA + valorB;
}

int main () {
    int valorA = 0, valorB = 0;
    printf("Escreva dois valores inteiros para serem comparados: \n");
    printf("Primeiro valor: ");
    scanf("%d", &valorA);
    printf("Segundo valor: ");
    scanf("%d", &valorB);
    printf("Estes sao os valores de A e B antes da soma: \n A: %d \n B: %d\n", valorA, valorB);
    somaPonteiro(&valorA, valorB);
    printf("Estes sao os valores de A e B depois da soma: \n A: %d \n B: %d\n", valorA, valorB);
    return 0;
}