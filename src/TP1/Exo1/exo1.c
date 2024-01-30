/*
	Ecrire un programme qui fait la somme, produit et la difference
	de deux entiers.
*/
#include <stdio.h>

int main(int argc, char* argv[])
{	
	const int x = 4;
	const int y = 6;
	int somme, produit, diff = 0;

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	somme = x + y;
	printf("La somme %d + %d = %d\n", x, y, somme);


	produit = x * y;
	printf("Le produit %d * %d = %d\n", x, y, produit);


	diff = x - y;
	printf("La difference %d - %d = %d\n", x, y, diff);
	return 0;
}
