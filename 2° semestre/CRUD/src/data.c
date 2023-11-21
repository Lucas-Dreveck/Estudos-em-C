#include "../include/data.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>


void criarBD() {
    struct stat st = {0};
    if (stat("./bin", &st) == -1) {
        if (mkdir("./bin", 0777) == -1) {
            printf("Erro ao criar a pasta bin!\n");
            exit(1);
        }
    }

    if (stat("./bin/produtos.bin", &st) == -1) {
        FILE *arquivo = fopen("./bin/produtos.bin", "wb");
        if (arquivo) {
            fclose(arquivo);
        } else {
            printf("Erro ao criar o arquivo produtos.bin!\n");
            exit(1);
        }
    }

    if (stat("./bin/pedidos.bin", &st) == -1) {
        FILE *arquivo = fopen("./bin/pedidos.bin", "wb");
        if (arquivo) {
            fclose(arquivo);
        } else {
            printf("Erro ao criar o arquivo pedidos.bin!\n");
            exit(1);
        }
    }
}


void salvarProdutos(Produto *produtos, int totalProdutos) {
    FILE *arquivo = fopen("./bin/produtos.bin", "wb");
    if (arquivo) {
        fwrite(&totalProdutos, sizeof(int), 1, arquivo);
        for (int i = 0; i < totalProdutos; i++) {
            fwrite(&produtos[i].idProduto, sizeof(int), 1, arquivo);
            fwrite(produtos[i].nomeProduto, sizeof(char), sizeof(produtos[i].nomeProduto), arquivo);
            fwrite(&produtos[i].valorProduto, sizeof(float), 1, arquivo);
            fwrite(&produtos[i].quantidadeEstoque, sizeof(int), 1, arquivo);
        }
        fclose(arquivo);
    } else {
        printf("Erro ao salvar produtos!\n");
    }
}

void carregarProdutos(Produto **produtos, int *totalProdutos) {
    FILE *arquivo = fopen("./bin/produtos.bin", "rb");
    if (arquivo) {
        fread(totalProdutos, sizeof(int), 1, arquivo);

        *produtos = (Produto *)malloc(*totalProdutos * sizeof(Produto));

        if (*produtos) {
            for (int i = 0; i < *totalProdutos; i++) {
                fread(&(*produtos)[i].idProduto, sizeof(int), 1, arquivo);
                fread((*produtos)[i].nomeProduto, sizeof(char), sizeof((*produtos)[i].nomeProduto), arquivo);
                fread(&(*produtos)[i].valorProduto, sizeof(float), 1, arquivo);
                fread(&(*produtos)[i].quantidadeEstoque, sizeof(int), 1, arquivo);
            }
            fclose(arquivo);
        } else {
            printf("Erro ao alocar memória para produtos!\n");
        }
    } else {
        printf("Erro ao carregar produtos!\n");
    }
}


void salvarPedidos(Pedido *pedidos, int totalPedidos) {
    FILE *arquivo = fopen("./bin/pedidos.bin", "wb");
    if (arquivo) {
        fwrite(&totalPedidos, sizeof(int), 1, arquivo);
        for (int i = 0; i < totalPedidos; i++) {
            fwrite(&pedidos[i], sizeof(Pedido), 1, arquivo);
        }
        fclose(arquivo);
    } else {
        printf("Erro ao salvar pedidos!\n");
    }
}

void carregarPedidos(Pedido **pedidos, int *totalPedidos) {
    FILE *arquivo = fopen("./bin/pedidos.bin", "rb");
    if (arquivo) {
        fread(totalPedidos, sizeof(int), 1, arquivo);
        *pedidos = (Pedido *)malloc(*totalPedidos * sizeof(Pedido));
        if (*pedidos) {
            for (int i = 0; i < *totalPedidos; i++) {
                fread(&(*pedidos)[i], sizeof(Pedido), 1, arquivo);
            }
            fclose(arquivo);
        } else {
            printf("Erro ao alocar memória para pedidos!\n");
        }
    } else {
        printf("Erro ao carregar pedidos!\n");
    }
}