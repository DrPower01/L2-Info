#include <stdio.h>
/*
La valeur de a après l'exécution de ce programme sera 20. 
Cela s'explique par le fait que le pointeur p est utilisé pour accéder 
à l'adresse mémoire de la variable a via le déréférencement (*p),
et la valeur à cette adresse est alors modifiée en 20.
*/
int main() {
    // Initialisation de la variable a avec la valeur 10
    int a = 10;

    // Création d'un pointeur p qui pointe vers l'adresse de mémoire de la variable a
    int *p = &a;

    // Modification de la valeur à l'adresse mémoire pointée par le pointeur p
    *p = 20;

    // Affichage de la valeur de la variable a
    printf("a = %d\n", a);

    return 0;
}

