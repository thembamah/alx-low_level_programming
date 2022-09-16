#include "main.h"

/**
 * _isdigit - Entry point
 * Description: Checks if number is a digit
 * Return: 1 if uppercase, else 0
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	return (0);
}
