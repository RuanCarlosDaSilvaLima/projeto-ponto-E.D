/*TAD Circulo*/
#ifndef __ponto_h__
#define __ponto_h__
    #include "ponto.h"
#endif
#ifndef __math_h__
#define __math_h__
    #include <math.h>
#endif
#ifndef __stdlib_h__
#define __stdlib_h__
    #include <stdlib.h>
#endif

/*Tipo exportado*/
typedef struct circulo {
    float x, y, r;
}Circulo;
typedef Circulo* PCirculo;

/*Funções exportadas*/
/*Function cria
**Aloca e retorna um *circulo com centro (x,y) e raio r
*/
PCirculo cria_circulo(float x, float y, float r);
/*Function libera
**Libera a memoria que foi alocada no circulo previamente criado
*/
void libera_circulo(PCirculo c);
/*Function area
**Retornao valor da area do circulo
*/
float area_circulo(PCirculo c);
/*Function interior
**Verifica se um dado ponto p esta interior ao circulo
*/
int interior_circulo(PCirculo c, PPonto p);

