#include<stdio.h>
#include<math.h>

typedef struct ponto{

    float x;
    float y;

}Ponto;

float distancia(Ponto *p1, Ponto *p2){

    return sqrt((p1->x -p2->x)*(p1->x -p2->x)+ (p1->y -p2->y)*(p1->y -p2->y) );

}

void imprime(struct ponto *pp){

    printf("Ponto(%.2f,%.2f)\n",pp->x,pp->y);

}
void captura(struct ponto *pp){

    printf("Digite as coordenadas do ponto(x,y):\n");
    scanf("%f %f",&pp->x,&pp->y);

}

int main(){

    Ponto p1,p2;
    captura(&p1);
    captura(&p2);
    printf("Distancia entre pontos %.1f\n",distancia(&p1,&p2));
    return 0;

}

