#include "grafo.h"
#include "Estruturas/lista.h"

#define V 6			// Quantidade de vértices do grafo

Lista vertices[V];	// Declara Grafo (lista de adjacências)

void inicializa()
{
	int i;
	for ( i = 1; i <= V; i++ )
		criar(&vertices[i]);
}

void imprimeGrafo(Lista vertices[6])
{
	int i;
	
	for ( i = 1; i <= V; i++ )
	{
		printf("[%d]", i);
		imprimir_lista(&vertices[i]);
	}
	printf("\n");
}
bool insereAresta( Lista vertices[6], int origem, int destino )
{
	return inserir(&vertices[origem], destino);
}
bool existeAresta( int origem, int destino ) 
{
	return existeNo(&vertices[origem], destino);
}

bool retiraAresta( int origem, int destino )
{
	return sair(&vertices[origem], destino);
}

void zerarFlags()
{
	int i;
	for (i = 1; i <= V; ++i)
		vertices[i].flag = 0;
}

void profundidade( int i )
{
	zerarFlags();
	vertices[i].flag = 1; 
	No * p = vertices[i].inicio;
	while(p -> prox)
	{
		if ( vertices[p -> numero].flag ==  0 )
			profundidade( p -> numero );
		p = p -> prox;
	}
	vertices[i].flag = 2;
	printf("%d\n", i);
}