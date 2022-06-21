#include "main.h"
#include <string.h>

/**
 * _memset - function that fills
 * memory with a constant byte.
 *
 * @s: pointer to address to be filled
 *
 * @b: const for filling
 *
 * Return: returns s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n * sizeof(*s));

	return (s);
}
