#include "main.h"


/**
 * print_alphabet - Entry point
 * Description: prints lower case alpabet
 * Return: void
 */


void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
