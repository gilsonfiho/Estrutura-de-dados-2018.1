#ifndef LISTA_CIRCULAR_H_INCLUDED
#define LISTA_CIRCULAR_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>

typedef struct lista_circ ListaCirc;

ListaCirc* lst_circ_cria();

int lst_circ_vazia(ListaCirc *l);

ListaCirc* lst_circ_insere(ListaCirc *l, int info);

ListaCirc* lst_circ_busca(ListaCirc *l, int info);

void lst_circ_imprime(ListaCirc *l);

ListaCirc* lst_circ_remove(ListaCirc *l, int info);

void lst_circ_libera(ListaCirc *l);

#endif // LISTA_CIRCULAR_H_INCLUDED
