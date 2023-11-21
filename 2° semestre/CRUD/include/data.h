#ifndef DATA_H
#define DATA_H

#include "./main.h"

void criarBD();
void salvarProdutos(Produto *produtos, int totalProdutos);
void salvarPedidos(Pedido *pedidos, int totalPedidos);
void carregarProdutos(Produto **produtos, int *totalProdutos);
void carregarPedidos(Pedido **pedidos, int *totalPedidos);

#endif  // DATA_H
