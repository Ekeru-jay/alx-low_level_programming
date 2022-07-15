#include <stdlib.h>
#include <stdio.h>

/**
 * bmain - prints before main
 * Return: no return.
 */

void __attribute__ ((constructor)) bmain()
{
	printf("you 're beat! and yet you, you must allow");
	printf(",\nI bore my house upon my bacck!\n");
}
