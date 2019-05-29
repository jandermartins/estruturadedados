#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct lista{
	int x;
	struct lista *prox;
};
typedef struct lista Lista;

Lista *criaLista(){
	return NULL;
}

Lista *insere(Lista *l,float i){
	Lista *novo = (Lista*)malloc(sizeof(Lista));
	novo->x = i;
	novo->prox = l;
	return novo;
}





