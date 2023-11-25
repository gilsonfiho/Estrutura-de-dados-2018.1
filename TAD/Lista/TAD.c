#include<stdio.h>
#include<stdlib.h>
#include "TAD.h"

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

int primo(int x){

    int i;
    if(x <= 1){
        return 0;
    }
    else{
        for(i = 2; i < x; i++){
            if(x % i == 0){
                return 0;
            }
        }
        return 1;
    }

}

Lista* lst_devolve_primo(Lista *l){

    Lista* lAux = l;
    Lista* lmp = (Lista*)malloc(sizeof(Lista));
    lmp->info = 0;
    while(lAux!=NULL){
        if(primo(lAux->info)){
            if(lAux->info > lmp->info){
                lmp = lAux;
            }
        }
        lAux = lAux -> prox;
    }
    printf("%d\n",lmp->info);
    return lmp;

}


