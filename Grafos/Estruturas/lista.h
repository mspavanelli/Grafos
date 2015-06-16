#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct n
{
	int numero;
	struct n * prox;
} No;

typedef struct
{
	int flag;
	No * inicio;
} Lista;

void criar( Lista * l ) { l -> inicio = NULL; }

void imprimir_lista( Lista * l )
{
	No * p = l -> inicio;
	while(p)
	{
		printf(" -> %d", p -> numero);
		p = p -> prox;
	}
	printf("\n");
}

bool inserir( Lista * l, int n )
{
	No * novo = (No*) malloc(sizeof(No));
	novo -> numero = n;
	novo -> prox = NULL;
	if ( !l -> inicio ) l -> inicio = novo;
	else
	{
		No * p = l -> inicio;
		while( p -> prox )
		{
			/* Ainda não funciona para o último nó */
			if ( p -> numero == n ) return false;
			p = p -> prox;
		}
		p -> prox = novo;
	}
	return true;	// consertar retorno
}

bool existeNo( Lista * l, int n )
{
	No * p = l -> inicio;
	while(p)
	{
		if ( p -> numero == n ) return true;
		p = p -> prox;
	}
	return false;
}

bool sair( Lista * l, int n )	// não funciona para o primeiro nó
{
	No * p;
	No * ant;
	p = l -> inicio;
	while(p)
	{
		if ( p -> numero == n )
		{
			ant -> prox = p -> prox;
			free(p);
			return true;
		}
		ant = p;
		p = p -> prox;
	}

	return false;
}