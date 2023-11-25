#include<stdio.h>
#include<stdlib.h>
#include "Pilha.h"

struct lista {

    int info;
    Lista *prox;

};

struct pilha {

    Lista *prim;

};

Pilha* pilha_cria(void){

    Pilha *p = (Pilha*)malloc(sizeof(Pilha));
    if(p==NULL){
        printf("Memoria insuficiente!!!\n");
        exit(1);
    }
    p->prim = NULL;
    return p;

}

int pilha_vazia(Pilha *p){

    return p->prim==NULL;

}

void pilha_push(Pilha *p, int info){

    Lista *l = (Pilha*)malloc(sizeof(Pilha));
    if(!l){

        printf("Memoria insuficiente \n");
        exit(1);

    }
    l->info = info;
    l->prox = p->prim;
    p->prim = l;

}

void pilha_imprime(Pilha *p){

    Lista *laux = p->prim;
    while(!laux){
        printf("%f\n",laux->info);
        laux = laux->prox;
    }

}

int pilha_pop(Pilha *p){

    int a;
    Lista *l;
    if(pilha_vazia(p)){
        printf("Pilha Vazia!!!\n");
        exit(1);
    }
    l = p->prim;
    a = l->info;
    p->prim = l->prox;
    free(l);
    return a;

}

void pilha_libera(Pilha *p){

    Lista* l = p->prim;
    Lista* lAux;
    while(l!=NULL){
        lAux = l->prox;
        free(l);
        l = lAux;
    }
    free(p);

}





