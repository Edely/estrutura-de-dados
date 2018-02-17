#include <stdlib.h>
#include <stdio.h>
#include "Ponto.c" 

int main(){
    float d;
    Ponto *p, *q;
    //Ponto r; //ERRO
    p = pto_cria(10, 21);
    q = pto_cria(7, 25);
    //q->x = 2; //ERRO
    d = pto_distancia(p, q);
    printf("Distancia entre dois pontos: %f\n", d);
    pto_libera(q);
    pto_libera(p);

    return 0;
}