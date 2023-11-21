#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "../include/main.h"
#include "../include/data.h"
#include "../include/create.h"
#include "../include/read.h"
#include "../include/update.h"
#include "../include/delete.h"
#include "../include/utils.h"

void exibirCabecalho() {
    printf("\n**************************************************\n");
    printf("*     Bem-vindo à Adega Democrática do Primo     *\n");
    printf("**************************************************\n");
}

int main() {
    system(CLEAR);
    setlocale(LC_ALL, "portuguese");
    Produto *produtos = NULL;
    int totalProdutos = 0;
    Pedido *pedidos = NULL;
    int totalPedidos = 0;
    criarBD();
    carregarProdutos(&produtos, &totalProdutos);
    carregarPedidos(&pedidos, &totalPedidos);
    exibirCabecalho();
    int opcao;
    do {
        printf("\nMenu:\n");
        printf("1. Adicionar Produto\n");
        printf("2. Criar Pedido\n");
        printf("3. Atualizar Produto\n");
        printf("4. Atualizar Pedido\n");
        printf("5. Remover Produto\n");
        printf("6. Remover Pedido\n");
        printf("7. Exibir Produtos\n");
        printf("8. Exibir Pedidos\n");
        printf("9. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                system(CLEAR);
                adicionarProduto(&produtos, &totalProdutos);
                salvarProdutos(produtos, totalProdutos);
                break;
            case 2:
                system(CLEAR);
                adicionarPedido(&pedidos, &totalPedidos, produtos, totalProdutos);
                salvarPedidos(pedidos, totalPedidos);
                salvarProdutos(produtos, totalProdutos);
               break;
            case 3:
                system(CLEAR);
                atualizarProduto(produtos, totalProdutos);
                salvarProdutos(produtos, totalProdutos);
                break;
            case 4:
                system(CLEAR);
                atualizarPedido(produtos, totalProdutos, pedidos, &totalPedidos);
                salvarPedidos(pedidos, totalPedidos);
                salvarProdutos(produtos, totalProdutos);
                break;
            case 5:
                system(CLEAR);
                deletarProduto(produtos, &totalProdutos);
                salvarProdutos(produtos, totalProdutos);
                break;
            case 6:
                system(CLEAR);
                deletarPedido(&pedidos, &totalPedidos, &produtos, &totalProdutos);
                salvarPedidos(pedidos, totalPedidos);
                salvarProdutos(produtos, totalProdutos);
                break;
            case 7:
                system(CLEAR);
                exibirProdutos(produtos, totalProdutos);
                printf("Pressione qualquer tecla para voltar ao menu");
                getchar();
                getchar();
                system(CLEAR);
                break;
            case 8:
                system(CLEAR);
                exibirPedidos(pedidos, totalPedidos);
                printf("Pressione qualquer tecla para voltar ao menu");
                getchar();
                getchar();
                system(CLEAR);
                break;
            case 9:
                system(CLEAR);
                printf("Saindo...\n");
                break;
            default:
                system(CLEAR);
                printf("Opção inválida!\n");
        }
    } while (opcao != 9);

    salvarProdutos(produtos, totalProdutos);
    salvarPedidos(pedidos, totalPedidos);
    free(produtos);
    free(pedidos);

    return 0;
}