#include <stdio.h> 
#include <string.h>
/*
  [fonction des chaines]
  strcpy() : copie une chaine dans autre
  strlen() : longueur d'une chaine (sans le caractere '\0')
  strcmp() : comparer deux chaines 
  strcat() : concat�ner deux chaines (fusionner)
  strstr() : chercher une chaine dans une autre  
  strchr() : chercher 1�re occurence du caract�re
  sprintf() : �crire dans une chaine
  sprintf(text,"Jason",5)
*/
int main()
{
char src[] = " Ali";
char dest[50] = "papa";
strcmp(dest, src);

// Affiche : "debutfin"
//printf(dest);
return 0;
}
