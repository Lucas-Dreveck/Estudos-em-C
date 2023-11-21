#include <stdio.h>

void main() {
    float xa, ya, xb, yb, distancia;
    printf("Informe xa, ya, xb, yb dando enter entre cada valor: \n");
    scanf("%f%f%f%f", &xa, &ya, &xb, &yb); 
    distancia = sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb));
    printf("A distancia entre o ponto A e B e %.2f", distancia);
}