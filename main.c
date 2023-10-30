#include <stdio.h>
#include "lista.h"

int main(void){
    PLista lista = cria_lista();
    
    lista = insere_lista(lista, 55);
    lista = insere_lista(lista, 101);
    lista = insere_lista(lista, 202);

    lista = retira_lista(lista, 55);
    print_lista(lista);

    return 0;
}
