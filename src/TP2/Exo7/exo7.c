/*
	Écrire un programme qui, pour tout entier compris entre 1 et 10, 
	affiche sur une même ligne, les valeurs de cet entier, de son carré 
	et de son cube. L’affichage doit donc être équivalent à :
	1 1 1
	2 4 8
	3 9 27
	4 16 64
	5 25 125
	6 36 216
	7 49 343
	8 64 512
	9 81 729
	10 100 1000
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	for (int i = 0; i <= 10; i++)
	{
		printf("%d  %d  %d\n", (int)pow(i,1), (int)pow(i,2), (int)pow(i, 3));
	}
	return 0;
}