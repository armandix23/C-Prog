#include "pila.h"

bool push(struct TPila *pila, struct TMovil *dato){

    if(pila->cima>=MAX_PILA)
        return false;

    pila->data[pila->cima++] = dato;
        return true;
}

bool pop(struct TPila *pila){

    if(pila->cima <=0)
        return false;

    free(pila->data[--pila->cima]);
        return true;
}

struct TMovil *movimiento_aleatorio(){
    struct TMovil *nueva;

    nueva = (struct TMovil *) malloc(sizeof(struct TMovil));
    nueva ->x = rand() % MAX_X;
    nueva ->y = rand() % MAX_Y;
      return nueva;
};

void mostrar(struct TMovil *dato){
    printf("{%.2lf,%.2lf}",dato->x, dato->y);
}

void ver(struct TPila pila){
    for(int i=0; i<pila.cima; i++)
        mostrar(pila.data[i]);
}
