#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k, l;

	j = 0, k = 1;
	l = j + k;
	printf("%d, %d, ", j, k);
	for (i = 3; i <= 50; i++)
	{
		if (i < 50)
		{
			printf("%d, ", l);
			j = k;
			k = l;
			l = j + k;
		}
		else
		{
			printf("%d\n", l);
		}
	}
	return (0);
}
