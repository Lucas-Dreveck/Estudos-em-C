#include <stdio.h>

void main () {
    float x, y, z;
    printf("Digite o valor de x: \n");
    scanf("%f", &x);
    printf("Digite o valor de y: \n");
    scanf("%f", &y);
    printf("Digite o valor de z: \n");
    scanf("%f", &z);
    if (x < y+z || y < x+z || z < x+y) {
        if (x == y && y == z) {
            printf("Os valores de x, y e z formam um triangulo equilatero;\n");
        } else if (x == y || y == z || x == z) {
            printf("Os valores de x, y e z formam um triangulo isosceles;\n");
        } else {
            printf("Os valores de x, y e z formam um triangulo escaleno;\n");
        }
    } else {
        printf("Os valores de x, y e z nao formam um triangulo pois o comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;\n");
    }
}