#include <stdio.h>
#include <stdlib.h>
#include "ponto.c"

int main(){
    float d;
    Ponto *p, *q;
    
    p = pto_cria(16, 21);
    q = pto_cria(7, 25);
    
    d = pto_distancia(p, q);
    printf("Distancia entre pontos: %f\n", d);
    pto_libera(p);
    pto_libera(q);
    
    return 0;
}