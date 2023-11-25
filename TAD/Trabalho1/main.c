#include <stdio.h>
#include<stdlib.h>
#include "lista.h"

int main(void){

    Lista* l1 = lst_cria();
    l1 = lst_insere(l,6);
    l1 = lst_insere(l,13);
    l1 = lst_insere(l,25);
    l1 = lst_insere(l,28);
    l1 = lst_insere(l,40);
    l1 = lst_remove(l,10);
    lst_imprime(l1);
    lst_imprime_invertida_rec(l1);
    printf("Num. nós c/ info > que 22: %d\n",menores(l1,22));
    printf("O comprimento da lista é %d\n",comprimento(l1));
    printf("Soma dos valores dos nós %d\n",soma(l1));
    printf("Num. nós com val. perfeitos é %d\n",perfeito(l1));
    Lista* l2 = lst_cria();  l2 = lst_insere(l,28);
    l2 = lst_insere(l,130);
    Lista* l3=lst_conc(l1,l2);
    lst_imprime(l3);
    lst_imprime(l1);
    lst_libera(l1);
    lst_libera(l2);
    lst_libera(l3);
    system("PAUSE");
    return 0;

}
