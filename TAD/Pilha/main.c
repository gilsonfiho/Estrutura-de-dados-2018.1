#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

int main(){

    Pilha* P = pilha_cria();
    pilha_push(P,3);
    pilha_push(P,2);
    pilha_push(P,4);
    pilha_imprime(P);
    return 0;

}
