#include <stdio.h>


int somatorio (int valor) {
if (valor == 1) {
    printf("1");
    return 1;
} else {
    printf("%d + ", valor);
    return (valor + somatorio(valor-1));
}
}


int main () {
    int valor;
    printf("Escreva um numero maior que 1\n");
    scanf("%d", &valor);
    printf("\nO somatorio de 1 ate %d eh %d", valor, somatorio(valor));

    return 0;
}