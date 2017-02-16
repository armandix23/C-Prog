/*
 * =====================================================================================
 *
 *       Filename:  multiplicacion.cpp
 *
 *    Description: Multiplica 2 numeros tecleados por el usuario. 
 *
 *        Version:  1.0
 *        Created:  15/02/17 23:43:47
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (Armando).
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int op1, op2, resultado;

    printf("Dime un numero: \n ");
    scanf(" %d",&op1);
    printf("Dime otro numero: \n ");
    scanf(" %d",&op2);

    resultado= op1 * op2;
    printf("El resultado es %d \n ",resultado);

    return 0;
}

