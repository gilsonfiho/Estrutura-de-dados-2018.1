#include<stdio.h>

struct ponto{

    float x;
    float y;

};

int main(){

    struct ponto P;
    printf("Digite as coordenadas do ponto(x,y):\n");
    scanf("%f %f",&P.x,&P.y);
    imprime(P);
    return 0;

}

void imprime(struct ponto P){
    printf("Ponto(%.2f,%.2f)\n",P.x,P.y);
}
