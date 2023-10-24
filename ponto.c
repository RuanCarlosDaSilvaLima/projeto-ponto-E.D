/*function libera 
** libera o espaço alocado que não esta sendo utilizado 
*/
void ponto_libera(PPonto p){
    free(p);
}
/*function cria 
** aloca e retorna um *ponto coordenadas (x,y)
*/
PPonto ponto_cria(float x, float y){
    PPonto p;
    p = (PPonto)malloc(sizeof(Ponto));
    
    p -> x = x;
    p -> y = y;

    return p;
}
/*function distancia 
** recebe dois *pontos e calcula a distancia entre eles retornando o valor em float 
*/
float distancia(PPonto p1, PPonto p2){
    return sqrt(pow(p1->x - p2->x, 2) + pow(p1->y - p2->y, 2));
}
/*function ler x
** recebe um *ponto, le e retorna x em um float 
*/
float ponto_ler_x(PPonto p){
    return p->x;
}
/*function ler y
** recebe um *ponto, le e retorna y em um float 
*/
float ponto_ler_y(PPonto p){
    return p->y;
}
/*function acessa
** recebe um *ponto, le e atribui em dois *floats o x e o y 
*/
void ponto_acessa(PPonto p, float *x, float *y){
    *x = p->x;
    *y = p_>y;
}
/*function excreve x
** recebe um *ponto e um float, atribui o valor do float no x do *ponto
*/
void ponto_escrever_x(PPonto p, float x){
    p->x = x;
}
/*function excreve y
** recebe um *ponto e um float, atribui o valor do float no y do *ponto
*/
void ponto_escrever_y(PPonto p, float y){
    p->y = y;
}
