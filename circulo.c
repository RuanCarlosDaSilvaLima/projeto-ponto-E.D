/*Function cria
**Aloca e retorna um *circulo com centro (x,y) e raio r
*/
PCirculo cria_circulo(float x, float y, float r){
    PCirculo c = (PCirculo)malloc(sizeof(Circulo));
    
    c->x = x;
    c->y = y;
    c->r = r;

    return c;
}
/*Function libera
**Libera a memoria que foi alocada no circulo previamente criado
*/
void libera_circulo(PCirculo c){
    free(c);
}
/*Function area
**Retornao valor da area do circulo
*/
float area_circulo(PCirculo c){
    return PI*pow(c->r, 2);
}
/*Function interior
**Verifica se um dado ponto p esta interior ao circulo
*/
int interior_circulo(PCirculo c, PPonto p){
    if(distancia(&C->P, &P) <= C->R)
        printf("interno\n");
    else
        printf("esterno\n");
}
