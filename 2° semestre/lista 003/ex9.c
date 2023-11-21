#include<stdio.h>

struct produto{
    char nome[50];
    int cod, qtda;
    float valor;
};

int main(){
    struct produto *prod;
    int n=1,i;
    char op;
    prod = (struct produto*)malloc(n * sizeof(struct produto));
    if (prod == NULL){
        exit (1);
    }
    do{
        printf("Informe nome produto\n");
        fflush(stdin);
        gets (prod[n-1].nome);
        printf("Informe codigo\n");
        scanf("%i", &prod[n-1].cod);
        printf("Deseja inserir novo produto? s/n");
        scanf("%s",&op);
        if(op=='s'|| op=='S'){
            n++;
            prod = (struct produto*)realloc(prod,n * sizeof(struct produto));
        }
    }while(op=='s'|| op=='S');
    for(i=0;i<n;i++){
        printf("Nome: %s\n",prod[i].nome);
        printf("Codigo: %i\n",prod[i].cod);
    }
    free(prod);
}