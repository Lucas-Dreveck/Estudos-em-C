#include <stdio.h>
#include <math.h>

// Lista 01

// Exercicio 01

void l01ex01()
{
    float largura, comprimento, area;
    printf("Escreva a largura do terreno em metros: \n");
    scanf("%f", &largura);
    printf("Escreva a comprimento do terreno em metros: \n");
    scanf("%f", &comprimento);
    area = largura * comprimento;
    printf("A area do terreno: %.2f metros. \n", area);
}

// Exercicio 02

void l01ex02()
{
    int cavalos, ferraduras;
    printf("Escreva quantos cavalos voce tem: \n");
    scanf("%d", &cavalos);
    ferraduras = cavalos * 4;
    printf("Voce precisara de %d ferraduras para equipar todos os cavalos. \n", ferraduras);
}

// Exercicio 03
void l01ex03()
{
    int paes, broas;
    float venda, poupanca;
    printf("Escreva quantos paes foram vendidos: \n");
    scanf("%d", &paes);
    printf("Escreva quantos broas foram vendidos: \n");
    scanf("%d", &broas);
    venda = (paes * 0.12) + (broas * 1.5);
    poupanca = (venda / 10);
    printf("O total de vendas foi %.2f e voce deve guardar %.2f na sua poupanca. \n", venda, poupanca);
}

// Exercicio 04

void l01ex04()
{
    int anos, viveu;
    char nome[20];
    printf("Digite o seu nome: \n");
    scanf("%s", &nome);
    printf("Digite quantos anos voce tem: \n");
    scanf("%d", &anos);
    viveu = anos * 365;
    printf("%s , voce ja viveu %d dias de vida \n", nome, viveu);
}

// Exercicio 05

void l01ex05()
{
    float valor, pago, litros;
    printf("Qual o preco da gasolina: \n");
    scanf("%f", &valor);
    printf("Qual o valor pago: \n");
    scanf("%f", &pago);
    litros = pago / valor;
    printf("Voce conseguiu comprar %.2f litros no tanque. \n", litros);
}

// Exercicio 06

void l01ex06()
{
    float peso, valor;
    printf("Qual o peso do prato em quilos: \n");
    scanf("%f", &peso);
    valor = peso * 12;
    printf("Voce tera que pagar %.2f pelo prato. \n", valor);
}

// Exercicio 07

void l01ex07()
{
    int mes, dia, inicio;
    printf("Que dia eh hoje: \n");
    scanf("%d", &dia);
    printf("Que mes e: \n");
    scanf("%d", &mes);
    inicio = (mes - 1) * 30 + dia;
    printf("Fazem %d dias que comecou o ano. \n", inicio);
}

// Exercicio 08

void l01ex08()
{
    int nota1, nota2, nota3, total;
    printf("Escreva a nota do 1 aluno: \n");
    scanf("%d", &nota1);
    printf("Escreva a nota do 2 aluno: \n");
    scanf("%d", &nota2);
    printf("Escreva a nota do 3 aluno: \n");
    scanf("%d", &nota3);
    total = (nota1 * 1 + nota2 * 2 + nota3 * 3) / 6;
    printf("A media ponderada desses alunos e %d \n", total);
}

// Exercicio 09

void l01ex09()
{
    int pequena, media, grande, total;
    printf("Informe quantas camisas pequenas tem: \n");
    scanf("%d", &pequena);
    printf("Informe quantas camisas medias: \n");
    scanf("%d", &media);
    printf("Informe quantas camisas grandes: \n");
    scanf("%d", &grande);
    total = pequena * 10 + media * 12 + grande * 15;
    printf("O total arrecadado foi %d \n", total);
}

// Exercicio 10

void l01ex10()
{
    float xa, ya, xb, yb, distancia;
    printf("Informe xa, ya, xb, yb dando enter entre cada valor: \n");
    scanf("%f%f%f%f", &xa, &ya, &xb, &yb);
    distancia = sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb));
    printf("A distancia entre o ponto A e B e %.2f \n", distancia);
}

// Lista 02

// Exercicio 01

void l02ex01()
{
    float valor_a, valor_b;
    printf("Digite o valor de A: \n");
    scanf("%f", &valor_a);
    printf("Digite o valor de B: \n");
    scanf("%f", &valor_b);
    if (valor_a > valor_b)
    {
        printf("O valor de A eh maior que o valor de B \n");
    }
    else if (valor_a < valor_b)
    {
        printf("O valor de B eh maior que o valor de A \n");
    }
    else
    {
        printf("Os valores de A e B sao iguais \n");
    }
}

// Exercicio 02

void l02ex02()
{
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    if (valor % 2 == 0)
    {
        printf("O valor %d eh par \n", valor);
    }
    else
    {
        printf("O valor %d eh impar \n", valor);
    }
}

// Exercicio 03

void l02ex03()
{
    float valor_a, valor_b;
    printf("Digite o valor de A: \n");
    scanf("%f", &valor_a);
    printf("Digite o valor de B: \n");
    scanf("%f", &valor_b);
    if (valor_a == valor_b)
    {
        printf("A soma dos valores fica: %.2f \n", valor_a + valor_b);
    }
    else if (valor_a != valor_b)
    {
        printf("A multiplicacao dos valores fica: %.2f \n", valor_a * valor_b);
    }
}

// Exercicio 04

void l02ex04()
{
    float valor;
    printf("Digite um valor: \n");
    scanf("%f", &valor);
    if (valor < 0)
    {
        printf("Como o valor eh negativo o seu triplo fica em %.2f \n", valor * 3);
    }
    else if (valor > 0)
    {
        printf("Como o valor eh positivo o seu dobro fica em %.2f \n", valor * 2);
    }
    else if (valor == 0)
    {
        printf("O valor é zero \n");
    }
}

// Exercicio 05

void l02ex05()
{
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    if (valor % 2 == 0)
    {
        printf("O valor %d eh par e somando 5 a ele fica em %d \n", valor, valor + 5);
    }
    else
    {
        printf("O valor %d eh impar e somando 8 a ele fica em %d \n", valor, valor + 8);
    }
}

// Exercicio 06

void l02ex06()
{
    float valor_1, valor_2, valor_3;
    printf("Digite o primeiro valor: \n");
    scanf("%f", &valor_1);
    printf("Digite o segundo valor: \n");
    scanf("%f", &valor_2);
    printf("Digite o terceiro valor: \n");
    scanf("%f", &valor_3);
    printf("Os valores em ordem decrescente são: \n");
    if (valor_1 > valor_2 && valor_1 > valor_3)
    {
        if (valor_2 > valor_3)
        {
            printf("%.2f, %.2f, %.2f \n", valor_1, valor_2, valor_3);
        }
        else
        {
            printf("%.2f, %.2f, %.2f \n", valor_1, valor_3, valor_2);
        }
    }
    else if (valor_2 > valor_1 && valor_2 > valor_3)
    {
        if (valor_1 > valor_3)
        {
            printf("%.2f, %.2f, %.2f \n", valor_2, valor_1, valor_3);
        }
        else
        {
            printf("%.2f, %.2f, %.2f \n", valor_2, valor_3, valor_1);
        }
    }
    else if (valor_3 > valor_1 && valor_3 > valor_2)
    {
        if (valor_1 > valor_2)
        {
            printf("%.2f, %.2f, %.2f \n", valor_3, valor_1, valor_2);
        }
        else
        {
            printf("%.2f, %.2f, %.2f \n", valor_3, valor_2, valor_1);
        }
    }
}

// Exercicio 07

void l02ex07()
{
    int sexo;
    float altura, peso_ideal;
    printf("Digite o sexo (1 para masculino e 2 para feminino): \n");
    scanf("%d", &sexo);
    printf("Digite a altura: \n");
    scanf("%f", &altura);
    if (sexo == 1)
    {
        peso_ideal = (72.7 * altura) - 58;
    }
    else if (sexo == 2)
    {
        peso_ideal = (62.1 * altura) - 44.7;
    }
    printf("O peso ideal eh: %.2f \n", peso_ideal);
}

// Exercicio 08

void l02ex08()
{
    int condicao_de_pagamento;
    float valor_da_compra, valor_a_pagar;
    printf("Digite a condicao de pagamento (1 para a vista, 2 para a vista no credito, 3 para 2 vezes sem juros e 4 para 2 vezes com juros): \n");
    scanf("%d", &condicao_de_pagamento);
    printf("Digite o valor da compra: \n");
    scanf("%f", &valor_da_compra);
    if (condicao_de_pagamento == 1)
    {
        valor_a_pagar = valor_da_compra - (valor_da_compra * 0.1);
    }
    else if (condicao_de_pagamento == 2)
    {
        valor_a_pagar = valor_da_compra - (valor_da_compra * 0.15);
    }
    else if (condicao_de_pagamento == 3)
    {
        valor_a_pagar = valor_da_compra;
    }
    else if (condicao_de_pagamento == 4)
    {
        valor_a_pagar = valor_da_compra + (valor_da_compra * 0.1);
    }
    printf("O valor a pagar eh: %.2f \n", valor_a_pagar);
}

// Exercicio 09

void l02ex09()
{
    int numero_de_identificacao;
    float nota_1, nota_2, nota_3, media;
    printf("Digite o numero de identificacao: \n");
    scanf("%d", &numero_de_identificacao);
    printf("Digite a nota 1: \n");
    scanf("%f", &nota_1);
    printf("Digite a nota 2: \n");
    scanf("%f", &nota_2);
    printf("Digite a nota 3: \n");
    scanf("%f", &nota_3);
    media = (nota_1 + nota_2 + nota_3) / 3;
    if (media >= 7)
    {
        printf("Aprovado com media %.2f \n", media);
    }
    else if (media >= 5)
    {
        printf("Recuperacao com media %.2f \n", media);
    }
    else
    {
        printf("Reprovado com media %.2f \n", media);
    }
}

// Exercicio 10

void l02ex10()
{
    int valor_a, valor_b;
    printf("Digite o valor de A: \n");
    scanf("%d", &valor_a);
    printf("Digite o valor de B: \n");
    scanf("%d", &valor_b);
    if (valor_a > valor_b)
    {
        printf("A diferenca entre A e B eh de %d  \n", valor_a - valor_b);
    }
    else if (valor_a < valor_b)
    {
        printf("A diferenca entre B e A eh de %d \n", valor_b - valor_a);
    }
    else
    {
        printf("Os valores de A e B sao iguais \n");
    }
}

// Lista 03

// Exercicio 01

void l03ex01()
{
    char nome[20];
    int i = 1;
    printf("Digite seu nome: ");
    scanf("%s", nome);
    while (i <= 10)
    {
        printf("%s \n", nome);
        i++;
    }
}

// Exercicio 02

void l03ex02()
{
    int i = 1;
    while (i <= 20)
    {
        printf("Esta eh a mensagem %d \n", i);
        i++;
    }
}

// Exercicio 03

void l03ex03()
{
    int i = 1;
    int final = 0;
    printf("Digite o numero final: ");
    scanf("%d", &final);
    while (i <= final)
    {
        printf("Esta eh a mensagem %d \n", i);
        i++;
    }
}

// Exercicio 04

void l03ex04()
{
    int i = 1;
    int num = 0;
    while (i <= 15)
    {
        num += i;
        i++;
    }
    printf("A soma dos numeros de 1 a 15 eh: %d \n", num);
}

// Exercicio 05

void l03ex05()
{
    int numero = 0;
    int i = 1, final = 0;
    while (i <= 10)
    {
        printf("Digite o %d numero: \n", i, numero);
        scanf("%d", &numero);
        final += numero;
        i++;
    }
    printf("A soma dos numeros eh: %d \n", final);
}

// Exercicio 06

void l03ex06()
{
    int numero = 0;
    int i = 1, final = 0;
    while (i <= 20)
    {
        printf("Digite a idade da %d pessoa: \n", i, numero);
        scanf("%d", &numero);
        final += numero;
        i++;
    }
    printf("A soma das idades eh: %d \n", final);
}

// Exercicio 07

void l03ex07()
{
    int numero = 0;
    int i = 1, final = 0;
    while (i <= 20)
    {
        printf("Digite a idade da %d pessoa: \n", i, numero);
        scanf("%d", &numero);
        final += numero;
        i++;
    }
    final /= (i - 1);
    printf("A media das idades eh: %d \n", final);
}

// Exercicio 08

void l03ex08()
{
    int numero = 0;
    int i = 1, final = 0;
    while (i <= 20)
    {
        printf("Digite a idade da %d pessoa: \n", i, numero);
        scanf("%d", &numero);
        if (numero >= 18)
        {
            final++;
        }
        i++;
    }
    printf("Existem %d pessoas maiores de idade. \n", final);
}

// Exercicio 09

void l03ex09()
{
    int numero = 0;
    int i = 1, final = 0, aux = 0;
    while (i <= 10)
    {
        if (i == 1)
        {
            printf("Digite a idade da %d pessoa: \n", i, aux);
            scanf("%d", &aux);
        }
        printf("Digite a idade da %d pessoa: \n", i, numero);
        scanf("%d", &numero);
        if (numero < aux)
        {
            aux = numero;
        }
        i++;
    }
    printf("A pessoa mais nova eh: %d \n", aux);
}

// Exercicio 10

void l03ex10()
{
    int numero = 0, i = 1, final = 0;
    printf("Digite o numero: \n");
    scanf("%d", &numero);
    while (i <= 10)
    {
        final = numero * i;
        printf("%d x %d = %d \n", numero, i, final);
        i++;
    }
}

// Lista 04

// Exercicio 01

void l04ex01()
{
    float vetor1[10], vetor2[10], vetor_resultado[10];
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d numero do vetor 1: \n", i + 1);
        scanf("%f", &vetor1[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d numero do vetor 2: \n", i + 1);
        scanf("%f", &vetor2[i]);
    }
    printf("A soma dos numeros de ambos os vetores de acordo com seu indice fica: ");
    for (i = 0; i < 10; i++)
    {
        vetor_resultado[i] = vetor1[i] + vetor2[i];
        if (i != 9)
        {
            printf(" %.1f,", vetor_resultado[i]);
        }
        else
        {
            printf(" %.1f. \n", vetor_resultado[i]);
        }
    }
}

// Exercicio 02

void l04ex02()
{

        int vetor_inicial[20], i = 0, pares = 0, impares = 0, maior50 = 0, menor7 = 0;

    for (i = 0; i < 20; i++) {
        printf("Digite o %d numero do vetor: \n", i + 1);
        scanf("%d", &vetor_inicial[i]);

        if (vetor_inicial[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        if (vetor_inicial[i] > 50) {
            maior50++;
        }

        if (vetor_inicial[i] < 7) {
            menor7++;
        }
    }

    int vetor_pares[pares], vetor_impares[impares], vetor_maior50[maior50], vetor_menor7[menor7];
    int index_pares = 0, index_impares = 0, index_maior50 = 0, index_menor7 = 0;

    for (i = 0; i < 20; i++) {
        if (vetor_inicial[i] % 2 == 0) {
            vetor_pares[index_pares] = vetor_inicial[i];
            index_pares++;
        } else {
            vetor_impares[index_impares] = vetor_inicial[i];
            index_impares++;
        }

        if (vetor_inicial[i] > 50) {
            vetor_maior50[index_maior50] = vetor_inicial[i];
            index_maior50++;
        }

        if (vetor_inicial[i] < 7) {
            vetor_menor7[index_menor7] = vetor_inicial[i];
            index_menor7++;
        }
    }

    printf("Os numeros pares sao: ");
    for (i = 0; i < pares; i++) {
        if (i != pares - 1) {
            printf(" %d,", vetor_pares[i]);
        } else {
            printf(" %d. \n", vetor_pares[i]);
        }
    }

    printf("Os numeros impares sao: ");
    for (i = 0; i < impares; i++) {
        if (i != impares - 1) {
            printf(" %d,", vetor_impares[i]);
        } else {
            printf(" %d. \n", vetor_impares[i]);
        }
    }

    printf("Os numeros maiores que 50 sao: ");
    for (i = 0; i < maior50; i++) {
        if (i != maior50 - 1) {
            printf(" %d,", vetor_maior50[i]);
        } else {
            printf(" %d. \n", vetor_maior50[i]);
        }
    }

    printf("Os numeros menores que 7 sao: ");
    for (i = 0; i < menor7; i++) {
        if (i != menor7 - 1) {
            printf(" %d,", vetor_menor7[i]);
        } else {
            printf(" %d. \n", vetor_menor7[i]);
        }
    }

    

}

// Exercicio 03

void l04ex03()
{
    int vetorA[8], vetorB[8];
    for (int i = 0; i < 8; i++)
    {
        printf("Digite o %d numero do vetor A: \n", i + 1);
        scanf("%d", &vetorA[i]);
        vetorB[i] = vetorA[i] * 2; 
    }
    printf("O vetor B eh: ");
    for (int i = 0; i < 8; i++)
    {
        if (i != 7)
        {
            printf("%d, ", vetorB[i]);
        }
        else
        {
            printf("%d. \n", vetorB[i]);
        }
    }


}

// Exercicio 04

void l04ex04()
{
    float vetorA[10], vetorB[10], vetorC[10];
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d numero do vetor A: \n", i + 1);
        scanf("%f", &vetorA[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d numero do vetor B: \n", i + 1);
        scanf("%f", &vetorB[i]);
    }
    printf("A soma dos respectivos numeros de ambos os vetores fica: ");

    for (i = 0; i < 10; i++)
    {
        vetorC[i] = vetorA[i] + vetorB[i];
        if (i != 9)
        {
            printf(" %.1f,", vetorC[i]);
        }
        else
        {
            printf(" %.1f. \n", vetorC[i]);
        }
    }
}

// Exercicio 05

void l04ex05()
{
    int vetorA[10], menor15 = 0, igual15 = 0, maior15 = 0, aux = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %d numero do vetor A: \n", i + 1);
        scanf("%d", &vetorA[i]);
        if (vetorA[i] < 15)
        {
            menor15+= vetorA[i];
        }
        else if (vetorA[i] == 15)
        {
            igual15++;
        }
        else
        {
            aux += vetorA[i];
            maior15++;
        }
    }
    maior15 = aux / maior15;
    printf("A soma dos numeros menores que 15 eh: %d \n", menor15);
    printf("A quantidade de numeros iguais a 15 eh: %d \n", igual15);
    printf("A media dos numeros maiores que 15 eh: %d \n", maior15);

}

// Exercicio 06

void l04ex06()
{
    int idade[10], i, maior = 0, menor = 99999, posmaior = 0, posmenor = 0;
    printf("Relacao das idades dos pacientes\n");
    for (i = 1; i <= 10; i++)
    {
        printf("Qual e a idade do %d paciente?\n", i);
        scanf("%d", &idade[i - 1]);
        if (idade[i - 1] > maior)
        {
            maior = idade[i - 1];
            posmaior = i;
        }
        if (idade[i - 1] < menor)
        {
            menor = idade[i - 1];
            posmenor = i;
        }
    }
    printf("O paciente mais velho possui %d anos e esta na posicao %d\n", maior, posmaior);
    printf("O paciente mais novo possui %d anos e esta na posicao %d\n", menor, posmenor);
}

// Exercicio 07

void l04ex07()
{
    int vetorimpares[10], i = 0, aux = 0;
    while (i < 10) {
        if (aux % 2 != 0) {
            vetorimpares[i] = aux;
            i++;
        }
        aux++;
    }
    printf("Os 10 primeiros numeros impares sao: ");
    for (i = 0; i < 10; i++) {
        if (i != 9) {
            printf("%d, ", vetorimpares[i]);
        } else {
            printf("%d. \n", vetorimpares[i]);
        }
    }
}

// Exercicio 08

void l04ex08()
{
    int vetorinicial[16], vetorfinal[16];

    for (int i = 0; i < 16; i++)
    {
        printf("Digite o %d numero do vetor: \n", i + 1);
        scanf("%d", &vetorinicial[i]);
    }

    for (int i = 0; i < 16; i++)
    {
        if (i <= 7) {
            vetorfinal[i+8] = vetorinicial[i];
        } else {
            vetorfinal[i-8] = vetorinicial[i];
        }
    }
    for (int i = 0; i < 16; i++)
    {
        if (i != 15)
        {
            printf("%d, ", vetorfinal[i]);
        }
        else
        {
            printf("%d. \n", vetorfinal[i]);
        }
    }
    
    
}

// Exercicio 09

void l04ex09()
{
    int vetor[20], x = 0;
    for (int i = 0; i < 20; i++)
    {
        printf("Digite o %d numero do vetor: \n", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("Digite o numero que deseja verificar: \n");
    scanf("%d", &x);
    for (int i = 0; i < 20; i++)
    {
        if (vetor[i] == x)
        {
            printf("O numero %d esta na posicao %d do vetor. \n", x, i + 1);
        }
    }

}

// Exercicio 10

void l04ex10()
{
    int vetor[40], pares;
    for (int i = 0; i < 40; i++)
    {
        printf("Digite o %d numero do vetor: \n", i + 1);
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < 40; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            pares++;
        }
    }
    printf("O vetor possui %d numeros pares. \n", pares);

}

// Main

void main()
{
    int lista, exercicios, executar = 1;

    while (executar == 1)
    {
        lista = 0;
        exercicios = 0;
        executar = 0;

        while (lista < 1 || lista > 4)
        {
            printf("=========================//========================= \n");
            printf("Qual lista de exercicios voce deseja executar? \n");
            printf("1 - Lista 1 \n");
            printf("2 - Lista 2 \n");
            printf("3 - Lista 3 \n");
            printf("4 - Lista 4 \n");
            scanf("%d", &lista);
            if (lista < 1 || lista > 4)
            {
                printf("Lista nao encontrada \n");
            }
        }
        while (exercicios < 1 || exercicios > 10)
        {
            printf("=========================//========================= \n");
            printf("Qual exercicio da lista %d voce deseja executar? \n", lista);
            switch (lista)
            {
            case 1:
                printf("1 - Calculo area de terreno \n");
                printf("2 - Calculadora de ferraduras de cavalos \n");
                printf("3 - Calculo de venda e quantidade a guardar em poupança de uma padaria \n");
                printf("4 - Tempo de vida de uma pessoa especifica em dias \n");
                printf("5 - Quantidade de gasolina comprada \n");
                printf("6 - Calculo de preço que devera ser pago por um prato de acordo com o peso \n");
                printf("7 - Quantos dias fazem que começou o ano\n");
                printf("8 - Media ponderada da nota de 3 alunos \n");
                printf("9 - Total arrecado com camisas de diversos tamanhos \n");
                printf("10 - Distancia entre dois pontos em uma plano cartesiano\n");
                printf("0 - Sair \n");
                printf("=========================//========================= \n");
                scanf("%d", &exercicios);
                if (exercicios == 0)
                {
                    goto fim;
                }

                switch (exercicios)
                {
                case 1:
                    l01ex01();
                    break;
                case 2:
                    l01ex02();
                    break;
                case 3:
                    l01ex03();
                    break;
                case 4:
                    l01ex04();
                    break;
                case 5:
                    l01ex05();
                    break;
                case 6:
                    l01ex06();
                    break;
                case 7:
                    l01ex07();
                    break;
                case 8:
                    l01ex08();
                    break;
                case 9:
                    l01ex09();
                    break;
                case 10:
                    l01ex10();
                    break;
                default:
                    printf("Exercicio nao encontrado \n");
                    break;
                }
                break;
            case 2:
                printf("1 - Maior valor entre 2 valores \n");
                printf("2 - Valor par ou impar \n");
                printf("3 - Soma de valores caso igual ou multiplicacao caso diferente \n");
                printf("4 - Valor x 3 caso negativo e valor x 2 caso positivo \n");
                printf("5 - Valor + 5 caso par e valor + 8 caso impar \n");
                printf("6 - 3 valores em ordem decrescente \n");
                printf("7 - Peso ideal de acordo com altura e sexo \n");
                printf("8 - Valor de uma compra de acordo com metodo de pagamento \n");
                printf("9 - Verificar se aluno esta aprovado, recuperacao ou reprovado\n");
                printf("10 - Diferenca entre dois valores\n");
                printf("0 - Sair \n");
                printf("=========================//========================= \n");
                scanf("%d", &exercicios);
                if (exercicios == 0)
                {
                    goto fim;
                }

                switch (exercicios)
                {
                case 1:
                    l02ex01();
                    break;
                case 2:
                    l02ex02();
                    break;
                case 3:
                    l02ex03();
                    break;
                case 4:
                    l02ex04();
                    break;
                case 5:
                    l02ex05();
                    break;
                case 6:
                    l02ex06();
                    break;
                case 7:
                    l02ex07();
                    break;
                case 8:
                    l02ex08();
                    break;
                case 9:
                    l02ex09();
                    break;
                case 10:
                    l02ex10();
                    break;
                default:
                    printf("Exercicio nao encontrado \n");
                    break;
                }
                break;
            case 3:
                printf("1 - 10 x Seu nome \n");
                printf("2 - 20 x Uma mensagem \n");
                printf("3 - X x Uma mensagem \n");
                printf("4 - Soma dos numeros de 1 ao 15 \n");
                printf("5 - Soma de 10 numeros \n");
                printf("6 - Soma de 20 idades \n");
                printf("7 - Media de 20 idades \n");
                printf("8 - Quantas pessoas entre 20 sao maiores de idade \n");
                printf("9 - A pessoa mais nova entre 10 pessoas \n");
                printf("10 - Tabuada ate 10 de um numero \n");
                printf("0 - Sair \n");
                printf("=========================//========================= \n");
                scanf("%d", &exercicios);
                if (exercicios == 0)
                {
                    goto fim;
                }

                switch (exercicios)
                {
                case 1:
                    l03ex01();
                    break;
                case 2:
                    l03ex02();
                    break;
                case 3:
                    l03ex03();
                    break;
                case 4:
                    l03ex04();
                    break;
                case 5:
                    l03ex05();
                    break;
                case 6:
                    l03ex06();
                    break;
                case 7:
                    l03ex07();
                    break;
                case 8:
                    l03ex08();
                    break;
                case 9:
                    l03ex09();
                    break;
                case 10:
                    l03ex10();
                    break;
                default:
                    printf("Exercicio nao encontrado \n");
                    break;
                }
                break;
            case 4:
                printf("1 - Soma de 2 vetores de 10 valores em um 3° vetor \n");
                printf("2 - Algumas informações sobre um vetor de 20 posições \n");
                printf("3 - Vetor de 8 valores multiplicado por 2 \n");
                printf("4 - Soma de vetor A + B com resulado em C \n");
                printf("5 - Especificacao de um vetor com 10 elementos \n");
                printf("6 - Maior e menor idade em um grupo com 10 pessoas\n");
                printf("7 - 10 primeiros numero impares\n");
                printf("8 - Inversao das 8 primeiras com as 8 ultimas posições de um array de 16 \n");
                printf("9 - Procurar valor X em um vetor de 20 posições \n");
                printf("10 - Valores pares em um vetor de 40 posições \n");
                printf("0 - Sair\n");
                printf("=========================//========================= \n");
                scanf("%d", &exercicios);
                if (exercicios == 0)
                {
                    goto fim;
                }

                switch (exercicios)
                {
                case 1:
                    l04ex01();
                    break;
                case 2:
                    l04ex02();
                    break;
                case 3:
                    l04ex03();
                    break;
                case 4:
                    l04ex04();
                    break;
                case 5:
                    l04ex05();
                    break;
                case 6:
                    l04ex06();
                    break;
                case 7:
                    l04ex07();
                    break;
                case 8:
                    l04ex08();
                    break;
                case 9:
                    l04ex09();
                    break;
                case 10:
                    l04ex10();
                    break;
                default:
                    printf("Exercicio nao encontrado \n");
                    break;
                }
                break;
            }
        }

    fim:
        printf("=========================//========================= \n");
        printf("Voce deseja executar outro exercicio? \n");
        printf("1 - Sim \n");
        printf("Qualquer outro numero - Nao \n");
        printf("=========================//========================= \n");
        scanf("%d", &executar);

        if (executar != 1)
        {
            printf("Obrigado por utilizar o programa! \n");
        }
    }
}