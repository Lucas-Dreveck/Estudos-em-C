#include <stdio.h>

void main () {
    int id_produto, quantidade;
    float valor;
    
    printf("Digite o id do produto: \n [1] Cachorro quente R$11,00 \n [2] Bauru R$8,50 \n [3] Misto quente R$8,00 \n [4] Hamburger R$9,00 \n [5] Cheeseburguer R$10,00 \n [6] Refrigerante R$4,50 \n");
    scanf("%d", &id_produto);
    printf("Digite quantos deseja: ");
    scanf("%d", &quantidade);
    if (id_produto == 1) {
        valor = quantidade * 11;
    } else if (id_produto == 2) {
        valor = quantidade * 8.5;
    } else if (id_produto == 3) {
        valor = quantidade * 8;
    } else if (id_produto == 4) {
        valor = quantidade * 9;
    } else if (id_produto == 5) {
        valor = quantidade * 10;
    } else if (id_produto == 6) {
        valor = quantidade * 4.5;
    } else {
        printf("Id invalido");
    }
    printf("O valor a pagar eh: R$%.2f", valor);
}