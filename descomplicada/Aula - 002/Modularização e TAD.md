# [ED] Aula 02 - Modularização e TAD
https://www.youtube.com/watch?v=lKwEQgV6nZk

Todos os créditos para **Linguagem C Programação Descomplicada**
https://www.youtube.com/channel/UCUc6UwvpQfOLDE7e52-OCMw

A convenção em linguagem C é preparar dois arquivos para implementar um "TAD"

Arquivo ".H": protótipos das funções, tipos de ponteiro e dados globalmente acessíveisa

Arquivo ".C": declração dos tipos de dados e implementação das suas funções

Assim separamos o "conceito" (definição do tipo) de sua "implementação" 

Exemplo de "TAD": um ponto definido por suas coordenads "x" e "y"

```c
struct ponto{
    float x;
    float y;
}
```

1º Passo: definir no arquivo ".H" -'Ponto.h'
- protótipos das funções
- tipos de ponteiro
- dados globalmente acessíveis

2º Passo: Implementar as funções no arquivo ".C" - 'Ponto.c'


[A Seguir - Listas Parte 1 - Definição](../Aula\ -\ 003/Listas.md)