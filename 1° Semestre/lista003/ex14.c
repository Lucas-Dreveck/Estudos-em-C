#include <stdio.h>

void main () {
    int numero = 0;
    int i = 1, entre0e100 = 0, entre101e200 = 0, maior200 = 0;
    while (i <= 20) {
        printf("Digite o %d numero: \n", i, numero);
        scanf("%d", &numero);
        if (numero > 0 && numero < 100) {
            entre0e100++;
        } else if (numero > 100 && numero < 200) {
            entre101e200++;
        } else if (numero > 200) {
            maior200++;
        }
        i++;
    }
    printf("Existem %d numero(s) entre 0 e 100, %d numero(s) entre 101 e 200 e %d numero(s) maiores que 200.", entre0e100, entre101e200, maior200);
}
