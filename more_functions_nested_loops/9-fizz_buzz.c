#include "main.h"
#include <stdio.h>

/**
 * main - print multiples of 3 or 5 or both
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz ");
		else if (i % 5 == 0 && i % 3 != 0)
		{
			if (i < 100)
				printf("Buzz ");
			else
				printf("Buzz\n");
		}
		else if (i % 5 == 0 && i % 3 == 0)
			printf("FizzBuzz ");
		else
		{
			if (i < 100)
				printf("%d ", i);
		}
	}
	return (0);
}
