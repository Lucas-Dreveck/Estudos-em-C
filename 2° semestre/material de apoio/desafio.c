#include <stdio.h>
int soma = 0;
int multiplicacao_russa (int valorA, int valorB) {
    int valorC = 0;
    if (valorA == 0) {
        printf("Soma = ");
        return soma;
    } else {
        if (valorA%2 != 0) {
            valorC = valorB;
            soma+= valorB;
        }
        printf("%d  %d  %d\n", valorA, valorB, valorC);
        return multiplicacao_russa(valorA/2, valorB*2);
    }
}


int main () {
    int valorA, valorB;
    printf("Escreva o valor A e o valor B para realizar a multiplicacao russa: \n");
    printf("Valor de A: ");
    scanf("%d", &valorA);
    if (valorA > NULL) {
        printf("teste");
    } else {
        printf("teste2");
    }

    return 0;
}