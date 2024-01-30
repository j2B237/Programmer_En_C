/*
	Ecrire un programme qui échange deux entiers et fait l'affichage 
	des entiers avant et après.
*/
#include <stdio.h>

int main(int argc, char* argv[])
{	
	int a = 10;
	int b = 20;
	int c = 0;


	printf("*********** Avant echange *********\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("\n");

	c = a;	
	a = b;
	b = c;

	printf("*********** Apres echange *********\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);


	return 0;
}
