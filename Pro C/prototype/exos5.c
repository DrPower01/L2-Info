#include <stdio.h>
/*
Les compilateurs peuvent choisir d'allouer de l'espace pour 
les variables locales sur la pile d'ex�cution, et lorsqu'une fonction 
se termine, l'espace allou� pour ses variables locales peut �tre r�utilis� 
par une autre fonction. 

L'important � retenir est que les adresses m�moire des variables locales 
ne sont valides que pendant la dur�e de vie de la fonction. Une fois la fonction termin�e, 
l'espace m�moire peut �tre r�utilis� par d'autres parties du programme.
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

