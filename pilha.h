#ifndef __pilha_h__
    #define __pilha_h__
    #include <stdio.h>
    #include <stdlib.h>

    typedef struct Pilha{
        int info;
        struct Pilha * prox;
    }Pilha;

    typedef Pilha* PPilha;

    PPilha cria_pilha();
    PPilha push_pilha(PPilha p, int info);
    PPilha pop_pilha(PPilha p, int * info);
    void liberar_pilha(PPilha * p);
    void imprime(PPilha p);

    #include "pilha.c"
#endif