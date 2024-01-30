/*
    Écrire un programme qui affiche
    le plus grand entre deux entiers
*/

#include <stdio.h>

int main (int argc, char* argv[])
{
    int number1 = 14;
    int number2 = 10;

    if (number1 > number2)
    {
        printf("%d est plus grande que %d\n", number1, number2);
    }
    else
    {
        printf("%d est plus petit que %d\n", number1, number2);
    }
    return 0;
}