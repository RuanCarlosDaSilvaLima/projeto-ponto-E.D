#include <stdio.h>
#include "lista.h"

void percorre(PLista l);

int main(void){
    PLista lista = cria_lista();
    
    lista = insere_lista(lista, 55);
    lista = insere_lista(lista, 101);
    lista = insere_lista(lista, 202);
    
    percorre(lista);

    return 0;
}

