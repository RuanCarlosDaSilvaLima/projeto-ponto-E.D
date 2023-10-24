#include <stdio.h>
#include "ponto.h"

int main(void){
    PPonto p1 = ponto_cria(2.0, 1.0);
    PPonto p2 = ponto_cria(3.4, 2.1);
    float dist = distancia(p1, p2);
    printf("%2f", dist); 
    ponto_libera(p1);
    ponto_libera(p2);
}
