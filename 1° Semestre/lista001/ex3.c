#include <stdio.h>
int main() {
    int paes, broas;
    float venda, poupanca;
    printf("Escreva quantos paes foram vendidos: \n");
    scanf("%d", &paes);
    printf("Escreva quantos broas foram vendidos: \n");
    scanf("%d", &broas);
    venda = (paes * 0.12) + (broas * 1.5);
    poupanca = (venda / 10);
    printf("O total de vendas foi %.2f e voce deve guardar %.2f na sua poupanca.", venda, poupanca);

}