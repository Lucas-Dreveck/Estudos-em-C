#include <stdio.h>

void main () {
    int numero, centena, dezena, unidade;
    printf("Insira um valor inteiro de 3 digitos.\n");
    scanf("%d", &numero);
    centena = numero/100;
    dezena = (numero%100)/10;
    unidade = numero%10;
    printf("Valor inteiro de 3 digitos: %d, centena: %d, dezena: %d, unidade: %d\n", numero, centena, dezena, unidade);
}