#include<stdio.h>
#include "ponto.h"

int main(){

    Ponto *p1 = pto_cria(2.0,1.0);
    Ponto *p2 = pto_cria(3.9,2.1);
    float d = pto_distancia(p1,p2);
    printf("Distancia entre pontos: %f\n",d);
    pto_libera(p1); pto_libera(p2);
    return 0;

}
