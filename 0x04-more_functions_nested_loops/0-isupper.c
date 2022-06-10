i#include "main.h"

/**
 * _isupper - function that
 * checks for uppercase character.
 *
 * @c: Character to be checked
 *
 * Return: 1 upon succes.
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
