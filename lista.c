/*function cria
** aponta NULL a lista;
*/
PLista cria_lista(void){
    return NULL;
}
/*function incere
** aloca dinamicamente e preenche a lista
*/
PLista insere_lista(PLista lista, int info){
    PLista aux = (PLista)malloc(sizeof(Lista));
    aux->info = info;
    aux->prox = lista;
    
    return aux;
}
/*function print
** percorre e emprime todas as informações da lista
*/
void print_lista(PLista aux){
    while (aux != NULL){
        printf("%d\n", aux->info);
        aux = aux->prox;
    }
}
/*function busca
** percorre a lista se a info ta na lista retorna o *lista 
*/
PLista busca_lista(PLista l, int info){
    PLista p;
    for (p = l; p != NULL; p = p->prox)
        if(p->info == info)
            return p;
    return p;
}
/*function libera
** libera a memoria usada na lista limpando a lista
*/
void libera_lista(PLista lista){
    PLista p;
    while(lista != NULL){
        p = lista;
        lista = lista->prox;
        free(p);
    }
}
/*function retira
** percore e retira o info da lista
*/
PLista retira_lista(PLista lista, int info){
    PLista aux = NULL;
    PLista p = lista;

    while (p != NULL && p->info != info){
        aux = p;
        p = p->prox;
    }
    
    if (p == NULL){
        return lista;
    } else if (aux == NULL){
        lista = p->prox;
        free(p);
    } else{
        aux->prox = p->prox;
        free(p);
    }

    return lista;
}
