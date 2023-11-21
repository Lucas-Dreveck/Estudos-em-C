#include <stdio.h>
#include <math.h>

void main () {
    
    int valor, nota_100, nota_50, nota_10, nota_5, nota_1;
    printf("Digite o valor: ");
    scanf("%d", &valor);
    nota_100 = valor / 100;
    nota_50 = (valor % 100) / 50;
    nota_10 = ((valor % 100) % 50) / 10;
    nota_5 = (((valor % 100) % 50) % 10) / 5;
    nota_1 = ((((valor % 100) % 50) % 10) % 5) / 1;
    printf("Notas de 100: %d \n Notas de 50: %d \n Notas de 10: %d \n Notas de 5: %d \n Notas de 1: %d", nota_100, nota_50, nota_10, nota_5, nota_1);
}