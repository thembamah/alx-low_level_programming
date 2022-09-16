#include "main.h"


/**
 * _isupper - Entry point
 * Description: Checks for uppercase characters
 * Return: 1 if uppercase, else 0
 */


int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	return (0);
}
