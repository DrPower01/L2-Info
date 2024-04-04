/*
a) char a[] = "un\ndeux\ntrois\n";
Correction : Correct. Cette déclaration initialise une chaîne de caractères et ajoute des sauts de ligne. ( 15 octect

b) char b[12] = "un deux trois";
Correction : Incorrect. Cette déclaration initialise une chaîne de caractères avec une taille insuffisante pour stocker la phrase. Correction char b[14] = "un deux trois":

c) char c[] = 'abcdefg';
Correction : Incorrect. Pour initialiser une chaîne de caractères, vous devez utiliser des guillemets doubles ("), pas simples ('). Correction : char c[] = "abcdefg";

d) char d[10] = 'x';
Correction : Incorrect. La syntaxe est incorrecte pour l'initialisation d'une chaîne de caractères. Correction : char d[10] = "x";

e) char e[5] = "cinq";
Correction : Correct. (5 octets seront réservés en mémoire).

f) char f[] = "Cette " "phrase" "est coupée";
Correction : Correct. Cette déclaration initialise une chaîne de caractères en concaténant plusieurs parties de la chaîne. // 23 octets (y compris le caractère de fin de chaîne)

g) char g[2] = {'a', '\0'};
Correction : Correct. Cette déclaration initialise une chaîne de caractères avec la taille exacte nécessaire.

h) char h[4] = {'a', 'b', 'c'};
Correction : Correct.(4 octets seront réservés en mémoire).

i) char i[4] = "'o'";
Correction : Incorrect. Les guillemets simples autour de 'o' sont inutiles et entraînent une taille incorrecte de la chaîne. Correction : char i[2] = "o"; (2 octets seront réservés en mémoire).
*/

#include<stdio.h>

int main(){
	char f[] = "string";
	
	printf("taille en memoire :%d \n ",sizeof(f));
	printf("nombre de caractere :%d",strlen(f));
	
	return 0;
}
