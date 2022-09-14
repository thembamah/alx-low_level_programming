#include "main.h"


/**
 * print_alphabet - Entry point
 * Description: print last digit of a number
 * Return: int
 */


int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (n < 0)
		lastdigit = lastdigit * -1;

	_putchar(lastdigit + '0');
	return (lastdigit);
}
