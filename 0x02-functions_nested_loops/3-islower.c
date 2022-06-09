#include "main.h"
#include <stdio.h>

/**
 *_islower - a function that
 * checks for lowercase character.
 *
 * @c: Character to be checked
 *
 * Return: 1 upon success.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
