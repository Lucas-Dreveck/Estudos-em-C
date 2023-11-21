#include <stdio.h>

void primoProximos (int m, int *p1, int *p2) {
    int i = 0;
    if ((m - 100) < 0) {
        i = 0;
    } else {
        i = (m - 100);
    }
    while (i < m) {
        for (int j = 2; j <= i / 2; j++){
            if (i % j == 0) {
                *p2 = 1;
                break;
            }
        }
        if (*p2 == 0)
        *p1 = i;
        *p2 = 0;
        i++;
    }
    do{
        m++;
        for (int i = 2; i <= m / 2; i++) {
        if (m % i == 0) {
            *p2 = 1;
            break;
        }
        }
        if (*p2 == 0) {
        *p2 = m;
        } else {
            *p2 = 0;
        }
    }while (*p2 == 0);
}

int main () {
    int m = 0, p1 = 0, p2 = 0;
    printf("Escreva o valor parametro da funcao: ");
    scanf("%d", &m);
    primoProximos(m, &p1, &p2);
    printf("O maior primo menor do que %d eh: %d e o menor primo maior do que %d eh: %d", m, p1, m, p2);
    return 0;
}