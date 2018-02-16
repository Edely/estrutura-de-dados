#include <stdio.h>
#include <stdlib.h>
#include "ListaDinEncad.h"

struct elemento{
    struct aluno dados;
    struct elemento Elem;
};

typedef struct elemento Elem;

Lista* cria_lista(){
    Lista* li = (Lista*) malloc(sizeof(lista));
    if(li !=NULL)
        *li = NULL;
    return li;
}

void libera_lista(Lista* li){
    if(li!=NULL){
        Elem* no;
        while((*li) != NULL){
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        free(li);
    }   
}

int tamanho(Lista* li){
    if(li == NULL)
        return 0;
    int cont = 0;
    Elem* no = *li;
    while(no != NULL){
        cont++;
        no = no->prox;
    }
    return cont;        
}
int lista_cheia(Lista* li){
    return 0;
}

int lista_vazia(Lista* li){
    if(li==NULL)
        return 1;
    if(*li == NULL)
        return 1;
    return 0;        
}

int remove_lista_inicio(Lista *li){
    if(li==NULL)
        return 0;
    if((*li) == NULL)
        return 0;
    
    Elem *no = *li;
    *li = no->prox;
    free(no);
    return 1;
}


int remove_lista_fim(Lista *li){
    if(li==NULL) return 0;
    if((*li) ==NULL)
        return 0;
    Elem *ant, *no = *li;
    while(no->prox != NULL){
        ant = no;
        no = no->prox;
    }
    if(no ==(*li))
        *li = no->prox;
    else
        ant->prox = no->prox;
    free(no);
    return 1;
}