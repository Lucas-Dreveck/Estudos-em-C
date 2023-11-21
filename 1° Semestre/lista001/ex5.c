#include <stdio.h>

void main () {
    float valor, pago, litros;
    printf("Qual o preco da gasolina: \n");    
    scanf("%f", &valor);
    printf("Qual o valor pago: \n"); 
    scanf("%f", &pago);
    litros = pago / valor;
    printf("Voce conseguiu comprar %.2f litros no tanque.", litros);


}