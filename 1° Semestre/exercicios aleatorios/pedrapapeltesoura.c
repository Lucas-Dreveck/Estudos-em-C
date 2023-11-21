#include <stdio.h>
#include <stdlib.h>

void main () {
    int jogada_pessoa, jogada_computador, i = 1;
    while (i == 1) {
    printf("Escolha uma opcao: \n1 - Pedra, \n2 - Papel, \n3 - Tesoura \n");
    scanf("%d", &jogada_pessoa);
    jogada_computador = rand() % 3 + 1;
    switch (jogada_pessoa) {
        case 1:
        printf("Voce escolheu Pedra ");
        switch (jogada_computador) {
            case 1:
            printf("e o computador escolheu Pedra \nEntao o jogo foi um empate");
            break;
            case 2:
            printf("e o computador escolheu Papel \nEntao o computador ganhou");
            break;
            case 3:
            printf("e o computador escolheu Tesoura \nEntao voce ganhou");
            break;
        }
        break;
        case 2:
        printf("Voce escolheu Papel ");
        switch (jogada_computador) {
            case 1:
            printf("e o computador escolheu Pedra \nEntao voce ganhou");
            break;
            case 2:
            printf("e o computador escolheu Papel \nEntao o jogo foi um empate");
            break;
            case 3:
            printf("e o computador escolheu Tesoura \nEntao o computador ganhou");
            break;
        }
        break;
        case 3:
        printf("Voce escolheu Tesoura ");
        switch (jogada_computador) {
            case 1:
            printf("e o computador escolheu Pedra \nEntao o computador ganhou");
            break;
            case 2:
            printf("e o computador escolheu Papel \nEntao voce ganhou");
            break;
            case 3:
            printf("e o computador escolheu Tesoura \nEntao o jogo foi um empate");
            break;
        }
        break;
        default:
        printf("Voce escolheu uma opcao invalida entao o jogo foi encerrado.");
    }
    printf("\nDeseja Jogar novamente? \n1 - Sim \n2 - Nao \n");
    scanf("%d", &i);
    }
}