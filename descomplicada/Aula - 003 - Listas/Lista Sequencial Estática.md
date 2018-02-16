# [ED] Aula 04 - Listas Parte 2 - Lista Estática Sequencial
https://www.youtube.com/watch?v=rxVrRdF0MTE

Todos os créditos para **Linguagem C Programação Descomplicada**
https://www.youtube.com/channel/UCUc6UwvpQfOLDE7e52-OCMw

Tipo de 'Lista' onde o sucessor de um elemento ocupa a posição física seguinte do mesmo (uso de 'array' ou vetor)

![listas](../images/listas-001.png)

## Vantagens do uso de arrays:
- Acesso rápido e direto aos elementos (índice)
- Tempo  constante para acessar um elemento
- Facilidade em modificar informações


![listas](../images/listas-003.png)

Ao adicionarmos um elemento à lista, basta colocarmos na próxima posição vaga.

![listas](../images/listas-004.png)

## Desvantagens do uso de arrays:
- Definição prévia do tamanho do array
- Dificuldade para inserir e remover um elemento entre outros dois: é necessário deslocar os elementos

![listas](../images/listas-005.png)

## Quando utilizar essa 'lista'?
- Listas Pequenas
- Inserçãoremoção apenas no final da lista
- Tamanho máximo bem definido
- A busca é a operação mais frequente