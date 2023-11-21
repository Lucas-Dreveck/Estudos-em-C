#include <stdio.h>


int ex20 (int nota1, int nota2) {
    int media;
        media = (nota1 + nota2) / 2;
        if (media >= 6) {
            printf("O aluno foi aprovado com media %d\n", media);
        } else {
            printf("O aluno foi reprovado com media %d\n", media);
        }
    return 0;
}


int ex21 () {
    int fumantes = 25, nao_fumantes = 25, cliente;
    while (fumantes > 0 || nao_fumantes > 0) {
        printf("Temos %d mesas disponiveis para fumantes e %d mesas disponiveis para nao fumantes.\n", fumantes, nao_fumantes);
        printf("Voce deseja uma mesa na area de fumantes ou de nao fumantes?\n1- Fumantes\n2- Nao fumantes\n");
        scanf("%d", &cliente);
        if (cliente == 1) {
                if (fumantes > 0) {
                    printf("A mesa esta disponivel e ja lhe foi reservada.\n");
                    fumantes--;
                }  else {
                    printf("A mesa nao esta disponivel no momento.\n");
                }
         } else if (cliente == 2) {
                if (nao_fumantes > 0) {
                    printf("A mesa esta disponivel e ja lhe foi reservada.\n");
                    nao_fumantes--;
                }  else {
                    printf("A mesa nao esta disponivel no momento.\n");
                }
        } else {
            printf("Opcao invalida!\n");
        }
        }
        return 0;
    }



int ex22 () {
    float viagem = 4000, parada = 0;
    while (viagem > 0) {
        printf("Faltam %.2f km para percorrer.\n", viagem);
        printf("Digite a distancia percorrida des da ultima cidade em km: ");
        scanf("%f", &parada);
        viagem = viagem - parada;
        if (viagem <= 0) {
        printf("Voce chegou ao destino final!\n");
        }
    }
}


int ex23 () {
    int voto;
    printf("Digite em qual candidato voce deseja votar: \n 1 - Jose \n 2 - Joao \n");
    scanf("%d", &voto);
    return voto;
}


int ex24 (int casas) {
    int canal, pessoas, canal3 = 0, canal5 = 0, canal8 = 0, canal11 = 0, canal13 = 0, total = 0;
    for ( int i = 1; i <= casas; i++) {
        printf("Qual o canal que a casa %d assite? \nOpcoes: \n3,5,8,11 ou 13 \n", i);
        scanf("%d", &canal);
        printf("Quantas pessoas assistem esse canal? \n");
        scanf("%d", &pessoas);
        switch (canal) {
            case 3:
            canal3 += pessoas;
            total += pessoas;
            break;
            case 5:
            canal5 += pessoas;
            total += pessoas;
            break;
            case 8:
            canal8 += pessoas;
            total += pessoas;
            break;
            case 11:
            canal11 += pessoas;
            total += pessoas;
            break;
            case 13:
            canal13 += pessoas;
            total += pessoas;
            break;
            default:
            printf("Canal invalido! \n");
            break;
        }
    }
    canal3 = (canal3 * 100) / total;
    canal5 = (canal5 * 100) / total;
    canal8 = (canal8 * 100) / total;
    canal11 = (canal11 * 100) / total;
    canal13 = (canal13 * 100) / total;
    printf("A porcentagem de telespectadores de cada canal eh: \n Canal 3: %d%% \n Canal 5: %d%% \n Canal 8: %d%% \n Canal 11: %d%% \n Canal 13: %d%% \n", canal3, canal5, canal8, canal11, canal13);
    return 0;
}



int main () {
    int opcao = 20; 
    int alunos; //ex20
    int voto = 0, titulo = 0, jose = 0, joao = 0; // ex23
    int casas;//ex 24
    while (opcao > 19 && opcao < 25) {
    printf("Qual Exercicio voce deseja executar? \n20-Calcular media de alunos \n21-Reservar mesa de restaurante para fumantes ou nao fumantes \n22-Viagem 4000km com paradas \n23-Prefeito Jose e Joao \n24-Pesquisa de Canais \nOu digite 0 para sair. \n");
    scanf("%d", &opcao);
    switch (opcao) {
        case 20:
            printf("Quantos alunos tem na turma? \n");
            scanf("%d", &alunos);
            for ( int i = 1; i <= alunos; i++) {
                int nota1, nota2;
                printf("Digite a primeira nota do aluno %d: ", i);
                scanf("%d", &nota1);
                printf("Digite a segunda nota do aluno %d: ", i);
                scanf("%d", &nota2);
                ex20(nota1, nota2);
            }
            break;
        case 21:
            ex21();
            break;
        case 22:
            ex22();
            break;
        case 23:
            printf("Digite o seu titulo de eleitor: \n");
            scanf("%d", &titulo);
            while (titulo >= 0) {
                voto = ex23();
                if(voto == 1) {
                    jose++;
                } else if (voto == 2) {
                    joao++;
                } else {
                    printf("Opcao invalida!");
                }
                titulo = 0;
                printf("Digite o seu titulo de eleitor: \n");
                scanf("%d", &titulo);
            }
            printf("Jose recebeu %d votos e Joao recebeu %d votos. \n", jose, joao);
            break;
        case 24:
            printf("Quantas casas participaram da pesquisa? \n");
            scanf("%d", &casas);
            ex24(casas);
            break;
        case 0:
            printf("Obrigado por utilizar o programa!");
            break;
        default:
            printf("Opcao invalida!");
            break;
    }
    }

}

