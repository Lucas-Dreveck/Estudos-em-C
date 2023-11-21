#include <stdio.h>
#include <stdlib.h>

struct Node{
    int num;
    struct Node *prox;
};
typedef struct Node node;
typedef node *LISTA;


LISTA* criarPilha() {
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

int main () {
   LISTA *lista = criarPilha();

    int opcao;
    do {
        system("cls");
        printf("Esolha uma das opcoes abaixo\n");
        printf("1 - Inserir elemento na pilha\n");
        printf("2 - Excluir elemento na pilha\n");
        printf("3 - Exibe pilha\n");
        scanf("%d", &opcao);
        switch (opcao) {
        case 1:
            insereInicio(lista);
            exibe(lista);
            break;
        case 2:
            removeFinal(lista);
            exibe(lista);
            break;
        case 3:
            exibe(lista);
            break;
        default:
            printf("Opcao invalida!");
            break;
        }
        printf("Deseja selecionar outra opcao? 1 - Sim 0 - Nao\n");
        scanf("%d", &opcao);
    }while(opcao < 6 && opcao > 0);
    printf("\n\nObrigado por utilizar o programa!\n");
    libera(lista);
    free(lista);
    return 0;
}