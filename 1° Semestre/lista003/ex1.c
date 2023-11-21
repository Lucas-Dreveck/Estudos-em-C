#include <stdio.h>

void main () {
    char nome[20];
    int i = 1;
    printf("Digite seu nome: ");
    fgets(nome, 20, stdin);
    while ( i <= 10) {
        printf("%s \n", nome);
        i++;
    }
}