/* Arquivo para teste de execícios    
   OBS.: Deixe sempre 1, e somente 1, arquivo comentado no cabeçalho
*/

#define TAM 6

#include "algoritmos_matriz.c"
// #include "algoritmos_lista.c"

int main()
{
	bool g[TAM+1][TAM+1];
	Lista v[6];
	insereAresta(v, 1,5);
	insereAresta(v, 1,2);
	insereAresta(v, 2,3);
	insereAresta(v, 3,2);
	insereAresta(v, 5,4);
	insereAresta(v, 5,3);
	insereAresta(v, 6,5);

	imprimeGrafo(g, TAM);

	// retiraAresta(1,2);
	// imprimeGrafo();
	
	return 0;
}