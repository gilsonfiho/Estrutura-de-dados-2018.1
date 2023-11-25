#ifndef PONTO_H_INCLUDED
#define PONTO_H_INCLUDED

typedef struct ponto Ponto;

Ponto* pto_cria(float x, float y);

void pto_libera(Ponto *p);

void pto_acessa(Ponto *p, float *x, float *y);

void pto_atribui(Ponto *p, float x, float y);

double pto_distancia(Ponto *p1, Ponto *p2);



#endif // PONTO_H_INCLUDED
