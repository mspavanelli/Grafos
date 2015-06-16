#include "grafo.h"

#define V 6			// Quantidade de vértices do grafo

bool grafo[V+1][V+1]; // Declara Grafo (matriz de adjacências)

void imprimeGrafo(bool g[][], int tamanho)
{
	int i, j, aux;

	printf("     ");
	for ( aux = 1; aux <= tamanho; aux++ ) printf("%d  ", aux);
	printf("\n");

	for ( i = 1; i <= tamanho; i++ )
	{
		printf("%d >  ", i);
		for ( j = 1; j <= V; j++)
			printf( g[i][j] ? "1  " : "-  " );
		printf("\n");
	}
	printf("\n");
}
bool insereAresta( bool g[][], int origem, int destino )
{
	if ( !existeAresta(origem,destino) )
	{
		g[origem][destino] = 1;
		return true;
	}
	return false;
}

bool existeAresta( bool g[][], int origem, int destino )
{

	return g[origem][destino];
}

bool retiraAresta( int origem, int destino )
{
	if ( existeAresta(origem, destino) )
	{
		grafo[origem][destino] = 0;
		return true;
	}
	return false;
}

void espacoOcupado()
{

	printf("%lu bits\n", sizeof(grafo));
}

void liberaGrafo() {}

int qtde_arestas()
{
	int i, j, total = 0;

	for ( i = 1; i <= V; i++ )
	{
		for ( j = 1; j <= V; j++)
			if ( existeAresta(i,j) ) total++;
	}
	return total;
}

double arestas_por_total()
{
	return qtde_arestas() / V * V;
}

void profundidade(int i)
{
	/* Vetor de flags */
	int n;
	int flag[V+1];
	for ( n = 0; n <= V; ++n) flag[n] = 0;

	/* Início do Procedimento */
	flag[i] = 1;
	int adj;
	for ( adj = 1; adj <= V; adj++ )
	{
		if ( grafo[i][adj] == 1 && flag[adj] == 0 )
		{
			printf("%d ", adj);
			profundidade( adj );
		}
	}
	printf("\n");
	flag[i] = 2;
}