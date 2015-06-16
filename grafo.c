#include <stdio.h>
#include "grafo.h"

int main()
{
	imprime_grafo();
	insere_aresta(1,2);
	imprime_grafo();

	return 0;
}

void profundidade( int i )
{
	int adj;
	flag[i] = 1;	// descoberto
	for ( adj = 1; adj <= V; adj++ )
	{
		if ( grafo[i][adj] == 1 && flag[adj] == 0 )
			profundidade( adj );
	}
	flag[i] = 2;	// finalizado (pode imprimir)
}