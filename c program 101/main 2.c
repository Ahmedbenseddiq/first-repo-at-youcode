#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() 
{
   
    float f; 
    float c; 

   
    printf("Entrez la température en Fahrenheit : "); 
    scanf("%f", &f); 

   
    c = (f - 32) / 1.8; 

    
    printf("La température en Celsius est : %.2f\n", c);

    
    if (c < 0)
    {
        printf("Il fait très froid !\n"); 
    }
    else if (c >= 0 && c < 15) 
        printf("Il fait froid !\n"); 
    }
    else if (c >= 15 && c < 25) 
        printf("Il fait bon !\n"); 
    }
    else if (c >= 25 && c < 35) 
    {
        printf("Il fait chaud !\n"); 
    }
    else
    {
        printf("Il fait très chaud !\n"); 

    return 0; 
}
