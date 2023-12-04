#ifndef __pilha_h__
    #define __pilha_h__
    #include <stdio.h>
    #include <stdlib.h>
    typedef struct no
    {
        int info;
        struct no *sae;
        struct no *sad;
    } No;
    typedef No *PNo;

    PNo cria_arv_vazia();
    PNo cria_arv(int info, PNo sae, PNo sad);
    PNo arv_vazia(PNo arvore);
    void arv_imprime(PNo arvore);
    void arv_libera(PNo arvore);
    int arv_conta(PNo arvore);
    int arv_profundidade(PNo arvore);

    #include "arvore.c"
#endif