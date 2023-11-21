#include <stdio.h>

void main () {
    float a,b;
    printf("Digite o valor de A: \n");
    scanf("%f", &a);
    printf("Digite o valor de B: \n");
    scanf("%f", &b);
    a+=b;
    b=a-b;
    a-=b; 
    printf("O valor de A apos a inversao eh de %.2f \n e o valor de B apos a inversao eh de %.2f", a, b);
       
}