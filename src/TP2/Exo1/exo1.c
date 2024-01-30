/*
    Faites saisir une variable de type entier et indiquez 
    à l'utilisateur si celle-ci est strictement positive, 
    strictement négative ou nulle.

*/

#include <stdio.h>

int main (int argc, char* argv[])
{
    int value;
    printf("\n*********** Veuillez saisir un entier ****************\n");
    printf(">");
    scanf ("%d", &value);

    if (value > 0){ printf("%d est positif.\n", value);}
    else if (value < 0) { printf ("%d est negatif.\n", value);}
    else { printf ("%d est nul\n", value);}

    return 0;
}