#include <stdio.h>

int main()
{
    int a, b; // déclarer deux variables entières
    printf("Entrez deux entiers: "); // afficher un message à l'utilisateur
    scanf("%d %d", &a, &b); // lire les deux entiers saisis au clavier

    // calculer et afficher les opérations demandées
    printf("%d + %d = %.2f\n", a, b, (float) a + b); 
    printf("%d - %d = %.2f\n", a, b, (float) a - b); 
    printf("%d * %d = %.2f\n", a, b, (float) a * b); 
    printf("%d / %d = %.2f\n", a, b, (float) a / b); 
    

    return 0;
}

