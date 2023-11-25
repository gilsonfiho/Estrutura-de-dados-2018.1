#ifndef LISTAENCADEADA_H_INCLUDED
#define LISTAENCADEADA_H_INCLUDED

typedef struct lista Lista;

Lista* lst_cria();

int lst_vazia(Lista *l);

Lista* lst_insere(Lista *l, int info);

Lista* lst_busca(Lista *l, int info);

void lst_imprime(Lista *l);

Lista* lst_remove(Lista *l, int info);

void lst_libera(Lista *l);

int primo(int x);

Lista* lst_devolve_primo(Lista *l);

Lista* lst_cria_invert(Lista* l);


#endif // LISTAENCADEADA_H_INCLUDED
