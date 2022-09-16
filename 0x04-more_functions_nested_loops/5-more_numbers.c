#include "main.h"

/**
 * print_most_numbers - Entry point
 * Description: print the numbers 0 - 14, 10 times
 * Return: string
 */

void more_numbers(void)
{
	int c, i;

	c = 0;
	while (c < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
			i++;
		}
		c++;
		_putchar('\n');
	}
}
