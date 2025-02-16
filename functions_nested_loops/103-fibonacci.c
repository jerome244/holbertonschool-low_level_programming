#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int sum = 2, i = 1, j = 2, k = 0;

	while (k <= 4000000)
	{
		k = i + j;
		if (k % 2 == 0)
			sum += k;
		i = j;
		j = k;
	}
	printf("%ld\n", sum);
	return (0);
}
