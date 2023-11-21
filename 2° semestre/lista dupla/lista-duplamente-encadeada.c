#include <stdio.h>
#include <stdlib.h>

struct Node{
    int num;
    struct Node *prox;
    struct Node *ant;
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
    scanf ("%d", &novo->num);
    novo->prox = (*lista);
    if ((*lista) != NULL) {
        novo->prox->ant = novo; 
    }
    novo->ant = NULL; 
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
        novo->ant = NULL;
        *lista = novo;
    }else{
        node *tmp;
        tmp = (*lista);
        while (tmp->prox != NULL) {
            tmp = tmp->prox;
        }
        novo->ant = tmp;
        tmp->prox = novo;
    }
}

void insereOrdenado(LISTA* lista) {
    ordena(lista);
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
    novo->ant = NULL;
    if ((*lista) == NULL) {
        *lista = novo;
    }else if (novo->num < tmp->num) {
        novo->prox=(*lista);
        *lista = novo;
    }else {
        while (tmp->prox != NULL && novo->num > tmp->prox->num) {
            tmp = tmp->prox;
        }
            novo->ant = tmp;
        if (tmp->prox == NULL) {
            tmp->prox = novo;
        } else {
            novo->prox = tmp->prox;
            tmp->prox = novo;
        }
    }
}

int removeInicio(LISTA* lista) {
    node *tmp;
    tmp = *lista;
    if ((*lista) != NULL && tmp->prox == NULL) {
        *lista = NULL;
        free(tmp);
        printf ("A lista esta agora vazia\n");
    }else if((*lista) != NULL) {
        tmp->prox->ant = NULL;
        *lista = tmp->prox;
        free (tmp) ;
        printf ("Elemento removido com sucesso...\n");
    }else{
        printf ("Lista ja esta vazia... \n");
    }
}

int removeFinal(LISTA* lista) {
    node *tmp;
    tmp = *lista;
    if ((*lista) != NULL && tmp->prox == NULL){
        *lista = NULL;
        free (tmp);
        printf ("A lista esta agora vazia\n");
    }else if((*lista) != NULL) {
        while (tmp->prox != NULL) {
            tmp = tmp->prox;
        }
        tmp->ant->prox = NULL;
        free (tmp) ;
        printf ("Elemento removido com sucesso...\n");
    }else{
        printf ("Lista ja esta vazia... \n");
}
}

void removeEspecifico (LISTA* lista) {
    node *tmp;
    tmp = (*lista);
    if ((*lista) == NULL) {
            printf("LISTA VAZIA...\n");
        } else {
            int valor;
            printf("Qual o valor que voce deseja remover? \n");
            scanf("%d", &valor);
            while (tmp->num != valor && tmp-> prox != NULL){
                    tmp = tmp->prox;  
            }
            if (tmp->num != valor) {
                printf("O valor nao esta na lista\n");
            }else if (tmp == (*lista)){
                if ((*lista) != NULL && tmp->prox == NULL){
                    *lista = NULL;
                    free (tmp);
                    printf ("A lista esta agora vazia\n");
                }else {
                    tmp->prox->ant = NULL;
                    *lista = tmp->prox;
                    free (tmp) ;
                    printf ("Elemento removido com sucesso...\n");
                }
            } else if (tmp->prox == NULL) {
                tmp->ant->prox = NULL;
                free (tmp) ;
                printf ("Elemento removido com sucesso...\n");
            } else {
                tmp->ant->prox = tmp->prox;
                tmp->prox->ant = tmp->ant;
                free(tmp);
                printf("Elemento removido com sucesso...\n");
            }
        }
}

void exibeCrescente(LISTA* lista) {
    if( (*lista) == NULL) {
        printf ("LISTA VAZIA...\n");
    }else{
        node *tmp;
        tmp = (*lista);
        while (tmp != NULL) {
            printf("%d  ", tmp->num);
            tmp = tmp->prox;
        }
    }
    printf("\n");
}

void exibeDecrescente(LISTA* lista) {
    if( (*lista) == NULL) {
        printf ("LISTA VAZIA...\n");
    }else{
        node *tmp;
        tmp = (*lista);
        while (tmp->prox != NULL) {
            tmp = tmp->prox;
        }
        while (tmp != NULL) {
            printf("%d  ", tmp->num) ;
            tmp = tmp->ant;
        }
    }
    printf("\n");
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

int main () {
    LISTA *lista = criarLista();
    int opcao;
    do {
        system("cls");
        printf("Esolha uma das opcoes abaixo\n");
        printf("1 - Inserir Elemento no comeco\n");
        printf("2 - Inserir Elemento no final\n");
        printf("3 - Inserir elemento de forma ordenada\n");
        printf("4 - Remover Elemento no comeco\n");
        printf("5 - Remover Elemento no final\n");
        printf("6 - Remover Elemento especifico\n");
        printf("7 - Exibir lista crescente\n");
        printf("8 - Exibir lista decrescente\n");
        printf("9 - Ordenar lista\n");
        printf("10 - Desalocar lista\n");

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
            removeInicio(lista);
            break;
        case 5:
            removeFinal(lista);
            break;
        case 6:
            removeEspecifico(lista);
            break;
        case 7:
            ordena(lista);
            exibeCrescente(lista);
            break;
        case 8:
            ordena(lista);
            exibeDecrescente(lista);
            break;
        case 9:
            ordena(lista);
            break;
        case 10:
            libera(lista);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
        printf("Deseja selecionar outra opcao? 1 - Sim 0 - Nao\n");
        scanf("%d", &opcao);
    }while(opcao < 11 && opcao > 0);
    printf("\n\nObrigado por utilizar o programa!\n");
    libera(lista);
    free(lista);
    return 0;
}