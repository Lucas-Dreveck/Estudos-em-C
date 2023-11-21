#include <stdio.h>

void main () {
    int blusas, novelos, novelos_blusa;
    printf("Digite quantas blusas tem: ");
    scanf("%d", &blusas);
    printf("Digite quantos novelos foram usados: ");
    scanf("%d", &novelos);
    novelos_blusa = novelos / blusas;
    printf("Quantidade de novelos por blusa: %d", novelos_blusa);
    
}