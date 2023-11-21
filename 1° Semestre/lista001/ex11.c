#include <stdio.h>

void main() {
    int acidente;
    float ano, mes, dia;
    printf("Qunatos dias nao ocorre acidentes: \n");
    scanf("%d", &acidente);
    ano = acidente/365;
    mes = (acidente%365)/30;
    dia = (acidente%365)%30;
    printf("Fazem %.0f ano(s), %.0f mes(es), %0.f dia(s) que nao ocorre acidentes.", ano, mes, dia);
}