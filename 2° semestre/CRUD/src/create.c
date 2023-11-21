#include "../include/create.h"
#include "../include/utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>


void adicionarProduto(Produto **produtos, int *totalProdutos) {
    Produto novoProduto;

    printf("=======================================\n");
    printf("          Adicionar Produto           \n");
    printf("=======================================\n");

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
    novoProduto.idProduto = atoi(idInput);

    for (int i = 0; i < *totalProdutos; i++) {
        if ((*produtos)[i].idProduto == novoProduto.idProduto) {
            system(CLEAR);
            printf("Já existe um produto com o mesmo ID. Produto não adicionado.\n");
            return;
        }
    }


    printf("Digite o nome do produto: ");
    scanf(" %[^\n]s", novoProduto.nomeProduto);
    printf("Digite o valor do produto: ");
    scanf("%f", &novoProduto.valorProduto);
    printf("Digite a quantidade em estoque: ");
    scanf("%d", &novoProduto.quantidadeEstoque);

    Produto *novoArray = (Produto *)realloc(*produtos, ((*totalProdutos) + 1) * sizeof(Produto));
    if (novoArray) {
        (*totalProdutos)++;
        *produtos = novoArray;
        (*produtos)[(*totalProdutos) - 1] = novoProduto;
        system(CLEAR);
        printf("Produto adicionado com sucesso!\n\n");
    } else {
        printf("Erro ao alocar memória para o novo produto!\n");
    }
}

void adicionarPedido(Pedido **pedidos, int *totalPedidos, Produto *produtos, int totalProdutos) {
    Pedido novoPedido;

    printf("=======================================\n");
    printf("           Adicionar Pedido           \n");
    printf("=======================================\n");

    printf("Digite o nome da pessoa que vai retirar: ");
    scanf(" %[^\n]s", novoPedido.nomeRetirante);
    
    do {
        printf("Digite a data de retirada (dd/mm/yyyy): ");
        scanf("%s", novoPedido.dataRetirada);
        if (!validaData(novoPedido.dataRetirada)) {
            printf("Erro: Data inválida ou anterior à data atual!\n");
        }
    } while (!validaData(novoPedido.dataRetirada));
    system(CLEAR);
    printf("Produtos cadastrados:\n");
    for (int i = 0; i < totalProdutos; i++) {
        printf("ID: %d, Nome: %s, Valor: %.2f, Estoque: %d\n", produtos[i].idProduto, produtos[i].nomeProduto, produtos[i].valorProduto, produtos[i].quantidadeEstoque);
    }
    printf("Quantos itens no pedido? ");
    scanf("%d", &novoPedido.totalItens);
    if (novoPedido.totalItens > totalProdutos) {
        system(CLEAR);
        printf("Erro: A quantidade total de produtos no pedido é maior do que a disponível em estoque!\n\n");
        return; 
    }
    novoPedido.valorTotalPedido = 0;
    system(CLEAR);
    printf("Produtos cadastrados:\n");
    for (int i = 0; i < totalProdutos; i++) {
        printf("ID: %d, Nome: %s, Valor: %.2f, Estoque: %d\n", produtos[i].idProduto, produtos[i].nomeProduto, produtos[i].valorProduto, produtos[i].quantidadeEstoque);
    }

    for (int i = 0; i < novoPedido.totalItens; i++) {
        printf("Digite o ID do produto %d: ", i + 1);
        int id;
        scanf("%d", &id);
        int found = 0;
        bool produtoJaAdicionado = false;
        bool produtoEstoqueInsuficiente = false;
        for (int j = 0; j < totalProdutos; j++) {
            if (produtos[j].idProduto == id) {
                found = 1;

                for (int k = 0; k < i; k++) {
                    if (novoPedido.itens[k].produto.idProduto == id) {
                        printf("\nErro: Este produto já foi adicionado ao pedido!\n\n");
                        produtoJaAdicionado = true;
                        i--;
                        break;
                    }
                }
                
                if (!produtoJaAdicionado) {
                    printf("Digite a quantidade do produto %d: ", i + 1);
                    scanf("%d", &novoPedido.itens[i].quantidade);
                    if (novoPedido.itens[i].quantidade > produtos[j].quantidadeEstoque) {
                    printf("\nErro: Quantidade solicitada é maior que a quantidade em estoque!\n\n");
                    produtoEstoqueInsuficiente = true;
                    i--;
                    break;
                }
                }

                if (!produtoJaAdicionado && !produtoEstoqueInsuficiente) {
                    novoPedido.itens[i].produto = produtos[j];
                    novoPedido.itens[i].valorUnitario = produtos[j].valorProduto;
                    novoPedido.itens[i].valorTotalItem = novoPedido.itens[i].quantidade * novoPedido.itens[i].valorUnitario;
                    novoPedido.valorTotalPedido += novoPedido.itens[i].valorTotalItem;

                    produtos[j].quantidadeEstoque -= novoPedido.itens[i].quantidade;
                    break;
                }
            }
        }

        if (!found) {
            printf("Produto não encontrado!\n");
            i--;
        }
    }

    (*totalPedidos)++;
    *pedidos = (Pedido *)realloc(*pedidos, (*totalPedidos) * sizeof(Pedido));
    (*pedidos)[(*totalPedidos) - 1] = novoPedido;
    system(CLEAR);
    printf("Pedido adicionado com sucesso!\n\n");
}
