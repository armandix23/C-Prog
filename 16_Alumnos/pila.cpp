#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#include "notas.h>"

#define N 0X100


// HACER UNA PILA QUE EMPUJE ALUMNOS
struck TStack{
    struck TAlumno *reg[100*N];
    struck TAlumno *data[N];
    int cima;
}

void push(struct TStack *pila, struct TAlumno *al){}
struck TAlumno *pop(struct TStack *pila){}

int main(int argc, char *argv[]){

  struct TAlumno *alumno;
  struct TStack pila;
  pila.cima = 0;

  alumno = (struct TAlumno *) malloc(sizeof(struct TAlumno));
  pila.data[0] = alumno;
  pila.cima++;

  free(pila.data *p);



	return EXIT_SUCCESS;
}
