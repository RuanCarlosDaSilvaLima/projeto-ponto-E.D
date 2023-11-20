PPilha cria_pilha(){
    return NULL;
}
PPilha push_pilha(PPilha p, int info){
    PPilha new;
    new->prox = p;
    new = info;
    return new;
}
PPilha pop_pilha(PPilha p, int * info){
    *info =  p->info;
    PPilha aux = p;
    p = p->prox;
    free(aux);
    return p;
}
void liberar_pilha(PPilha * p){
    for (; p != NULL; p = p->prox){
        PPilha aux = p;
        p = p->prox;
        free(aux);
    }
    free(p);
}
void imprime(PPilha p){
    for (; p != NULL; p = p->prox);
        printf("%d\n", p->info);
}