#include <stdio.h>

int alterar (int *valor, char *nome, float *real) {
    *valor = 10;
    *nome = 's';
    *real = 1.02;
}

int main () {
    int valor = 1;
    char nome = 'l';
    float real = 1.01;
    printf("O valor inteiro eh %d \nO valor char eh %c \nO valor real eh %.2f\n", valor, nome, real);
    alterar(&valor, &nome, &real);
    printf("O valor inteiro eh %d \nO valor char eh %c \nO valor real eh %.2f", valor, nome, real);
    return 0;
}