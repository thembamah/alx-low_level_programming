#include "main.h"


/**
 * print_alphabet - Entry point
 * Description: checks if character is lower case
 * Return: int
 */


int _islower(int c)
{

    for (int i = 'a'; i <= 'z'; i++)
    {

        if (c == i)
            return (1);
    }

    return (0);
}
