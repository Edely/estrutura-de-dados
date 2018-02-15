#include <stdio.h>
#include <stdlib.h>
#include "ListaSequencial.c"

int main(){
    Lista *li;
    
    li = cria_lista();
    libera_lista(li);
    
    int x = tamanho_lista(Lista* li);
    
    int x = lista_cheia(Lista* li);
    if(lista_cheia(li));
        
    int x = lista_vazia(Lista* li);
    if(lista_vazia(li));
        
    int x = insere_lista_final(li, dados_aluno);
    
    int x = insere_lista_inicio(li, dados_aluno);
    
    int x = insere_lista_ordenada(li, dados_aluno);
        
    int x = remove_lista_final(li);
    
    int x = remove_lista_inicio(li);
    
    int x = remove_lista(li, matricula_aluno);
    
    int x = consulta_lista_pos(li, posicao, &dados_aluno);
    
    int x = int consulta_lista_mat(li, posicao, &dados_aluno);
    
    return 0;
}











