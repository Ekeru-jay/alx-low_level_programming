#include <stdlib.h>
#include <stdio.h>

/**
 * first - prints before main
 * Return: no return.
 */

void __attribute__ ((constructor)) first()
{
	printf("you 're beat! and yet you, you must allow,\n");
	printf("I bore my house upon my bacck!\n");
}
