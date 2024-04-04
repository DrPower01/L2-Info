#include <stdio.h>
/*

a) *P+2: La valeur point�e par P (qui est A[0]) est 12, donc *P+2 est �gal � 14.

b) *(P+2): La valeur � la position m�moire (P + 2*sizeof(int)) est A[2], donc *(P+2) est �gal � 34.

c) &P+1: L'adresse de P incr�ment�e de 1 est l'adresse suivante apr�s celle de P.

d) &A[4]-3: L'adresse de A[4] d�cr�ment�e de 3 est l'adresse de A[1].

e) A+3: L'adresse de A[3].

f) &A[7]-P: La diff�rence entre l'adresse de A[7] et l'adresse de P.

g) P+(*P-10): L'adresse suivante � celle point�e par P, d�cal�e de la diff�rence entre la valeur point�e par P et 10.

h) *(P+*(P+8)-A[7]): La valeur � l'adresse (P + *(P+8) - A[7]) est obtenue.

*/
int main() {
    int A[] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
    int *P;
    P = A;
	printf("a) P[3] = %d\n", P[3]);
    printf("a) *P+2 = %d\n", *P+2);
    printf("b) *(P+2) = %d\n", *(P+2));
    printf("c) &P+1 = %p\n", &P+1);
    printf("c) P+1 = %p\n", P+1);
    printf("d) &A[4]-3 = %p\n",&A[4]-3);
    printf("d) &A[4]-3 = %p\n",&A[1]);
    printf("e) A+3 = %p\n", A+3);
    printf("e) A+3 = %p\n", &A[3]);
    printf("f) &A[7]-P = %p\n", &A[7]-P);
    printf("g) P+(*P-10) = %p\n",P+(*P-10));
    printf("g2) P+2 = %d\n", *(P+2));
    printf("h) *(P+*(P+8)-A[7]) = %d\n", *(P+*(P+8)-A[7]));

    return 0;
}

