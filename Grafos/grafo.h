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