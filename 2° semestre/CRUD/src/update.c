#include "../include/update.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "../include/utils.h"

void atualizarProduto(Produto *produtos, int totalProdutos) {
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

    Produto *produtoParaAtualizar = NULL;
    for (int i = 0; i < totalProdutos; i++) {
        if (produtos[i].idProduto == idProduto) {
            produtoParaAtualizar = &produtos[i];
            break;
        }
    }

    if (produtoParaAtualizar) {
        system(CLEAR);
        printf("Produto: %s\n", produtoParaAtualizar->nomeProduto);
        printf("1. Atualizar quantidade em estoque\n");
        printf("2. Atualizar valor do produto\n");
        printf("Escolha uma opção: ");
        int opcao;
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                system(CLEAR);
                printf("Estoque atual: %d\n", produtoParaAtualizar->quantidadeEstoque);
                int novoEstoque;
                printf("Digite o novo valor do estoque: ");
                scanf("%d", &novoEstoque);
                char confirmacao;
                printf("Confirma a atualização de estoque? (S para sim, qualquer tecla para não): ");
                scanf(" %c", &confirmacao);
                if (confirmacao == 'S' || confirmacao == 's') {
                    produtoParaAtualizar->quantidadeEstoque = novoEstoque;
                    system(CLEAR);
                    printf("Estoque do produto %s atualizado para %d unidades.\n\n", produtoParaAtualizar->nomeProduto, produtoParaAtualizar->quantidadeEstoque);
                } else {
                    system(CLEAR);
                    printf("Atualização de estoque cancelada.\n");
                }
                break;
            case 2:
                system(CLEAR);
                printf("Valor atual do produto: %.2f\n", produtoParaAtualizar->valorProduto);
                float novoValor;
                printf("Digite o novo valor do produto: ");
                scanf("%f", &novoValor);
                char confirmacaoValor;
                printf("Confirma a atualização do valor? (S para sim, qualquer tecla para não): ");
                scanf(" %c", &confirmacaoValor);
                if (confirmacaoValor == 'S' || confirmacaoValor == 's') {
                    produtoParaAtualizar->valorProduto = novoValor;
                    system(CLEAR);
                    printf("Valor do produto %s atualizado para %.2f.\n\n", produtoParaAtualizar->nomeProduto, produtoParaAtualizar->valorProduto);
                } else {
                    system(CLEAR);
                    printf("Atualização do valor cancelada.\n\n");
                }
                break;
            default:
                system(CLEAR);
                printf("Opção inválida!\n\n");
        }
    } else {
        system(CLEAR);
        printf("Produto não encontrado!\n\n");
    }
}

void atualizarPedido(Produto *produtos, int totalProdutos, Pedido *pedidos, int *totalPedidos) {
    printf("\n***********************************************************************************\n");
    printf("*                                   Pedidos Realizados                            *\n");
    printf("***********************************************************************************\n");
    if ((*totalPedidos) == 0) {
        printf("\nNenhum pedido realizado.\n");
    } else {
        printf("\nPedidos realizados:\n");
        for (int i = 0; i < (*totalPedidos); i++) {
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

    char nomeRetirante[50];
    printf("Digite o nome do retirante para atualizar o pedido: ");
    scanf(" %[^\n]s", nomeRetirante);

    int pedidoEncontrado = 0;

    for (int i = 0; i < *totalPedidos; i++) {
        if (strcmp(pedidos[i].nomeRetirante, nomeRetirante) == 0) {
            pedidoEncontrado = 1;
            system(CLEAR);
            printf("Pedido encontrado:\n");
            printf("Nome do retirante: %s\n", pedidos[i].nomeRetirante);
            printf("Data de retirada: %s\n", pedidos[i].dataRetirada);
            printf("Itens do pedido:\n");
            for (int j = 0; j < pedidos[i].totalItens; j++) {
                printf("Produto: %s, Quantidade: %d, Valor Unitário: %.2f, Valor Total Item: %.2f\n", pedidos[i].itens[j].produto.nomeProduto, pedidos[i].itens[j].quantidade, pedidos[i].itens[j].valorUnitario, pedidos[i].itens[j].valorTotalItem);
            }
            printf("Valor Total do Pedido: %.2f\n", pedidos[i].valorTotalPedido);
            printf("\n");

            int opcao;
            printf("O que você deseja fazer?\n");
            printf("1. Adicionar Item\n");
            printf("2. Remover Item\n");
            printf("Escolha uma opção: ");
            scanf("%d", &opcao);

            switch (opcao) {
                case 1:
                    system(CLEAR);
                    printf("Adicionando um novo item ao pedido:\n");
                    if (pedidos[i].totalItens >= 50) {
                        printf("Erro: Pedido já possui o máximo de itens (50)!\n\n");
                        break;
                    }
                    exibirProdutos(produtos, totalProdutos);
                    int idProduto;
                    printf("Digite o ID do produto a ser adicionado: ");
                    scanf("%d", &idProduto);
                    int produtoEncontrado = 0;

                    for (int k = 0; k < totalProdutos; k++) {
                        if (produtos[k].idProduto == idProduto) {
                            ItemPedido novoItem;
                            novoItem.produto = produtos[k];
                            printf("Digite a quantidade desse produto: ");
                            scanf("%d", &novoItem.quantidade);

                            if (novoItem.quantidade > produtos[k].quantidadeEstoque) {
                                printf("Erro: Quantidade solicitada é maior que a quantidade em estoque!\n\n");
                                break;
                            }

                            novoItem.valorUnitario = produtos[k].valorProduto;
                            novoItem.valorTotalItem = novoItem.quantidade * novoItem.valorUnitario;

                            int itemExistente = 0;
                            for (int j = 0; j < pedidos[i].totalItens; j++) {
                                if (strcmp(pedidos[i].itens[j].produto.nomeProduto, novoItem.produto.nomeProduto) == 0 &&
                                    pedidos[i].itens[j].valorUnitario == novoItem.valorUnitario) {
                                    pedidos[i].itens[j].quantidade += novoItem.quantidade;
                                    pedidos[i].itens[j].valorTotalItem += novoItem.valorTotalItem;
                                    itemExistente = 1;
                                    break;
                                }
                            }

                            if (!itemExistente) {
                                pedidos[i].itens[pedidos[i].totalItens] = novoItem;
                                pedidos[i].totalItens++;
                            }

                            pedidos[i].valorTotalPedido += novoItem.valorTotalItem;

                            produtos[k].quantidadeEstoque -= novoItem.quantidade;
                            system(CLEAR);
                            printf("Item adicionado com sucesso!\n\n");
                            produtoEncontrado = 1;
                            break;
                        }
                    }

                    if (!produtoEncontrado) {
                        system(CLEAR);
                        printf("Produto não encontrado!\n\n");
                    }

                    break;
                case 2:
                    system(CLEAR);
                    printf("Removendo um item do pedido:\n");
                    if (pedidos[i].totalItens <= 0) {
                        printf("Erro: O pedido não possui itens para remover!\n\n");
                        break;
                    }

                    printf("Itens no pedido:\n");
                    for (int j = 0; j < pedidos[i].totalItens; j++) {
                        printf("%d. Produto: %s, Quantidade: %d\n", j + 1, pedidos[i].itens[j].produto.nomeProduto, pedidos[i].itens[j].quantidade);
                    }

                    int itemIndex;
                    int quantToRemove;
                    printf("Digite o número do item a ser removido: ");
                    scanf("%d", &itemIndex);
                    itemIndex--;

                    if (itemIndex >= 0 && itemIndex < pedidos[i].totalItens) {
                        printf("Digite a quantidade a ser removida (0 para remover todos): ");
                        scanf("%d", &quantToRemove);

                        if (quantToRemove <= 0 || quantToRemove >= pedidos[i].itens[itemIndex].quantidade) {
                            quantToRemove = pedidos[i].itens[itemIndex].quantidade;
                        }

                        int produtoIndex = -1;
                        for (int k = 0; k < totalProdutos; k++) {
                            if (strcmp(pedidos[i].itens[itemIndex].produto.nomeProduto, produtos[k].nomeProduto) == 0) {
                                produtoIndex = k;
                                break;
                            }
                        }

                        if (produtoIndex != -1) {
                            produtos[produtoIndex].quantidadeEstoque += quantToRemove;
                        }

                        pedidos[i].itens[itemIndex].quantidade -= quantToRemove;
                        pedidos[i].itens[itemIndex].valorTotalItem -= pedidos[i].itens[itemIndex].valorUnitario * quantToRemove;
                        pedidos[i].valorTotalPedido -= pedidos[i].itens[itemIndex].valorUnitario * quantToRemove;

                        if (pedidos[i].itens[itemIndex].quantidade <= 0) {
                            for (int j = itemIndex; j < pedidos[i].totalItens - 1; j++) {
                                pedidos[i].itens[j] = pedidos[i].itens[j + 1];
                            }
                            pedidos[i].totalItens--;
                        }

                        system(CLEAR);
                        printf("Item removido com sucesso!\n\n");
                    } else {
                        system(CLEAR);
                        printf("Erro: Número de item inválido!\n\n");
                    }

                    break;
                default:
                    system(CLEAR);
                    printf("Opção inválida!\n");
            }
            pedidos[i].valorTotalPedido = 0;
            for (int j = 0; j < pedidos[i].totalItens; j++) {
                pedidos[i].valorTotalPedido += pedidos[i].itens[j].valorTotalItem;
            }

            break;
        }
    }

    if (!pedidoEncontrado) {
        system(CLEAR);
        printf("Pedido não encontrado!\n\n");
    }
}