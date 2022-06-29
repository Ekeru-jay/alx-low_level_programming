#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Function that duplicates
 * a string using malloc.
 *
 * @str: string to duplicate
 *
 * Return: pointer to a
 * duplicated string
 */

char *_strdup(char *str)
{
	char *a;
	int j, b;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		;

	a = malloc(j * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);

	for (b = 0; b < j; b++)
		a[b] = str[b];
	a[b] = '\0';

	return (a);
}
