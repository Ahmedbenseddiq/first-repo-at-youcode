#include <stdio.h>

int main()
{
    int a, b; // d�clarer deux variables enti�res
    printf("Entrez deux entiers: "); // afficher un message � l'utilisateur
    scanf("%d %d", &a, &b); // lire les deux entiers saisis au clavier

    // calculer et afficher les op�rations demand�es
    printf("%d + %d = %.2f\n", a, b, (float) a + b); 
    printf("%d - %d = %.2f\n", a, b, (float) a - b); 
    printf("%d * %d = %.2f\n", a, b, (float) a * b); 
    printf("%d / %d = %.2f\n", a, b, (float) a / b); 
    

    return 0;
}

