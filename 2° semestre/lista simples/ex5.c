#include <stdio.h>
#include <stdlib.h>

struct Node{
    int num;
    struct Node *prox;
};
typedef struct Node node;
typedef node *LISTA;


LISTA* criarLista() {
    LISTA *inicio =(LISTA*) malloc (sizeof(LISTA));
    if(inicio != NULL) {
        *inicio=NULL;
    }else{
        printf ("Erro na alocacao...\n");
        exit (0);
    }

    return inicio;
}

void insereInicio(LISTA* lista) {
    node *novo = (node*) malloc (sizeof (node));
    if (novo == NULL) {
        printf ("Erro na alocacao...\n");
        exit (0);
    }
    printf("Informe valor do Novo elemento\n");
    scanf ("%d", &novo->num) ;
    novo->prox=(*lista);
    *lista = novo;
}

void insereFinal(LISTA* lista) {
    node *novo = (node*) malloc (sizeof (node));
    if (novo == NULL) {
        printf ("Erro na alocacao...\n");
        exit (0);
}
    printf ("Informe valor do Novo elemento\n");
    scanf ("%d", &novo->num) ;
    novo->prox = NULL;
    if ((*lista) == NULL) {
        *lista = novo;
    }else{
        node *tmp;
        tmp = (*lista);
        while (tmp->prox != NULL) {
            tmp = tmp->prox;
        }
        tmp->prox = novo;
    }
}

void insereOrdenado(LISTA* lista) {
    node *novo = (node*) malloc (sizeof (node));
    node *tmp;
    tmp = (*lista);
    if (novo == NULL) {
        printf ("Erro na alocacao...\n");
        exit (0);
    }
    printf ("Informe valor do Novo elemento\n");
    scanf ("%d", &novo->num);
    novo->prox = NULL;
    if ((*lista) == NULL) {
        *lista = novo;
    }else if (novo->num < tmp->num) {
        novo->prox=(*lista);
        *lista = novo;
    }else {
        while (tmp->prox != NULL && novo->num > tmp->prox->num) {
            tmp = tmp->prox;
        }
        if (tmp->prox == NULL) {
            tmp->prox = novo;
        } else {
            novo->prox = tmp->prox;
            tmp->prox = novo;
        }

    }

}

void exibe(LISTA* lista) {
    if( (*lista) == NULL) {
        printf ("LISTA VAZIA...\n");
    }else{
        node *tmp;
        tmp = (*lista);
        while (tmp != NULL) {
            printf("%d  ", tmp->num) ;
            tmp = tmp->prox;
        }
    }
    printf("\n");
}

void libera(LISTA* lista) {
    if((*lista) == NULL) {
        printf ("LISTA VAZIA...\n");
    }else{
        node *tmp;
        while ((*lista) != NULL) {
            tmp = *lista;
            *lista = (*lista) ->prox;
            free (tmp);
        }
    }
}

void ordena(LISTA* lista) {
    if( (*lista) == NULL) {
        printf ("LISTA VAZIA...\n");
    }else{
        int continua;
        do {
            continua = 0;
            node *tmp;
            tmp = (*lista);
            while (tmp->prox != NULL) {
                if (tmp->num > tmp->prox->num) {
                    int aux = tmp->num;
                    tmp->num = tmp->prox->num;
                    tmp->prox->num = aux;
                    continua = 1;
                }
                tmp = tmp->prox;
            }
        } while (continua);
    }
}

int removeInicio(LISTA* lista) {
    if((*lista) != NULL) {
        node *tmp;
        tmp = *lista;
        *lista = tmp->prox;
        free (tmp) ;
        printf ("Elemento removido com sucesso...\n");
    }else{
        printf ("Lista ja esta vazia... \n");
    }
}

int removeFinal(LISTA* lista) {
    node *antNode, *tmp;
    tmp = *lista;
    if ((*lista) != NULL && tmp->prox == NULL){
        *lista = NULL;
        free (tmp);
        printf ("Elemento removido com sucesso...\n");
    }else if((*lista) != NULL) {
        while (tmp->prox !=NULL) {
            antNode = tmp;
            tmp = tmp->prox;
        }
    antNode->prox = NULL;
    free (tmp) ;
    printf ("Elemento removido com sucesso...\n");
    }else{
    printf ("Lista ja esta vazia... \n");
}
}

void removeEspecifico (LISTA* lista) {
    node *tmp, *ant;
    tmp = (*lista);
    if ((*lista) == NULL) {
            printf("LISTA VAZIA...\n");
        } else {
            int valor;
            printf("Qual o valor que voce deseja remover? \n");
            scanf("%d", &valor);
            while (tmp->num != valor && tmp-> prox != NULL){
                    ant = tmp;
                    tmp = tmp->prox;  
            }
            if (tmp->num != valor) {
                printf("O valor nao esta na lista\n");
            }else if (tmp == (*lista)){
                removeInicio(lista);
            } else if (tmp->prox == NULL) {
                removeFinal(lista);
            } else {
                ant->prox = tmp->prox;
                printf("Elemento removido com sucesso...\n");
                free(tmp);
            }
        }
}

void removeNoEspecifico (LISTA* lista) {
    node *tmp, *ant;
    tmp = (*lista);
    if ((*lista) == NULL) {
        printf("LISTA VAZIA...\n");
    } else {
        int valor;
        printf("Qual o noh que voce deseja remover? \n");
        scanf("%d", &valor);
        for (int i = 1; i < valor; i++) {
            if (tmp->prox == NULL) {
                printf("Nao existe o noh desejado\n");
                return 0;
            } else {
            ant = tmp;
            tmp = tmp->prox;
            }
        }
        ant->prox = tmp->prox;
        printf("Noh removido com sucesso...\n");
        free(tmp);
    }
}

void nosComPrimos (LISTA* lista) {
    if( (*lista) == NULL) {
        printf ("LISTA VAZIA...\n");
    }else{
        node *tmp;
        int valor = 0;
        tmp = (*lista);
        while (tmp != NULL) {
            int a = 0;
            for (int i = 2; i <= tmp->num/2; i++) {
                if (tmp->num % i == 0) {
                    a++;
                    break;
                }
            }
            if (a == 0) {
                valor++;
            }
            tmp = tmp->prox;
        }
        if (valor > 0) {
            printf("Existem %d nohs com valor primo", valor);
        } else {
            printf("Nao existem nohs com valor primo");
        }
    }
    printf("\n");
}

int main () {
    LISTA *lista = criarLista();
    int opcao;
    do {
        system("cls");
        printf("Esolha uma das opcoes abaixo\n");
        printf("1 - Inserir Elemento no comeco\n");
        printf("2 - Inserir Elemento no final\n");
        printf("3 - Inserir elemento de forma ordenada\n");
        printf("4 - Exibir lista\n");
        printf("5 - Desalocar lista\n");
        printf("6 - Ordenar lista\n");
        printf("7 - Remover Elemento no comeco\n");
        printf("8 - Remover Elemento no final\n");
        printf("9 - Remover Elemento especifico\n");
        printf("10 - Remover Noh especifico\n");
        printf("11 - Exibir Nohs com valor primo\n");
        scanf("%d", &opcao);
        switch (opcao) {
        case 1:
            insereInicio(lista);
            break;
        case 2:
            insereFinal(lista);
            break;
        case 3:
            insereOrdenado(lista);
            break;
        case 4:
            exibe(lista);
            break;
        case 5:
            libera(lista);
            break;
        case 6:
            ordena(lista);
            break;
        case 7:
            removeInicio(lista);
            break;
        case 8:
            removeFinal(lista);
            break;
        case 9:
            removeEspecifico(lista);
            break;
        case 10:
            removeNoEspecifico(lista);
            break;
        case 11:
            nosComPrimos(lista);
            break;
        default:
            printf("Opcao invalida!");
            break;
        }
        printf("Deseja selecionar outra opcao? 1 - Sim 0 - Nao\n");
        scanf("%d", &opcao);
    }while(opcao < 12 && opcao > 0);
    printf("\n\nObrigado por utilizar o programa!\n");
    libera(lista);
    free(lista);
    return 0;
}