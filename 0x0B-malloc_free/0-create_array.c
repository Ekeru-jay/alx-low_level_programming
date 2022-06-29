#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - function that
 * ceates an array of chars, and
 * initializes it with a
 * specific char.
 *
 * @size: number of byte you need to allocate.
 *
 * @c:
 *
 * Return: return NULL if size = 0
 * Else return a pointer to the
 * array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *pt;
	unsigned int j = 0;

	if (size == 0)
		return (NULL);
	pt = (char *) malloc(sizeof(char) * size);

	if (pt == NULL)
		return (0);

	while (j < size)
	{
		*(pt + j) = c;
		j++;
	}

	*(pt + j) = '\0';
	return (pt);
}
