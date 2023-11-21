#include "../include/read.h"
#include <stdio.h>
#include <stdlib.h>


void exibirProdutos(Produto *produtos, int totalProdutos) {
    printf("\n********************************************\n");
    printf("*            Produtos Cadastrados          *\n");
    printf("********************************************\n");
    if (totalProdutos == 0) {
        printf("Nenhum produto cadastrado.\n");
    } else {
        printf("\nProdutos cadastrados:\n");
        for (int i = 0; i < totalProdutos; i++) {
            printf("ID: %d, Nome: %s, Valor: %.2f, Estoque: %d\n", produtos[i].idProduto, produtos[i].nomeProduto, produtos[i].valorProduto, produtos[i].quantidadeEstoque);
        }
    }
    printf("\n********************************************\n");
}

void exibirPedidos(Pedido *pedidos, int totalPedidos) {
    printf("\n***********************************************************************************\n");
    printf("*                                   Pedidos Realizados                            *\n");
    printf("***********************************************************************************\n");
    if (totalPedidos == 0) {
        printf("\nNenhum pedido realizado.\n");
    } else {
        printf("\nPedidos realizados:\n");
        for (int i = 0; i < totalPedidos; i++) {
            printf("Nome do retirante: %s\n", pedidos[i].nomeRetirante);
            printf("Data de retirada: %s\n", pedidos[i].dataRetirada);
            printf("Itens do pedido:\n");
            for (int j = 0; j < pedidos[i].totalItens; j++) {
                printf("Produto: %s, Quantidade: %d, Valor Unitário: %.2f, Valor Total Item: %.2f\n", pedidos[i].itens[j].produto.nomeProduto, pedidos[i].itens[j].quantidade, pedidos[i].itens[j].valorUnitario, pedidos[i].itens[j].valorTotalItem);
            }
            printf("Valor Total do Pedido: %.2f\n", pedidos[i].valorTotalPedido);
            printf("\n");
        }
    }
    printf("***********************************************************************************\n");
}
