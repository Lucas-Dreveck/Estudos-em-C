#include <stdio.h>

void main () {
    int produtos, quantidade_produto, i = 1;
    float total = 0, preco_produto;
    printf("Escreva quantos produtos voce comprou.\n");
    scanf("%d", &produtos);
    while (i <= produtos) {
        printf("Escreva o preco do %d produto.\n", i);
        scanf("%f", &preco_produto);
        printf("Escreva a quantidade do %d produto.\n", i);
        scanf("%d", &quantidade_produto);
        total += (preco_produto * quantidade_produto);
        printf("O valor total ate o momento e R$%.2f.\n", total);
        i++;
    }
}
