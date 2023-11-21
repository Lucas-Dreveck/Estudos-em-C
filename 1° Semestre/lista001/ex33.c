#include <stdio.h>

void main () {
    float basemenor, basemaior, altura, area;
    printf("Informe a base menor do trapezio: ");
    scanf("%f", &basemenor);
    printf("Informe a base maior do trapezio: ");
    scanf("%f", &basemaior);
    printf("Informe a altura do trapezio: ");
    scanf("%f", &altura);
    area = ((basemenor + basemaior) * altura) / 2;
    printf("A area do trapezio eh: %.2f", area);
}