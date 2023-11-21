#include <stdio.h>

void main () {
    int ano_nascimento, ano_atual, idade_anos, idade_meses, idade_semanas, idade_dias;
    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);
    idade_anos = ano_atual - ano_nascimento;
    idade_meses = idade_anos * 12;
    idade_semanas = idade_anos * 52;
    idade_dias = idade_anos * 365;
    printf("Idade em anos: %d \n", idade_anos);
    printf("Idade em meses: %d \n", idade_meses);
    printf("Idade em semanas: %d \n", idade_semanas);
    printf("Idade em dias: %d \n", idade_dias);
}