#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){


    int A1,A2,A3,A4,A5,A6,A7,A8,A9;
    int B1,B2,B3,B4,B5,B6,B7,B8,B9;
    int AB1,AB2,AB3,AB4,AB5,AB6,AB7,AB8,AB9;


    printf("Dime el valor de A1,A2,A3\n ");
    scanf("%i%i%i",&A1,&A2,&A3);

    system("clear");
    printf("Dime el valor de A4,A5,A6\n ");
    scanf("%i%i%i",&A4,&A5,&A6);

    system("clear");
    printf("Dime el valor de A7,A8,A9\n ");
    scanf("%i%i%i",&A7,&A8,&A9);

    system("clear");
    printf("Esta es la matriz A:\n");
    printf("%i %i %i\n",A1,A2,A3);
    printf("%i %i %i\n",A4,A5,A6);
    printf("%i %i %i\n",A7,A8,A9);
    
    
    printf("Dime el valor de B1,B2,B3\n ");
    scanf("%i%i%i",&B1,&B2,&B3);
    
    system("clear");
    printf("Dime el valor de B4,B5,B6\n ");
    scanf("%i%i%i",&B4,&B5,&B6);
        
    system("clear");
    printf("Dime el valor de B7,B8,B9\n ");
    scanf("%i%i%i",&B7,&B8,&B9);
           
  
    system("clear");
    printf("Esta es la matriz A:\n");
    printf("%i %i %i\n",A1,A2,A3);
    printf("%i %i %i\n",A4,A5,A6);
    printf("%i %i %i\n",A7,A8,A9);

    printf("Esta es la matriz B:\n");
    printf("%i %i %i\n",B1,B2,B3);
    printf("%i %i %i\n",B4,B5,B6);
    printf("%i %i %i\n",B7,B8,B9);

    AB1 = (A1*B1)+(A2*B4)+(A3*B7);
    AB2 = (A1*B2)+(A2*B5)+(A3*B8);
    AB3 = (A1*B3)+(A2*B6)+(A3*B9);
    AB4 = (A4*B1)+(A5*B4)+(A6*B7);
    AB5 = (A4*B2)+(A5*B5)+(A6*B8);
    AB6 = (A4*B3)+(A5*B6)+(A6*B9);
    AB7 = (A7*B1)+(A8*B4)+(A9*B7);
    AB8 = (A7*B2)+(A8*B5)+(A9*B8);
    AB9 = (A7*B3)+(A8*B6)+(A9*B9);
  
    printf("El resultado es \n ");
    printf(" %i %i %i\n ",AB1,AB2,AB3);
    printf(" %i %i %i\n ",AB4,AB5,AB6);
    printf(" %i %i %i\n ",AB7,AB8,AB9);
  	return EXIT_SUCCESS;
}

