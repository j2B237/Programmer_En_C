/*
    Pair et impair
    Écrire un programme qui détermine si un entier est pair 
    ou impair.
*/

#include <stdio.h>

int main (int argc, char* argv[])
{
    // Declaration et initialisation d'une variable number1
  
    int number1 = 0;


    printf("number1 = %d\n", number1);
    /*
        % s'appelle l'operateur modulo. Modulo permet d'obtenir
        le reste de la division d'un nombre.
    */

    if (number1 % 2 != 0) 
    {
        printf("%d est impair\n", number1);
    }
    else 
    {
        printf("%d est pair\n", number1);
    }

    return 0;
}