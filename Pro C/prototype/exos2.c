#include <stdio.h> 
#include <string.h>
/*
la fonction strcat permet de concatÚner deux chaune de caractere.
dans cette exercice deux chaine de caractere vide de taille 50 sont concatÚner dans  la chaine de caractere dest
*/

int main() {
char src[50], dest[50]; 

    strcat(dest, src);

    printf("Final destination string: |%s|\n", dest);

    return 0;
}
