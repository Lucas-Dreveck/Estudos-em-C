void eleminaNNos(LISTA* lista){
    if((lista) == NULL){
        printf("Lista vazia...");
        return 0;
    }

    nodetmp;
    tmp = (lista);
    int qtN = 0, qtEle = 0, cont = 0;

    printf("Informe quantos nohs quer remover: ");
    scanf("%d", &qtN);

    while(tmp != NULL){
        qtEle++;
        tmp = tmp->prox;
    }

    tmp = (lista);

    while((lista)!= NULL){
        if(qtEle < qtN){
            tmp = (lista);
            lista = (lista)->prox;
            free (tmp);
        }else if(cont<=qtN){
            tmp = (*lista);
            lista = (lista)->prox;
            free(tmp);
            cont++;
            if(cont == qtN){
                break;
            }
        }
    }

}