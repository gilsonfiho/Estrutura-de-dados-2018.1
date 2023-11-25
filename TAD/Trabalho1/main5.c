#include <stdio.h>
#include<stdlib.h>
#include "lista_dupla.h"

int main(void){

    int maior;
    Lista* l = lst_dupl_cria();
    l = lst_dupl_insere(l,10);
    l = lst_dupl_insere(l,13);
    l = lst_dupl_insere(l,25);
    l = lst_dupl_insere(l,29);
    l = lst_dupl_insere(l,40);
    l = lst_dupl_remove(l,10);
    lst_dupl_imprime(l);
    lst_dupl_libera(l);
    system("PAUSE");
    return 0;

}

