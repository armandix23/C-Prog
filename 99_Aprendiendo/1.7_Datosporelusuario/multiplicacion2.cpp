
/*
 * =====================================================================================
 *
 *       Filename:  multiplicacion2.cpp
 *
 *    Description: El usuario tecleara dos numeros (a,b) y el pro. mostrara resultado de (a+b)*(a-b) y el resultado de a²-b²
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

    int a, b, resultado, resultado1;

    printf("Dime un numero: \n ");
    scanf(" %d",&a);
    printf("Dime otro numero: \n ");
    scanf(" %d",&b);

    resultado=(a+b)*(a-b);
    printf("El resultado de los parentesis  es %d \n ",resultado);

    resultado1= ((a=a*a)-(b=b*b));
    printf("El resultado de los cuadrados es %d \n ",resultado1);

    return 0;
}

