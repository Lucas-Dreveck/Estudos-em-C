#ifndef CREATE_H
#define CREATE_H

#include "./main.h"

void adicionarProduto(Produto **produtos, int *totalProdutos);
void adicionarPedido(Pedido **pedidos, int *totalPedidos, Produto *produtos, int totalProdutos);

#endif  // CREATE_H
