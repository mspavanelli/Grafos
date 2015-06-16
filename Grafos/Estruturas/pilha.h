#include <stdio.h>
#include <stdlib.h>

typedef struct s
{
    int chave;
    struct s * prox;
} No_p;

typedef struct { No_p * topo; } Pilha;

void criar_pilha( Pilha * p ) { p -> topo = NULL; }

int tamanho_pilha( Pilha * p )
{
    int tamanho = 0;
    No_p * aux = p -> topo;
    while (aux)
    {
        aux = aux -> prox;
        tamanho++;
    }
    return tamanho;
}
void imprimir_pilha( Pilha * p )
{
    No_p * aux = p -> topo;
    printf( "TOPO: " );
    while ( aux )
    {
        printf( "%d ", aux -> chave );
        aux = aux -> prox;
    }
    printf("\n");
}
void push( Pilha * p, int c )
{
    No_p * novo = (No_p*) malloc(sizeof(No_p));
    novo -> chave = c;
    novo -> prox = p -> topo;
    p -> topo = novo;
    imprimir_pilha(p);
}
int pop( Pilha * p )
{
    if ( ! p -> topo ) return -1;
    No_p * aux = p -> topo;
    p -> topo = p -> topo -> prox;
    imprimir_pilha(p);
    return aux -> chave;
}