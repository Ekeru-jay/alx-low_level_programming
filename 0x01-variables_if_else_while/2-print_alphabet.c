#include <stdio.h>
/**
* main - main function
*
* Return: End the program
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
		printf("%c", letter);
	printf("|n", letter);
	return (0);
}