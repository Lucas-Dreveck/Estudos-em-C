#include <stdio.h>

void main () {
    int i = 1;
    int num = 0;
    while (i <= 15) {
        num += i;
        i++;
    }
    printf("A soma dos numeros de 1 a 15 eh: %d", num);
}