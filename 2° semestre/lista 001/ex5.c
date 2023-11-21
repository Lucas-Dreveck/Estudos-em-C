#include <stdio.h>


int Comb (int n, int k) {
 if (k == 1) {
    return n;
 } else if (k == n) {
    return 1;
 } else {
    return (Comb(n-1, k-1) + Comb(n-1, k));
 }
}


int main () {
    int n, k;
    printf("Escreva a quantidade de grupos\n");
    scanf("%d", &k);
    printf("Escreva a quantidade de pessoas\n");
    scanf("%d", &n);
    printf("As opcoes de grupo distintos a serem formados sao: %d", Comb(n, k));



    return 0;
}