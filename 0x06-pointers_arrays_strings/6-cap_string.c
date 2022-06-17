#include "main.h"

/**
 * cap_string - function that capitalizes
 * all words of a string.
 *
 * @str: string tobe capitalized
 *
 * Return: char
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] i = '\0'; i++)
	{
		if (i == 0)
		{
			if ((str[i] > 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			continue;
		}

		if ((str[i] == '.') || (str[i] == ' '))
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				continue;
			}
		}
		if ((str[i] == '\t') || (str[i] == '\n'))
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				/*continue;*/
			}
		}
	}
	return (str);
}