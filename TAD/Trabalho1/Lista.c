#include<stdio.h>
#include<stdlib.h>
#include "Lista.h"

struct lista {

    int info;
    Lista *prox;

};

Lista* lst_cria(){

    return NULL;

}

int lst_vazia(Lista *l){

    return (l==NULL);

}

Lista* lst_insere(Lista *l, int info){

    Lista* ln = (Lista*)malloc(sizeof(Lista));
    ln->info = info;
    ln->prox = l;
    return ln;

}

Lista* lst_busca(Lista *l, int info){

    Lista* lAux = l;
    while(lAux!=NULL){
        if(lAux->info == info)
            return lAux;
        lAux = lAux->prox;
    }
    return NULL;

}

void lst_imprime(Lista *l){

    Lista* lAux = l;
    while(lAux!=NULL){
        printf("Info = %d\n",lAux->info);
        lAux = lAux->prox;
    }

}

Lista* lst_remove(Lista *l, int info){

    if(l!=NULL){
        Lista* lAux = l->prox;
        if(l->info==info){
            free(l);
            return lAux;
        }
        else{
            Lista* lAnt = l;
            while(lAux!=NULL ){
                if(lAux->info == info){
                    lAnt->prox = lAux->prox;
                    free(lAux);
                    break;
                }
                else{
                    lAnt = lAux;
                    lAux = lAux->prox;
                }
            }
        }
    }
    return l;

}

void lst_libera(Lista *l){

    Lista* lProx;
    while(l!=NULL){
        lProx = l->prox;
        free(l);
        l = lProx;
    }

}

int comprimento(Lista* l){

    int cont = 0;
    Lista* laux = l;
    while(laux != NULL){
        cont++;
        laux = laux->prox;
    }
    return cont;


}

int menores(Lista* l, int n){

    int cont = 0;
    Lista* laux = l;
    while(laux != NULL){
        if(laux->info < n){
            cont++;
        }
        laux = laux->prox;
    }
    return cont;

}

int soma(Lista* l){

    int som = 0;
    Lista* laux = l;
    while(laux != NULL){
        laux = laux->prox;
    }
    return som;

}

int testa_perfeito(int info){

	int i;
	int som = 0;
	for(i=1;i<x;i++){
		if((info%info) == 0){
			som = som+info;
		}
	}
	if (som == info){
		return 1;
	}
	else{
		return 0;
	}
}

int perfeito(Lista* l){

    int x = 0;
    Lista * laux = l;
	while(laux != NULL){
		if(testa_perfeito(laux->info)){
			x++;
		}
		laux = laux->prox;
	}

	return x;

}
Lista* lst_conc(Lista* l1, Lista* l2){
	Lista *lAux = l1;
	if(lAux->prox == NULL){
		lAux->prox = l2;
	}else{
		lAux->prox = lst_conc(lAux->prox, l2);
		return lAux;
	}
}

Lista* lst_conc(Lista* l1, Lista* l2){

    Lista* laux = l1;
    while(laux->prox != NULL){
        laux = laux->prox;
    }
    laux->prox = l2;
    return laux;

}



