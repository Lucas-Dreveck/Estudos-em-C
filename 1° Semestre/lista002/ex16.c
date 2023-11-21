#include <stdio.h>

void main () {
    float saldo_medio, credito;
    printf("Digite o saldo medio: ");
    scanf("%f", &saldo_medio);
    if (saldo_medio <= 200) {
        printf("Nao tem credito");
    } else if (saldo_medio <= 400) {
        credito = saldo_medio * 0.2;
        printf("O seu credito eh: %.2f", credito);
    } else if (saldo_medio <= 600) {
        credito = saldo_medio * 0.3;
        printf("O seu credito eh: %.2f", credito);
    } else {
        credito = saldo_medio * 0.4;
        printf("O seu credito eh: %.2f", credito);
    }
}