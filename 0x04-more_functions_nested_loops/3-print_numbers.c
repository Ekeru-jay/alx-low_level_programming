#include "main.h"

/**
 * print_number - function that prints numbers
 * 0 to 9 followed by a new line.
 *
 * Return: return nothing.
 */

void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
