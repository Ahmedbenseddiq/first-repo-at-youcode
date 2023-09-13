#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float r,circonfreence;
	
	printf("saisir la valeur du rayon :");
	scanf("%f",&r);
	
	circonfreence=2*M_PI*r;
	
	printf("la circonfreence du cercle est : %f\n",circonfreence);
	return 0;
}
