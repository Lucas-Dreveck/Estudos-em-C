#ifndef MAIN_H
#define MAIN_H

#include <stdbool.h>

struct Produto {
    int idProduto;
    char nomeProduto[50];
    float valorProduto;
    int quantidadeEstoque;
};
typedef struct Produto Produto;

struct ItemPedido {
    Produto produto;
    int quantidade;
    float valorUnitario;
    float valorTotalItem;
};
typedef struct ItemPedido ItemPedido;

struct Pedido {
    char nomeRetirante[50];
    char dataRetirada[11];
    ItemPedido itens[50];
    int totalItens;
    float valorTotalPedido;
};
typedef struct Pedido Pedido;

//Data
void criarBD();
void salvarProdutos(Produto *produtos, int totalProdutos);
void salvarPedidos(Pedido *pedidos, int totalPedidos);
void carregarProdutos(Produto **produtos, int *totalProdutos);
void carregarPedidos(Pedido **pedidos, int *totalPedidos);

//Create
void adicionarProduto(Produto **produtos, int *totalProdutos);
void adicionarPedido(Pedido **pedidos, int *totalPedidos, Produto *produtos, int totalProdutos);

//Delete
void deletarProduto(Produto *produtos, int *totalProdutos);
void deletarPedido(Pedido **pedidos, int *totalPedidos, Produto **produtos, int *totalProdutos);
bool validaData(const char *data);

//Read
void exibirProdutos(Produto *produtos, int totalProdutos);
void exibirPedidos(Pedido *pedidos, int totalPedidos);

//Update
void atualizarProduto(Produto *produtos, int totalProdutos);
void atualizarPedido(Produto *produtos, int totalProdutos, Pedido *pedidos, int *totalPedidos);

//Utils
bool validaData(const char *data);

#endif  // MAIN_H
