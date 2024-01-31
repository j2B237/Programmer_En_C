/*
	Écrire un programme retournant la factorielle d’un nombre entier entré par
	l’utilisateur.
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[])
{
	int factoriel = 1;
	int value = 0;

	printf("Saisir un nombre entier >");
	scanf("%d", &value);

	printf("\n");

	if (value == 0) {printf("0 factoriel est egale a 1\n");}

	else if (value > 16) {printf("ERROR::LIMIT_CPU_REACH\n");}

	else
	{
		for (int i = 1; i <= value; i++)
			factoriel *= i;

		printf("factoriel de %d est egale a %d\n", value, factoriel);
	}

	return 0;
}