#include <stdio.h>
/*
La valeur de a apr�s l'ex�cution de ce programme sera 20. 
Cela s'explique par le fait que le pointeur p est utilis� pour acc�der 
� l'adresse m�moire de la variable a via le d�r�f�rencement (*p),
et la valeur � cette adresse est alors modifi�e en 20.
*/
int main() {
    // Initialisation de la variable a avec la valeur 10
    int a = 10;

    // Cr�ation d'un pointeur p qui pointe vers l'adresse de m�moire de la variable a
    int *p = &a;

    // Modification de la valeur � l'adresse m�moire point�e par le pointeur p
    *p = 20;

    // Affichage de la valeur de la variable a
    printf("a = %d\n", a);

    return 0;
}

