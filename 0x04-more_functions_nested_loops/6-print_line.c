#include "main.h"

/**
 * print_line - Entry point
 * Description: print line
 * Return: string
 */

void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar('_');

		c++;
	}
	_putchar('\n');
}
