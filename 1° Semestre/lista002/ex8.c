#include <stdio.h>

void main () {
    int condicao_de_pagamento;
    float valor_da_compra, valor_a_pagar;
    printf("Digite a condicao de pagamento (1 para a vista, 2 para a vista no credito, 3 para 2 vezes sem juros e 4 para 2 vezes com juros): \n");
    scanf("%d", &condicao_de_pagamento);
    printf("Digite o valor da compra: \n");
    scanf("%f", &valor_da_compra);
    if (condicao_de_pagamento == 1) {
        valor_a_pagar = valor_da_compra - (valor_da_compra * 0.1);
    } else if (condicao_de_pagamento == 2) {
        valor_a_pagar = valor_da_compra - (valor_da_compra * 0.15);
    } else if (condicao_de_pagamento == 3) {
        valor_a_pagar = valor_da_compra;
    } else if (condicao_de_pagamento == 4) {
        valor_a_pagar = valor_da_compra + (valor_da_compra * 0.1);
    }
    printf("O valor a pagar eh: %.2f \n", valor_a_pagar);
}