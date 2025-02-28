#include <stdio.h>

/**
 * main - print prime numbers
 * Return: always 0 (Success)
 */

int main(void)
{
	long int n = 612852475143;
	long int c = 2;

	while (n > 1)
	{
		if (n % c == 0)
		{
			n /= c;
		}
		else
			c++;
	}
	printf("%ld", c);
	printf("\n");
	return (0);
}
