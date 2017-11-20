#include <stdio.h>
#define alturaMaxima 225

typedef struct{
    int peso; //peso em quilogramas
    int altura; // altura em centimetros    
} pesoAltura;

int main(){
    pesoAltura pessoa;
    pessoa.peso = 80;
    pessoa.altura = 185;
    printf("Peso %i, Altura %i. ", pessoa.peso, pessoa.altura);
    if(pessoa.altura>alturaMaxima) printf("Altura acima da maxima.\n");
    else printf("Altura abaixo da maxima.\n");  
    return 0;
}