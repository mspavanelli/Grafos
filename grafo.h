#include <stdbool.h>
#define TAMANHO 5

/* Grafo em matriz de adjacências */
bool grafo[TAMANHO+1][TAMANHO+1];

void imprime_grafo()
{
	int i, j;

	printf("   ");
	for ( i = 1; i <= TAMANHO; i++ ) printf("%d ", i);
	printf("\n");
	for ( i = 1; i <= TAMANHO; i++ )
	{
		printf("%d: ", i);
		for ( j = 1; j <= TAMANHO; j++ )
		{
			printf( grafo[i][j] ? "1 " : "0 " );
		}
		printf("\n");
	}
}

bool insere_aresta( int origem, int destino )
{
	if ( grafo[origem][destino] ) return false;
	grafo[origem][destino] = true;
	return true;
}

bool remove_aresta( int origem, int destino )
{
	if ( !grafo[origem][destino] ) return false;
	grafo[origem][destino] = false;
	return true;
}

int grau( int vertice )
{
	int g = 0, i;
	for ( i = 0; i <= TAMANHO; i++ )
		if ( grafo[vertice][i] ) g++;

	return g;
}

void busca_profundidade( int vertice );
void busca_largura( int vertice );