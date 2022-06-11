#include "main.h"

/**
 * print_number - function that prints numbers
 * 0 to 9 followed by a new line.
 *
 * Return: return nothing.
 */

void print_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
		_putchar(x);

	_putchar('\n');
}

