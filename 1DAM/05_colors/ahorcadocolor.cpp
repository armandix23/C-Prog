
#include <stdio.h>
#include <stdlib.h>

#define 1=a,2=b,3=c,4=d,5=e,6=f,7=g,8=h,9=i,10=j,11=k,12=l,13=m,14=n,15=o,16=p,17=q,18=r,19=s,20=t,21=u,22=v,23=w,24=y,25=z


int main(){

	int color1, color2, color3;

	printf ("Ves el color rojo ? ATT !! [1=SI 0=NO]\n");
	scanf (" %i", &color1);

	printf ("Ves el color azul? ATT !! [2=SI 0=NO]\n");
        scanf (" %i", &color2);

	printf ("Ves el color amarillo ATT !! [3=SI 0=NO]\n");
        scanf (" %i", &color3);

system ("clear");

	if (color1 == 1 && color2 == 2 && color3 == 0)
		printf ("\nSu color es morado\n");

	if (color1 == 1 && color2== 0 &&  color3 == 3)
		printf ("\nSu color es naranja\n");

	if (color1 == 1 && color2 == 0  && color3 == 0)
		printf ("\nSu color es el rojo\n");



	if (color1 == 0 && color2 == 2 && color3 == 0)
		printf ("\nSu color es el azul\n");

	if (color1 == 0 && color2 == 2 && color3 == 3)
		printf ("\nSu color es verde\n");



	if (color1 == 1 and color2 == 2 && color3 == 3)
		printf ("\nSu color es blanco\n");

	if (color1 == 0 and color2 == 0 && color3 == 3)
		printf ("\nSu color es amarillo\n");

	if (color1 == 0 and color2 == 0 && color3 == 0)
		printf ("\nSu color es negro\n");


	return EXIT_SUCCESS;
}


