/*
 * =====================================================================================
 *
 *       Filename:  tanque.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  14/02/17 09:26:33
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */


#include <stdio.h>
#include <stdlib.h>

#define INC 0.5

double x_cuanto(double x){ return x * x; }

int main(int argc, char *argv[]){

    double x;
    double derivada;

    printf("Dime un valor:");
    scanf(" %lf",&x);

    derivada = (x_cuanto(x + INC) - x_cuanto(x)) / INC;

    printf(" %lf \n", derivada);

    return EXIT_SUCCESS;
}




