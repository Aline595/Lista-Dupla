#include "no_duplo.h"

struct no_duplo * cria_no_duplo(int i){
	struct no_duplo * aux = (struct no_duplo *) malloc(sizeof(struct no_duplo));
	if(aux != NULL){
		aux->info = i;
		aux->prox = aux;
		aux->ant = aux;
	}
	return aux;
}


