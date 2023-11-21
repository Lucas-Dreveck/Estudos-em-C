#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char jogoDaVelha[3][3];

void inicializarJogo() {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            jogoDaVelha[i][j] = ' ';
        }
    }
}

void imprimirTabuleiro() {
    int i, j;
    printf("\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %c ", jogoDaVelha[i][j]);
            if (j < 2) {
                printf("|");
            }
        }
        printf("\n");
        if (i < 2) {
            printf("---+---+---\n");
        }
    }
    printf("\n");
}

int verificarGanhador(char jogador) {
    int i, j;
    for (i = 0; i < 3; i++) {
        if (jogoDaVelha[i][0] == jogador && jogoDaVelha[i][1] == jogador && jogoDaVelha[i][2] == jogador) {
            return 1;
        }
        if (jogoDaVelha[0][i] == jogador && jogoDaVelha[1][i] == jogador && jogoDaVelha[2][i] == jogador) {
            return 1;
        }
    }
    if (jogoDaVelha[0][0] == jogador && jogoDaVelha[1][1] == jogador && jogoDaVelha[2][2] == jogador) {
        return 1;
    }
    if (jogoDaVelha[0][2] == jogador && jogoDaVelha[1][1] == jogador && jogoDaVelha[2][0] == jogador) {
        return 1;
    }
    return 0;
}

int main () {
    int linha, coluna, jogadas = 0;
    char jogador = 'X';
    inicializarJogo();
    while (1) {
        system("cls");
        imprimirTabuleiro();
        printf("Jogador %c, digite a linha e a coluna (ex: 1 2): ", jogador);
        scanf("%d %d", &linha, &coluna);
        linha--;
        coluna--;
        if (jogoDaVelha[linha][coluna] == ' ') {
            jogoDaVelha[linha][coluna] = jogador;
            jogadas++;
            if (verificarGanhador(jogador)) {
                system("cls");
                printf("Jogador %c ganhou!\n", jogador);
                break;
            }
            if (jogadas == 9) {
                printf("Empate!\n");
                break;
            }
            jogador = (jogador == 'X') ? 'O' : 'X';
        } else {
            printf("Posicao invalida!\n");
            system("pause");
        }
    }
    imprimirTabuleiro();
    return 0;
}