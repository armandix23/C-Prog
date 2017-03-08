#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <curses.h>


#define tiempo 10
#define DELTA .1
#define ax 0 // Aceleracion
#define ay -10

int main(int argc, char *argv[]){

    double vx; // Velocidad
    double vy;
    double caja;

    printf("Dime la velocidad de vx  \n");
    scanf("%lf",&vx);

    printf("Dime la velocidad de vy \n ");
    scanf("%lf",&vy);

    initscr();
    curs_set(0);


    for(double i=1; i<tiempo; i+=1){
        vx += ax * tiempo;
         printf("t[%2.0lfs] ==>>> v: %lfm/s\n",i,vx);

    }
     for(double k=1; k<tiempo; k+=1){
        vy += ay * tiempo;
        printf("t[%2.0lfs] ==>>> v: %lfm/s\n",k,vy);
    

       clear();
      mvprintw(20-vy,20+vx, "O");

      refresh();
      usleep(100000);
  }
      usleep(2000000);
      curs_set(1);
      endwin();

  	return EXIT_SUCCESS;
}
