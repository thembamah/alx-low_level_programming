#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: print sign of a number
 * Return: int
 */


int print_sign(int n)
{
    if (n > 0)
    {
        _putchar('+');
        return (1);
    }
    else if (n < 0)
    {
        _putchar('-');
        return (-1);
    }

    _putchar('0');
    return (0);
}
