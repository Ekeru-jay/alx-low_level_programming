#include "main.h"

/**
 * prints_number - function that prints
 * an integer.
 *
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	else
	{
		n1 = n;
	}

	if (n1 / 10)
		print_number(n1 / 10);

	_putchar(n1 % 10) + '0');
}
