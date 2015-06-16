#include "../grafo.h"
#include "../grafo_matriz.c"

/* Questão 1 */
int qtde_lacos()
{
	int i, total = 0;
	for ( i = 1; i <= V; i++ )
		if ( existeAresta(i,i) ) total++;

	return total;
}
/* Questão 2 */
void remover_lacos()
{
	int i;
	for ( i = 0; i <= V; ++i ) retiraAresta(i,i);
}

/* Questão 3 */
void remover_arestas()
{
	int i, j;
	for ( i = 1; i <= V; i++ )
	{
		for ( j = 1; j <= V; j++ )
		{
			retiraAresta(i,j);
		}
	}
}

/* Questão 4 */
bool transposto()
{
	return false;
}