#include "main.h"

/**
 * islower - shows 1 if the input is a
 * lowercase character. A nother case, shows
 * 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase character 0 fir the rest.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}