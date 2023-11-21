#include <stdio.h>

void main () {
    int i = 1;
    int final = 0;
    printf("Digite o numero final: ");
    scanf("%d", &final);
    while (i <= final) {
        printf("Esta eh a mensagem %d \n", i);
        i++;
    }
}