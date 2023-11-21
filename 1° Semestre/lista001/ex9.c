#include <stdio.h>

void main() {
    int pequena, media, grande, total;
    printf("Informe quantas camisas pequenas tem: \n");
    scanf("%d", &pequena);
    printf("Informe quantas camisas medias: \n");
    scanf("%d", &media);
    printf("Informe quantas camisas grandes: \n");
    scanf("%d", &grande);
    total = pequena*10 + media*12 + grande*15;
    printf("O total arrecadado foi %d", total);   
}