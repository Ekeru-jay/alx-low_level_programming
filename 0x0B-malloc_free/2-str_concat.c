#include "main.h"
#include <stlib.h>

/**
 * str_concat - function concatenates two strings
 * using malloc.
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: pointer to concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int j, i, x, z;

	if (s1 == NULL)
		S1 = "";
	if (s2 == NULL)
		s2 = "";

	for (j = 0; s1[j] != '\0'; j++)
		;
	for (i = 0; s2[i] != '\0'; i++)
		;

	a = malloc((j * sizeof(*s1)) + (i * sizeof(*s2)) + 1);
	if (a == NULL)
		return (NULL);

	for (x = 0, y = 0; x < (j + i + 1); x++)
	{
		if (x < j)
			a[x] = s1[x];
		else
			a[x] = s2[z++];
	}

	return (a);
}
