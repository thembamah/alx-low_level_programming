#include "main.h"


/**
 * print_alphabet - Entry point
 * Description: prints lower case alpabet 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{

		for (char c = 'a'; c <= 'z'; c++)
			_putchar(c);

		_putchar('\n');

		i++;
	}
}
