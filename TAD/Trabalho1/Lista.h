#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>

typedef struct lista Lista;

Lista* lst_cria();

int lst_vazia(Lista *l);

Lista* lst_insere(Lista *l, int info);

Lista* lst_busca(Lista *l, int info);

void lst_imprime(Lista *l);

Lista* lst_remove(Lista *l, int info);

void lst_libera(Lista *l);

int comprimento(Lista* l);

int menores(Lista* l, int n);

int soma(Lista* l);

int perfeito(Lista* l);

Lista* lst_conc(Lista* l1, Lista* l2);

int testa_perfeito(int x);


#endif // LISTA_H_INCLUDED
