#include <stdio.h>
int main () {
    float largura, comprimento, area;
    printf("Escreva a largura do terreno em metros: \n");
    scanf("%d", & largura);
    printf("Escreva a comprimento do terreno em metros: \n");
    scanf("%d", & comprimento);
    area = largura*comprimento;
    printf("A area do terreno: %d metros.", area);

}

