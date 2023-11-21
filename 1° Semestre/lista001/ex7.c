#include <stdio.h>

void main () {
    int mes, dia, inicio; 
    printf("Que dias e hoje: \n");
    scanf("%d", &dia);
    printf("Que mes e: \n");
    scanf("%d", &mes);
    inicio = (mes-1)*30 + dia;
    printf("Fazem %d dias que comecou o ano.", inicio);
}