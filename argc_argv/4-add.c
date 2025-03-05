#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert string to integer
 * @s: string input
 * Return: int array
 */

int _atoi(char *s)
{
	int n, neg;

	neg = 0;
	n = 0;

	while (*s < '0' || *s > '9')
	{
		if (*s == '-')
			neg++;
		if (*s == '\n')
			return (0);
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		if (n < 0)
			n *= 10;
		n -= (int)(*s - '0');
		s++;
	}

	if (neg % 2 == 0)
		n *= -1;
	return (n);
}

/**
 * main - add ints
 * if character return 1
 * if no number return 0
 *
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 if error else 0
 */

int main (int argc, char *argv[])
{
	int sum, i;
	
	sum = 0;
	if(argc > 1)
	{
		for(i = 1; i < argc; i++)
		{
			if (_atoi(argv[i]) < 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += _atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
