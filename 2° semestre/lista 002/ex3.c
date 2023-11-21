#include <stdio.h>

int compararEnderecos (int *valorA, int *valorB){
    printf("Este eh o endereco de A: %x e este eh o endereco de B %x\n", valorA, valorB);
    return (valorA > valorB) ? *valorA : *valorB;
}

int main () {
    int valorA = 0, valorB = 0;
    printf("Escreva dois valores inteiros para serem comparados: \n");
    printf("Primeiro valor: ");
    scanf("%d", &valorA);
    printf("Segundo valor: ");
    scanf("%d", &valorB);
    printf("O maior valor eh: %d", compararEnderecos(&valorA, &valorB));
    return 0;
}