#ifndef __PILA_H__
#define __PILA_H__

#include <stdio.h>
#include <stdlib.h>

#define MAX_PILA 0x200
#define MAX_X 100
#define MAX_Y 100

struct TMovil{
    double x;
    double y;
};

typedef struct TMovil *Tipo;

struct TPila{
    int cima;
    Tipo data[MAX_PILA];
};

#ifdef __cplusplus
extern "C"{
#endif

bool push(struct TPila *pila, Tipo Movil);
bool pop(struct TPila *pila);
Tipo movimiento_aleatorio();
void mostrar(Tipo dato);
void ver(struct TPila pila);

#ifdef __cplusplus
}
#endif

#endif
