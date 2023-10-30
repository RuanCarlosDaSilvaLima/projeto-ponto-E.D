#ifndef __stdlib_h__
#define __stdlib_h__
    #include <stdlib.h>
#endif

typedef struct lista{
    int info;
    struct lista* prox;
}Lista;
typedef Lista* PLista;

PLista cria_lista(void);
PLista insere_lista(PLista lista, int info);
void print_lista(PLista lista);
PLista busca_lista(PLista l, int aux);
void libera_lista(PLista lista);
PLista retira_lista(PLista lista, int info);

#include "lista.c"
