/*
a) char a[] = "un\ndeux\ntrois\n";
Correction : Correct. Cette d�claration initialise une cha�ne de caract�res et ajoute des sauts de ligne. ( 15 octect

b) char b[12] = "un deux trois";
Correction : Incorrect. Cette d�claration initialise une cha�ne de caract�res avec une taille insuffisante pour stocker la phrase. Correction char b[14] = "un deux trois":

c) char c[] = 'abcdefg';
Correction : Incorrect. Pour initialiser une cha�ne de caract�res, vous devez utiliser des guillemets doubles ("), pas simples ('). Correction : char c[] = "abcdefg";

d) char d[10] = 'x';
Correction : Incorrect. La syntaxe est incorrecte pour l'initialisation d'une cha�ne de caract�res. Correction : char d[10] = "x";

e) char e[5] = "cinq";
Correction : Correct. (5 octets seront r�serv�s en m�moire).

f) char f[] = "Cette " "phrase" "est coup�e";
Correction : Correct. Cette d�claration initialise une cha�ne de caract�res en concat�nant plusieurs parties de la cha�ne. // 23 octets (y compris le caract�re de fin de cha�ne)

g) char g[2] = {'a', '\0'};
Correction : Correct. Cette d�claration initialise une cha�ne de caract�res avec la taille exacte n�cessaire.

h) char h[4] = {'a', 'b', 'c'};
Correction : Correct.(4 octets seront r�serv�s en m�moire).

i) char i[4] = "'o'";
Correction : Incorrect. Les guillemets simples autour de 'o' sont inutiles et entra�nent une taille incorrecte de la cha�ne. Correction : char i[2] = "o"; (2 octets seront r�serv�s en m�moire).
*/

#include<stdio.h>

int main(){
	char f[] = "string";
	
	printf("taille en memoire :%d \n ",sizeof(f));
	printf("nombre de caractere :%d",strlen(f));
	
	return 0;
}
