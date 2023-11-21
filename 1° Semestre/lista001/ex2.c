#include <stdio.h>
int main() {
    int cavalos, ferraduras;
    printf("Escreva quantos cavalos voce tem: \n");
    scanf("%d", & cavalos);
    ferraduras = cavalos * 4;
    printf("Voce precisara de %d ferraduras para equipar todos os cavalos.", ferraduras);    
}