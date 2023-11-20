#ifndef __stdlib_h__
#define __stdlib_h__
    #include <stdlib.h>
#endif
#ifndef __stdio_h__
#define __stdio_h__
    #include <stdio.h>
#endif

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