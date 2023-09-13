#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float x1, y1, x2, y2;
	float distance;
	
	printf("Entrez les coordonnees du premier point (x1, y1): ");
    scanf("%f %f", &x1, &y1);
	
	pprintf("Entrez les coordonnees du deuxieme point (x2, y2): ");
    scanf("%f %f", &x2, &y2)
    
	distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	
	
	printf("La distance entre les deux points est %.2f\n", distance);

	
	
	return 0;
}
