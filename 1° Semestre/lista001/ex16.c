#include <stdio.h>

void main () {
    int hamburgers;
    float pesoqueijo, pesopresunto, pesocarne;
    printf("Escreva quantos hamburgers voce deseja fazer: \n");
    scanf("%d", &hamburgers);
    pesoqueijo = hamburgers * 2 * 50 / 1000.0;
    pesopresunto = hamburgers * 50 / 1000.0;
    pesocarne = hamburgers * 100 / 1000.0;
    printf("Para fazer %d hamburgers, voce vai precisar de %.2fkg de queijo, %.2fkg de presunto e %.2fkg de carne.\n", hamburgers, pesoqueijo, pesopresunto, pesocarne);
}