#include "../grafo.h"
#include "../grafo_lista.c"

int qtde_lacos()
{
	int i, total = 0;
	for (i = 0; i < V; ++i)
	{
		if ( existeAresta(i,i) ) total++;
	}
	return total;
}

void remover_lacos()
{
	int i;
	for (i = 1; i <= V; ++i) retiraAresta(i,i);
}

void remover_arestas()
{
	int i, j;
	for (i = 1; i <= V; ++i )
	{
		for ( j = 1; j <= V; j++ )
		{
			retiraAresta(i,j);
		}
	}
}