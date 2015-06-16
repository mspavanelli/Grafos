#include <stdio.h>
#include <stdlib.h>

typedef struct s
{
	int chave;
	struct s * prox;
} No;

typedef struct
{
	No * inicio;
	No * fim;
} Fila;

void criar( Fila * f )
{
	f -> inicio = NULL;
	f -> fim = NULL;
}

int tamanho_fila( Fila * f )
{
	int tamanho = 0;
	No * p = f -> inicio;
	while ( p )
	{
		p = p -> prox;
		tamanho++;
	}
	return tamanho;
}

void imprimir_fila( Fila * f )
{
	No * p = f -> inicio;
	printf("EXIT <- ");
	while (p)
	{
		printf( "%d ", p -> chave );
		p = p -> prox;
	}
	printf(" <- BEGIN\n");
}

void entrar_fila( Fila * f, int c )
{
	No * novo = (No*) malloc(sizeof(No));
	novo -> chave = c;
	novo -> prox = NULL;
	if ( f -> fim ) f -> fim -> prox = novo;
	else f -> inicio = novo;
	f -> fim = novo;
	imprimir_fila(f);
}

int sair_fila( Fila * f )
{
	if ( ! f -> inicio ) return -1;
	int chave = f -> inicio -> chave;
	f -> inicio = f -> inicio -> prox;
	if ( ! f -> inicio ) f -> fim = NULL;
	imprimir_fila(f);
	return chave;
}
