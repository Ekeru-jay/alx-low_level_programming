#include "main.h"
#include "_putchar.c"

/**
 * print_number a function that
 * prints numbers from 0 to 9.
 *
 *
 *
 * Return: return nothing.
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
		_putchar('\n');
	}
}