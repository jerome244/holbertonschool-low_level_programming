#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long j, k, l;

	j = 0, k = 1;
	l = j + k;
	for (i = 3; i <= 52; i++)
	{
		if (l < 4000000)
		{
			if (l < 3524578)
			{
				printf("%ld, ", l);
				j = k;
				k = l;
				l = j + k;
			}
			else
			{
				printf("%ld\n", l);
                                j = k;
                                k = l;
                                l = j + k;
			}
		}
	}
	return (0);
}
