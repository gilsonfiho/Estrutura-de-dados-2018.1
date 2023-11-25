#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

typedef struct fila Fila;
typedef struct lista Lista;

Fila* fila_cria(void);

int fila_vazia(Fila *f);

void fila_insere(Fila *f, int info);

int fila_remove(Fila *f);

void fila_imprime(Fila *f);

void fila_libera(Fila *f);


#endif // FILA_H_INCLUDED
