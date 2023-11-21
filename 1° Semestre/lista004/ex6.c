#include <stdio.h>
int main(){
    int idade[10], i, maior = 0, menor= 99999;
    printf("Relacao das idades dos pacientes\n");
    for ( i = 1; i <= 10; i++)
    {
        printf("Qual e a idade do %d paciente?\n", i);
        scanf("%d", &idade[i-1]);
        if (idade[i-1] > maior)
        {
            maior = idade[i-1];
        }
        if (idade[i-1] < menor)
        {
            menor = idade[i-1];
        }
    }
    printf("O paciente mais velho possui %d anos\n", maior);
    printf("O paciente mais novo possui %d anos\n", menor);
}