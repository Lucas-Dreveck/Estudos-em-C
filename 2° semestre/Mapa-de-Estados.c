#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int maiorNumeroDeFronteiras(int fronteiras[], int numEstados) {
    int maior = fronteiras[0];
    int indiceMaior = 0;

    for (int i = 1; i < numEstados; i++) {
        if (fronteiras[i] > maior) {
            maior = fronteiras[i];
            indiceMaior = i;
        }
    }

    return indiceMaior;
}

int main() {
    char *nomesEstados[] = {
        "Maranhao",
        "Piaui",
        "Ceara",
        "Bahia",
        "Alagoas",
        "Sergipe",
        "Pernambuco",
        "Paraiba",
        "Rio Grande do Norte"
    };

    int matrizDeAdjacencia[9][9] = {
        {0, 1, 0, 0, 0, 0, 0, 0, 0},
        {1, 0, 1, 1, 0, 0, 1, 0, 0},
        {0, 1, 0, 0, 0, 0, 1, 1, 1},
        {0, 0, 0, 0, 1, 1, 1, 0, 0},
        {0, 0, 0, 1, 0, 1, 1, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0, 0},
        {0, 1, 1, 1, 1, 0, 0, 1, 0},
        {0, 0, 1, 0, 0, 0, 1, 0, 1},
        {0, 0, 1, 0, 0, 0, 0, 1, 0}
    };

    int fronteiras[9] = {0};

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            fronteiras[i] += matrizDeAdjacencia[i][j];
        }
    }

    int indiceMaiorFronteiras = maiorNumeroDeFronteiras(fronteiras, 9);

    printf("O estado com o maior numero de fronteiras eh: %s\n", nomesEstados[indiceMaiorFronteiras]);

    return 0;
}
