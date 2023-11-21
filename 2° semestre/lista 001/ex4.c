#include <stdio.h>


int Multip_Rec(int n1,int n2) {
    if (n2 == 0) {
        return 0;
    } else {
        return (n1 + Multip_Rec(n1, n2-1));
    }
}

int main () {
    int valor1, valor2;
    printf("Escreva o primeiro valor: ");
    scanf("%d", &valor1);
    printf("\nEscreva o segundo valor: ");
    scanf("%d", &valor2);
    printf("\nO resultado da multiplicacao de %d x %d eh = a %d", valor1, valor2, Multip_Rec(valor1, valor2));

    return 0;
}