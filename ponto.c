#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ponto_libera(PPonto p){
    free(p);
}
PPonto ponto_cria(float x, float y){
    PPonto p;
    p = (PPonto)malloc(sizeof(Ponto));
    
    p -> x = x;
    p -> y = y;

    return p;
}
float distancia(PPonto p1, PPonto p2){
    return sqrt(pow(p1->x - p2->x, 2) + pow(p1->y - p2->y, 2));
}
float ponto_ler_x(PPonto p){
    return p->x;
}
float ponto_ler_y(PPonto p){
    return p->y;
}
void ponto_acessa(PPonto p, float *x, float *y){
    *x = p->x;
    *y = p_>y;
}
void ponto_escrever_x(PPonto p, float x){
    p->x = x;
}
void ponto_escrever_y(PPonto p, float y){
    p->y = y;
}
