#include <stdio.h>
#include <stdlib.h>

struct No {
    int num;
    struct No *esq;
    struct No *dir;
};
typedef struct No no;
typedef no *ArvBin;

ArvBin* criarArvBin() {
    ArvBin *raiz = (ArvBin*) malloc(sizeof(ArvBin));
    if (raiz != NULL) {
        *raiz = NULL;
    } else {
        printf("Erro ao alocar memoria!\n");
    }
    return raiz;
}

int insere_ArvBin(ArvBin* raiz) {
    no *novo = (no *) malloc(sizeof(no));

    if (novo == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 0;
    }
    printf("Novo elemento: ");
    scanf("%d", &novo->num);
    novo->dir = NULL;
    novo->esq = NULL;
    if (*raiz == NULL) {
        *raiz = novo;
    } else {
        no *atual = *raiz;
        no *ant = NULL;
        while (atual != NULL) {
            ant = atual;
            if (novo->num == atual->num) {
                printf("Elemento ja existe na arvore!\n");
                free(novo);
                return 0;
            }
            if (novo->num > atual->num) {
                atual = atual->dir;
            } else {
                atual = atual->esq;
            }
        }
        if (novo->num > ant->num) {
            ant->dir = novo;
        } else {
            ant->esq = novo;
        }
    }
    return 1;
}

void exibe_pre(ArvBin* raiz) {
    if (*raiz == NULL) {
        return;
    } else {
        printf("%d\n", (*raiz)->num);
        exibe_pre(&((*raiz)->esq));
        exibe_pre(&((*raiz)->dir));
    }
}

void exibe_in(ArvBin* raiz) {
    if (*raiz == NULL) {
        return;
    } else {
        exibe_in(&((*raiz)->esq));
        printf("%d\n", (*raiz)->num);
        exibe_in(&((*raiz)->dir));
    }
}

void exibe_pos(ArvBin* raiz) {
    if (*raiz == NULL) {
        return;
    } else {
        exibe_pos(&((*raiz)->esq));
        exibe_pos(&((*raiz)->dir));
        printf("%d\n", (*raiz)->num);
    }
}

int conta_nos(ArvBin* raiz) {
    if (*raiz == NULL) {
        return 0;
    } else {
        return 1 + conta_nos(&((*raiz)->esq)) + conta_nos(&((*raiz)->dir));
    }
}

int altura(ArvBin* raiz) {
    if (*raiz == NULL) {
        return -1;
    } else {
        int altura_esq = altura(&((*raiz)->esq));
        int altura_dir = altura(&((*raiz)->dir));
        return 1 + (altura_esq > altura_dir ? altura_esq : altura_dir);
    }
}

no* remove_atual (no *atual) {
    no *no1, *no2;
    if (atual->esq == NULL) {
        no2 = atual->dir;
        free(atual);
        return no2;
    }
    no1 = atual;
    no2 = atual->esq;
    while (no2->dir != NULL) {
        no1 = no2;
        no2 = no2->dir;
    }
    if (no1 != atual) {
        no1->dir = no2->esq;
        no2->esq = atual->esq;
    }
    no2->dir = atual->dir;
    free(atual);
    return no2;
}

void remove_NO_desejado (ArvBin* raiz) {
    no *atual = *raiz;
    no *ant = NULL;
    int num = 0;
    int found = 0;
    printf("Digite o numero que deseja remover: ");
    scanf("%d", &num);
    while (atual != NULL) {
        if (num == atual->num) {
            if (atual == *raiz) {
                *raiz = remove_atual(atual);
            } else {
                if (ant->dir == atual) {
                    ant->dir = remove_atual(atual);
                } else {
                    ant->esq = remove_atual(atual);
                }
            }
            found = 1;
            break;
        } else {
            ant = atual;
            if (num > atual->num) {
                atual = atual->dir;
            } else {
                atual = atual->esq;
            }
        }
    }
    if (!found) {
        printf("Elemento nao encontrado!\n");
    }
}

void libera_NO (no *no_liberar) {
    if (no_liberar == NULL) {
        return;
    }
    libera_NO(no_liberar->esq);
    libera_NO(no_liberar->dir);
    free(no_liberar);
}

int libera_ArvBin (ArvBin* raiz) {
    if (raiz == NULL) {
        return 0;
    } else {
        libera_NO(*raiz);
    }
    free(raiz);
}

void main () {
int contagem = 0, opc = 0;
ArvBin *raiz = criarArvBin();

do {
    printf("1 - Inserir\n");
    printf("2 - Exibir pre-ordem\n");
    printf("3 - Exibir in-ordem\n");
    printf("4 - Exibir pos-ordem\n");
    printf("5 - Contar nos\n");
    printf("6 - Altura\n");
    printf("7 - Remover no\n");
    printf("8 - Liberar arvore\n");
    printf("0 - Sair\n");
    scanf("%d", &opc);
    system("cls");
switch (opc) {
    case 1:
        insere_ArvBin(raiz);
        break;
    case 2:
        exibe_pre(raiz);
        break;
    case 3:
        exibe_in(raiz);
        break;
    case 4:
        exibe_pos(raiz);
        break;
    case 5:
        contagem = conta_nos(raiz);
        printf("A arvore possui %d nos\n", contagem);
        break;
    case 6:
        contagem = altura(raiz);
        printf("A arvore possui altura %d\n", contagem);
        break;
    case 7:
        remove_NO_desejado(raiz);
        break;
    case 8:
        libera_ArvBin(raiz);
        break;
    case 0:
        printf("Saindo...\n");
        break;
    default:
        printf("Opcao invalida!\n");
        break;
}

} while ( opc != 0 );

    libera_ArvBin(raiz);
}