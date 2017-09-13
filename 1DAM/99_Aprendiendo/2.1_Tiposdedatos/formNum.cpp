#include <stdio.h> 

int main() {
      float x = 12.56;

      printf("El valor de x es %f", x);
      printf(" pero lo podemos escribir con 2 decimales %5.2f", x);
      printf(" o solo con uno %5.1f", x);
      printf(" o con 7 cifras %7.1f", x);
      printf(" o alineado a la izquierda %-7.1f", x);
      printf(" o sin decimales %2.0f", x);
      printf(" o solo con una cifra %1.0f", x);

      return 0;
}

