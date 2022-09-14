#include "main.h"


/**
 * print_alphabet - Entry point
 * Description:  checks if character is a number
 * Return: int
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
