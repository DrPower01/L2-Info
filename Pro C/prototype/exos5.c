#include <stdio.h>
/*
Les compilateurs peuvent choisir d'allouer de l'espace pour 
les variables locales sur la pile d'exécution, et lorsqu'une fonction 
se termine, l'espace alloué pour ses variables locales peut être réutilisé 
par une autre fonction. 

L'important à retenir est que les adresses mémoire des variables locales 
ne sont valides que pendant la durée de vie de la fonction. Une fois la fonction terminée, 
l'espace mémoire peut être réutilisé par d'autres parties du programme.
*/


void Premiere(int aval) {
    int a;
    a = aval;

    printf("la valeur de a est : %d\n", a);
    printf("l'adresse de a est : %p\n",	&a);
}

void Deuxieme(int bval) {
	int b;
    printf("la valeur de b est : %d\n", b);
    printf("l'adresse de b est : %p\n", &b);
}

int main() {
    Premiere(3);
    Deuxieme(8);
    Deuxieme(17);
    return 0;
}

