#ifndef DELETE_H
#define DELETE_H

#include "./main.h"

void deletarProduto(Produto *produtos, int *totalProdutos);
void deletarPedido(Pedido **pedidos, int *totalPedidos, Produto **produtos, int *totalProdutos);

#endif  // DELETE.H