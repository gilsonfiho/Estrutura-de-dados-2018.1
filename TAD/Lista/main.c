#include <stdio.h>
#include <stdlib.h>
#include "TAD.h"

int main(){

    int x=-1,y=-1,z=-1;
    Lista* l = lst_cria();
    while(x < 0 || y < 0 || z < 0){
        printf("Declare 3 valores da sua lista\n");
        scanf("%d %d %d",&x,&y,&z);
    }
    l = lst_insere(l,x);
    l = lst_insere(l,y);
    l = lst_insere(l,z);

    lst_imprime(l);
    printf("%d\n",lst_devolve_primo(l));

}
