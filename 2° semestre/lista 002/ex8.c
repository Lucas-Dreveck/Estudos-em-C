#include <stdio.h>

void converteHora(int totalSegundos, int *hora, int *min, int *seg) {
    *hora = totalSegundos / 3600;
    *min = (totalSegundos % 3600) / 60;
    *seg = (totalSegundos % 3600) % 60;
}

int main () {
    int totalSegundos, hora, min, seg;
    printf("Escreva quantos segundos para consersao em HH:MM:SS. \n");
    scanf("%d", &totalSegundos);
    converteHora(totalSegundos, &hora, &min, &seg);
    printf("O tempo convertido ficou: %d:%d:%d", hora, min, seg);
    return 0;
}