#include<stdio.h>
#include<stdlib.h>
#include "Lista_Circular.h"

ListaCirc* lst_circ_insere(ListaCirc *l, int info){

    ListaCirc* ln = (ListaCirc*)malloc(sizeof(ListaCirc));
    ln->info = info;
    if(l==NULL)
    ln->prox = ln;
    else{
    ln->prox = l->prox;
    l->prox = ln;
    }
    return ln;

}

void lst_circ_imprime(ListaCirc *l){

    if(l!=NULL){
    ListaCirc* lAux = l;
    printf("Lista de Elementos \n");
    do{
    printf("Info = %d\n",lAux->info);
    lAux = lAux->prox;
    }while(l!=lAux);
    }

}

