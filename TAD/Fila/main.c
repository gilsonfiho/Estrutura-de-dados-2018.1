#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

int main(){

    Fila* f = fila_cria();
    fila_insere(f,3);
    fila_insere(f,2);
    fila_insere(f,1);
    fila_imprime(f);
    printf("%d",fila_vazia(f));

    return 0;

}
