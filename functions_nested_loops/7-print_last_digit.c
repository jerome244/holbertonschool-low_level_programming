#include "main.h"

/**
 * print_last_digit - print last digit
 * @i: integer
 * Return: last digit
 */

int print_last_digit(int i)
{
	if (i > 0)
	{
		return (_putchar((i % 10) + 48));
	}
	else
	{
		return (_putchar(((i % 10) - (i % 10) - (i % 10)) + 48));
	}
}
