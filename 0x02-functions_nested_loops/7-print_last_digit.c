#include "main.h"

int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (n < 0)
		lastdigit = lastdigit * -1;

	_putchar(lastdigit + '0');
	return (lastdigit);
}
