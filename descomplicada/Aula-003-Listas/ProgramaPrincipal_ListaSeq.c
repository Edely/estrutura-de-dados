#include <stdio.h>
#include <stdlib.h>
#include "ListaSequencial.c"

int main(){
    Lista *li;

    li = cria_lista();

    int x = tamanho_lista(li);

    int y = lista_cheia(li);

    int z = lista_vazia(li);

    libera_lista(li);

    return 0;
}
