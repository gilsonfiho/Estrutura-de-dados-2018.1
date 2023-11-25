#include <stdio.h>
#include<stdlib.h>
#include “lista_circular.h”

int main(void){

    int maior;
    Lista* l = lst_circ_cria();
    l = lst_circ_insere(l,10);
    l = lst_circ_insere(l,13);
    l = lst_circ_insere(l,25);
    l = lst_circ_insere(l,29);
    l = lst_circ_insere(l,40);
    l = lst_circ_remove(l,10);
    lst_circ_imprime(l);
    lst_circ_libera(l);

    system("PAUSE");
    return 0;

}
