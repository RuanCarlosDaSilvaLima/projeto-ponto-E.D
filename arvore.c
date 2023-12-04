PNo cria_arv_vazia(){
    return NULL;
}
PNo cria_arv(int info, PNo sae, PNo sad){
    PNo novo_no = (PNo)malloc(sizeof(No));
    if(novo_no){
        novo_no->info = info;
        novo_no->sae = sae;
        novo_no->sad = sad;
        return novo_no;
    }
    printf("Nao temos memoria suficiente!");
    exit(1);
}
PNo arv_vazia(PNo arvore){
    return arvore == NULL;
}
void arv_inprime(PNo arvore){
    if(!arv_vazia(arvore)){
        //pre-ondem
        printf("%d\n", arvore->info);
        arv_inprime(arvore->sae);
        //ordem simetrica
        arv_inprime(arvore->sad);
        //pós-ordem
    }
}
void arv_libera(PNo arvore){
    if(arv_vazia(arvore)){
        arv_libera(arvore);
        arv_libera(arvore);
        free(arvore);
    }
}
int arv_conta(PNo arvore){
    if (!arv_vazia(arvore))
        return 1+arv_conta(arvore->sae)+arv_conta(arvore->sad);
    else
        return 0;
}
int arv_profundidade(PNo arvore){
    if(arv_vazia(arvore))
        return -1;
    else    
        return 1+max2(arv_profundidade(arvore->sae)+arv_profundidade(arvore->sad));
}
static int max2(int a, int b){
    return (a>b)?a:b;
}