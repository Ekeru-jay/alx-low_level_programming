#include "main.h"
#include <string.h>

/**
 * reverse_array - function that
 * reverse an array.
 *
 * @a: array of integers
 *
 * @n: n of elements
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
