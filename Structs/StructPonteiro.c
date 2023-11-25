#include<stdio.h>

typedef struct ponto{

    float x;
    float y;

}Ponto;

int main(){

    Ponto p;
    captura(&p);
    imprime(&p);
    return 0;

}

void imprime(struct ponto *pp){
    printf("Ponto(%.2f,%.2f)\n",pp->x,pp->y);
}
void captura(struct ponto *pp){
    printf("Digite as coordenadas do ponto(x,y):\n");
    scanf("%f %f",&pp->x,&pp->y);
}
