#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			printf("%d", i);
			if (i < 1023)
				printf(", ");
		}
	}
	printf("\n");
	return (0);
}
