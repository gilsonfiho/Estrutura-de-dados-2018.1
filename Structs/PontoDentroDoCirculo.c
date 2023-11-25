#include<stdio.h>
#include<math.h>

typedef struct ponto{

    float x;
    float y;

}Ponto;

typedef struct circulo{

    Ponto p;
    float r;

}Circulo;

void imprime(struct ponto *pp){

    printf("Ponto(%.2f,%.2f)\n",pp->x,pp->y);

}

void capturaPonto(Ponto *p){

    printf("Digite as coordenadas do ponto(x,y):\n");
    scanf("%f %f",&p->x,&p->y);

}

void capturaCirculo(Circulo *pc){

    printf("Digite as coordenadas do ponto(x,y) e o raio\n");
    scanf("%f %f %f",&pc->p.x,&pc->p.y,&pc->r);

}

int interior(Circulo *pc, Ponto *pp){

    float d = distancia(&pc->p,pp);
    return (d < pc->r);

}


float distancia(Ponto *p, Ponto *pp){

    return sqrt((p->x -pp->x)*(p->x -pp->x)+ (p->y -pp->y)*(p->y -pp->y) );

}

int main(){

    Ponto pp;
    Circulo pc;
    capturaPonto(&p);
    capturaCirculo(&pc);
    Ponto p;
    p.x = pc->p.x;
    p.y = pc->p.y;
    if(interior(&c,&p))
        printf("Pertence ao circulo\n");
    else
        printf("Nao Pertence ao circulo\n");

    return 0;

}




