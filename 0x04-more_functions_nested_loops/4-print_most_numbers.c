#include "main.h"


/**
 * print_most_numbers - Entry point
 * Description: print the numbers 0 - 9, exept 2 and 4
 * Return: string
 */


void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');

		i++;
	}
	_putchar('\n');
}
