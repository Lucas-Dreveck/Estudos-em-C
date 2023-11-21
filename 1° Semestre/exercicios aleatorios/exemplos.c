#include <stdio.h>

void main () {
    int Ninicial = 0, Nfinal =0;
    printf("Informe o primeiro numero de uma sequencia: \n");
    scanf("%d", &Ninicial);
    printf("Informe o ultimo numero de uma sequencia: \n");
    scanf("%d", &Nfinal);
    if (Ninicial < Nfinal) {
        while (Ninicial <= Nfinal) {
            printf ("%d \n", Ninicial);
            Ninicial++;
        }
    } else if ( Ninicial > Nfinal) {
        while (Nfinal <= Ninicial) {
            printf ("%d \n", Nfinal);
            Nfinal++;
        }
    } else 
    printf ("Os números informados são iguais.");
    

}