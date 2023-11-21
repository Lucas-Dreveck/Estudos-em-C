#include <stdio.h>
#define peso1 2
#define peso2 3
void main () {
    float nota1, nota2, media;
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 * peso1 + nota2 * peso2) / (peso1 + peso2);
    printf("A media ponderada das notas eh: %.2f", media);

}