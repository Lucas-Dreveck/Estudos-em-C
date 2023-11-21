#include <stdio.h>

void main () {
    float raio_caixaagua, altura_caixaagua, volume_caixaagua;
    printf("Informe o raio da caixa d'agua: ");
    scanf("%f", &raio_caixaagua);
    printf("Informe a altura da caixa d'agua: ");
    scanf("%f", &altura_caixaagua);
    volume_caixaagua = 3.14 * raio_caixaagua * raio_caixaagua * altura_caixaagua;
    printf("O volume da caixa d'agua eh: %.2f litros", volume_caixaagua);
}