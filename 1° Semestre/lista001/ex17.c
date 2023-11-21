#include <stdio.h>

void main () {
    float celsius, fahrenheit;
    printf("Escreva a temperatura em graus Celsius: \n");
    scanf("%f", &celsius);
    fahrenheit = celsius * 9 / 5.0 + 32;
    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", celsius, fahrenheit);
}