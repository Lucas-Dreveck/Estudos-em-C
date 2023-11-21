#include <stdio.h>
#include <string.h>

void main() {
    int anos, viveu;
    char nome[20];
    printf("Digite o seu nome: \n");
    gets(nome);
    printf("Digite quantos anos voce tem: \n");
    scanf("%d", &anos);
    viveu = anos * 365;
    printf("%s , voce ja viveu %d dias de vida", nome, viveu);
    
}