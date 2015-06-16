# Grafos

Estudo de grafos e suas aplicações

## Organização

grafo.h ("Interface" padrão para a construção de grafos)
grafo_lista.c (Implementação em lista de adjacências)
grafo_matriz.c (Implementação em matriz de adjacências)

### Estruturas (Auxiliares)

- lista.h (Implementação de uma lista ligada)
- fila.h
- pilha.h
	
### Exercícios

- algoritmos_matriz.c
- algoritmos_lista.c
- main.c (Use para testar os exercícios.
	**Importante mudar o cabeçalho - matriz ou lista - para evitar conflito)**

![Organização e Estrutura dos Arquivos](https://cloud.githubusercontent.com/assets/8218635/8193314/81c3e1fc-144a-11e5-8ea9-4d6eee8bcc60.png)


### Conteúdo de __grafo.h__

``` C
#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>

/* Procedimentos Básicos */
void imprimeGrafo();
bool insereAresta( int origem, int destino );
bool existeAresta( int origem, int destino );
bool retiraAresta( int origem, int destino );
void espacoOcupado();
void liberaGrafo();

/* Armazenamento e Eficiência */
int qtde_arestas();
int grau_de_saida(int vertice);
double arestas_por_total();

/* Procedimentos Fundamentais */
void profundidade(int i);
void largura(int i);

/* Procedimentos Estruturais */
void arvoreGeradora();

/* Procedimentos de Buscas */
void dijkstra();
void floyd();
```
