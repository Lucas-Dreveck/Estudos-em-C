#include <stdio.h>

int potencia (int base, int elevado) {
    if (elevado == 0) {
        return 1;
    } else {
        return (base * potencia(base, elevado-1));
    }
}



int main () {

    int base, elevado;
    printf("Escreva uma base \n");
    scanf("%d", &base);
    printf("Escreva o expoente\n");
    scanf("%d", &elevado);
    printf("\nO valor %d elevado a %d eh igual a %d", base, elevado, potencia(base,elevado));

    return 0;
}