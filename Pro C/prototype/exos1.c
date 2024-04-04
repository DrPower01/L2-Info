#include <stdio.h>
/*


La valeur de p dans ce cas serait l'adresse mémoire de la variable a.

La valeur de *p serait le contenue de la variable a (la valeur de la variable a).

*/
int main() {
    // Initialisation de la variable a avec la valeur 10
    int a = 10;

    // Création d'un pointeur p qui pointe vers l'adresse de mémoire de la variable a
    int *p = &a;

    // Affichage de la valeur de la variable a en utilisant le pointeur p
    printf("a = %d\n", *p);
    
    // Affichage de l'adresse mémoire de la variable a en utilisant le pointeur p
    printf("adresse de a = %p\n", p);
    
    // Affichage de l'adresse mémoire de la variable a en utilisant le pointeur p
    printf("adresse de a = %p\n", &a);
    
        // Affichage de l'adresse mémoire de la variable a en utilisant le pointeur p
    printf("adresse de p = %p\n", &p);

    return 0;
}

