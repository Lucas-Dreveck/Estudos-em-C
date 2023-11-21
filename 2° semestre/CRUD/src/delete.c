#include "../include/delete.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "../include/main.h"
#include "../include/utils.h"

void deletarProduto(Produto *produtos, int *totalProdutos) {
    printf("\n********************************************\n");
    printf("*            Produtos Cadastrados          *\n");
    printf("********************************************\n");
    if ((*totalProdutos) == 0) {
        printf("Nenhum produto cadastrado.\n");
    } else {
        printf("\nProdutos cadastrados:\n");
        for (int i = 0; i < (*totalProdutos); i++) {
            printf("ID: %d, Nome: %s, Valor: %.2f, Estoque: %d\n", produtos[i].idProduto, produtos[i].nomeProduto, produtos[i].valorProduto, produtos[i].quantidadeEstoque);
        }
    }
    printf("\n********************************************\n");

    char idInput[50];
    printf("Digite o ID do produto: ");
    scanf(" %[^\n]s", idInput);

    bool isNumeric = true;
    for (int i = 0; idInput[i] != '\0'; i++) {
        if (!isdigit(idInput[i])) {
            isNumeric = false;
            break;
        }
    }

    if (!isNumeric) {
        system(CLEAR);
        printf("Entrada inválida para o ID do produto. Deve ser um número inteiro.\n");
        return;
    }
    int idProduto;
    idProduto = atoi(idInput);
    int found = 0;
    for (int i = 0; i < (*totalProdutos); i++) {
        if (produtos[i].idProduto == idProduto) {
            found = 1;
            system(CLEAR);
            printf("Produto encontrado:\n");
            printf("Produto: %s, Valor: %.2f, Estoque: %d\n", produtos[i].nomeProduto, produtos[i].valorProduto, produtos[i].quantidadeEstoque);
            char confirmacao;
            printf("\nDeseja realmente excluir o produto? (S/N): ");
            scanf(" %c", &confirmacao);
            if(confirmacao == 'S' || confirmacao == 's') {
                for (int j = i; j < (*totalProdutos); j++) {
                    produtos[j] = produtos[j + 1];
                }
                *totalProdutos -= 1;
                system(CLEAR);
                printf("Produto excluido com sucesso!\n\n");
                produtos = realloc(produtos, sizeof(Produto) * (*totalProdutos));
                return;
            } else {
                system(CLEAR);
                printf("Produto não excluido!\n\n");
                return;
            }
        }
    }
    if (!found) {
            system(CLEAR);
            printf("Produto não encontrado!\n\n");
            return;
    }
}

void deletarPedido(Pedido **pedidos, int *totalPedidos, Produto **produtos, int *totalProdutos) {
        printf("\n***********************************************************************************\n");
    printf("*                                   Pedidos Realizados                            *\n");
    printf("***********************************************************************************\n");
    if ((*totalPedidos) == 0) {
        printf("\nNenhum pedido realizado.\n");
    } else {
        printf("\nPedidos realizados:\n");
        for (int i = 0; i < (*totalPedidos); i++) {
            printf("Nome do retirante: %s\n", (*pedidos)[i].nomeRetirante);
            printf("Data de retirada: %s\n", (*pedidos)[i].dataRetirada);
            printf("Itens do pedido:\n");
            for (int j = 0; j < (*pedidos)[i].totalItens; j++) {
                printf("Produto: %s, Quantidade: %d, Valor Unitário: %.2f, Valor Total Item: %.2f\n", (*pedidos)[i].itens[j].produto.nomeProduto, (*pedidos)[i].itens[j].quantidade, (*pedidos)[i].itens[j].valorUnitario, (*pedidos)[i].itens[j].valorTotalItem);
            }
            printf("Valor Total do Pedido: %.2f\n", (*pedidos)[i].valorTotalPedido);
            printf("\n");
        }
    }
    printf("***********************************************************************************\n");
    char nomeRetirante[50];
    printf("\nDigite o nome do retirante para remover o pedido: ");
    scanf(" %[^\n]s", nomeRetirante);

    int numPedidosEncontrados = 0;
    int *indicesPedidos = NULL;

    for (int i = 0; i < (*totalPedidos); i++) {
        if (strcmp((*pedidos)[i].nomeRetirante, nomeRetirante) == 0) {
            numPedidosEncontrados++;
            indicesPedidos = (int *)realloc(indicesPedidos, numPedidosEncontrados * sizeof(int));
            indicesPedidos[numPedidosEncontrados - 1] = i;
        }
    }

    if (numPedidosEncontrados == 0) {
        system(CLEAR);
        printf("Pedido não encontrado!\n");
        free(indicesPedidos);
        return;
    }

    system(CLEAR);
    printf("Pedidos encontrados:\n\n");

    for (int i = 0; i < numPedidosEncontrados; i++) {
        int pedidoIndex = indicesPedidos[i];
        printf("[%d] Nome do retirante: %s\n", i + 1, (*pedidos)[pedidoIndex].nomeRetirante);
        printf("    Data de retirada: %s\n", (*pedidos)[pedidoIndex].dataRetirada);

        printf("    Itens do pedido:\n");
        for (int j = 0; j < (*pedidos)[pedidoIndex].totalItens; j++) {
            printf("    - Produto: %s, Quantidade: %d, Valor Unitário: %.2f, Valor Total Item: %.2f\n",
                   (*pedidos)[pedidoIndex].itens[j].produto.nomeProduto,
                   (*pedidos)[pedidoIndex].itens[j].quantidade,
                   (*pedidos)[pedidoIndex].itens[j].valorUnitario,
                   (*pedidos)[pedidoIndex].itens[j].valorTotalItem);
        }

        printf("    Valor Total do Pedido: %.2f\n", (*pedidos)[pedidoIndex].valorTotalPedido);
        printf("\n");
    }

    printf("Escolha o número do pedido que deseja manipular (1 a %d): ", numPedidosEncontrados);
    int escolha;
    scanf("%d", &escolha);

    if (escolha < 1 || escolha > numPedidosEncontrados) {
        system(CLEAR);
        printf("Opção inválida!\n\n");
    } else {
        int pedidoIndex = indicesPedidos[escolha - 1];
        system(CLEAR);
        printf("Pedido selecionado:\n");
        printf("Nome do retirante: %s\n", (*pedidos)[pedidoIndex].nomeRetirante);
        printf("Data de retirada: %s\n", (*pedidos)[pedidoIndex].dataRetirada);

        printf("Itens do pedido:\n");
        for (int j = 0; j < (*pedidos)[pedidoIndex].totalItens; j++) {
            printf("- Produto: %s, Quantidade: %d, Valor Unitário: %.2f, Valor Total Item: %.2f\n",
                   (*pedidos)[pedidoIndex].itens[j].produto.nomeProduto,
                   (*pedidos)[pedidoIndex].itens[j].quantidade,
                   (*pedidos)[pedidoIndex].itens[j].valorUnitario,
                   (*pedidos)[pedidoIndex].itens[j].valorTotalItem);
        }
        printf("Valor Total do Pedido: %.2f\n", (*pedidos)[pedidoIndex].valorTotalPedido);

        char opcao;
        printf("\nDeseja:\n");
        printf("1. Excluir o pedido\n");
        printf("2. Marcar como realizado\n");
        printf("Escolha a opção (1/2): ");
        scanf(" %c", &opcao);

        if (opcao == '1') {
            for (int j = 0; j < (*pedidos)[pedidoIndex].totalItens; j++) {
                int produtoID = (*pedidos)[pedidoIndex].itens[j].produto.idProduto;
                for (int k = 0; k < (*totalProdutos); k++) {
                    if ((*produtos)[k].idProduto == produtoID) {
                        (*produtos)[k].quantidadeEstoque += (*pedidos)[pedidoIndex].itens[j].quantidade;
                        break;
                    }
                }
            }
            for (int j = pedidoIndex; j < (*totalPedidos) - 1; j++) {
                (*pedidos)[j] = (*pedidos)[j + 1];
            }
            (*totalPedidos)--;
            (*pedidos) = (Pedido *)realloc((*pedidos), sizeof(Pedido) * (*totalPedidos));
            system(CLEAR);
            printf("Pedido excluído com sucesso!\n\n");
        } else if (opcao == '2') {
            for (int j = pedidoIndex; j < (*totalPedidos) - 1; j++) {
                (*pedidos)[j] = (*pedidos)[j + 1];
            }
            (*totalPedidos)--;
            (*pedidos) = (Pedido *)realloc((*pedidos), sizeof(Pedido) * (*totalPedidos));
            system(CLEAR);
            printf("Pedido marcado como realizado!\n\n");
        } else {
            system(CLEAR);
            printf("Opção inválida!\n\n");
        }
    }

    free(indicesPedidos);
}
