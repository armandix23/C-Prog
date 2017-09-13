/*
 * =====================================================================================
 *
 *       Filename:  divresto.cpp
 *
 *    Description:  El usuario tecleara dos numeros(x,y), y el programa debera calcular el resultado de la division y el resto.
 *
 *        Version:  1.0
 *        Created:  16/02/17 00:04:01
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (Armando),
 *   Organization:  
 *
 * =====================================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, y, resultado, resto;

    printf("Dime un numero: \n ");
    scanf(" %d",&x);
    printf("Dime otro numero: \n ");
    scanf(" %d",&y);

    resultado= x / y;
     resto= x % y;
    printf("El resultado es %d  y el resto  es %d \n ",resultado,resto);

    return 0;
}

