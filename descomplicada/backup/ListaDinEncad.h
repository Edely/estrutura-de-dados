#include <stdio.h>
#include <stdlib.h>

struct aluno{
    int matricula;
    char nome[30];
    float n1, n2, n3;  
};

typedef struct elemento* Lista;

Lista* cria_lista();

int tamanho_lista(Lista* li);
int lista_cheia(Lista* li);

int lista_vazia(Lista* li);

int remove_lista_inicio(Lista *li);

int remove_lista_fim(Lista *li);