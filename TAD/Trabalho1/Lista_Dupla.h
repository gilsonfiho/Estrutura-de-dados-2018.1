#ifndef LISTA_DUPLA_H_INCLUDED
#define LISTA_DUPLA_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>

typedef struct lista_dupl ListaDupl;

ListaDupl* lst_dupl_cria();

int lst_dupl_vazia(ListaDupl *l);

ListaDupl* lst_dupl_insere(ListaDupl *l, int info);

void lst_dupl_imprime(ListaDupl *l);

ListaDupl* lst_dupl_busca(ListaDupl *l, int info);

ListaDupl* lst_dupl_remove(ListaDupl *l, int info);

void lst_dupl_libera(ListaDupl *l);

#endif // LISTA_DUPLA_H_INCLUDED
