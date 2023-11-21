#include <stdio.h>
void main () {
    float windows_server, unix, linux, netware, mac_os, outro;
    int usuario = 1, votos = 0;
    while (usuario != 0) {
    printf("Qual o melhor sistema operacional para uso em servidores? \n1- Windows Server.\n2 - Unix.\n3 - Linux.\n4 - Netware.\n5 - Mac OS.\n6 - Outro.\nOu digite 0 para encerrar a enquete.\n");
    scanf("%d", &usuario);
    switch (usuario) {
        case 0:
        printf("A enquete foi encerrada.\n");
        break;
        case 1:
        windows_server++;
        votos++;
        break;
        case 2:
        unix++;
        votos++;
        break;
        case 3:
        linux++;
        votos++;
        break;
        case 4:
        netware++;
        votos++;
        break;
        case 5:
        mac_os++;
        votos++;
        break;
        case 6:
        outro++;
        votos++;
        break;
        default:
        printf("O valor inserido nao eh valido, resposta nao computada.\n");
    }
    }
    printf("O total de votos foi de %d.\n", votos);
    windows_server = windows_server * 100 / votos;
    unix = unix * 100 / votos;
    linux = linux * 100 / votos;
    netware = netware * 100 / votos;
    mac_os = mac_os * 100 / votos;
    outro = outro * 100 / votos;
    printf("O Windows Server obteve %.2f%% dos votos.\n", windows_server);
    printf("O Unix obteve %.2f%% dos votos.\n", unix);
    printf("O Linux obteve %.2f%% dos votos.\n", linux);
    printf("O Netware obteve %.2f%% dos votos.\n", netware);
    printf("O Mac OS obteve %.2f%% dos votos.\n", mac_os);
    printf("O Outro obteve %.2f%% dos votos.\n", outro);

}