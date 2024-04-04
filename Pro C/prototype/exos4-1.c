#include <stdio.h>

int main() {
    // Déclaration des variables
    int a = 10, b = 5;
    int *p;

    // Initialisation du pointeur p pour qu'il pointe sur la variable a
    p = &a;

    // Affichage des informations
    printf("Reconstitution d'un programme utilisant la notion de pointeur\n\n");
    printf("a = %d, b = %d sont deux variables entières et *p est un entier\n", a, b);
    printf("&a est l'adresse de a --> %p\n", &a);
    printf("&b est l'adresse de b --> %p\n",&b);
    printf("p stocke l'adresse de a --> %p\n", p);
    printf("*p stocke la valeur de a --> %d\n", *p);
    printf("&p est l'adresse de p --> %p\n",&p);

    // Modification de b
    b = 2 * (*p);

    printf("b stocke le double de la valeur de *p --> %d\n", b);

    // Modification du pointeur p pour qu'il pointe sur la variable b
    p = &b;

    printf("p pointe maintenant sur b --> %p\n", p);
    printf("*p stocke la valeur de b --> %d\n", *p);

    return 0;
}

