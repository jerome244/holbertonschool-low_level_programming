#include <stdio.h>

/**
 * main - print number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if no error
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		argv++;
	}
	printf("%d\n", i - 1);
	return (0);
}
