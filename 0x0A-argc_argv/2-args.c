#include "main.h"
#include <stdio.h>

/**
 * main - program entry point.
 *
 * @argc: The number of command
 * line arguments
 *
 * @argv: The number of command
 * line arguments
 *
 * Return: return 0.
 *
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
		printf("%s\n", argv[j]);
	return (0);
}
