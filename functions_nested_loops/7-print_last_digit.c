#include "main.h"

/**
 * print_last_digit - print last digit
 * @i: integer
 * Return: last digit
 */

int print_last_digit(int i)
{
	int j = i % 10;

	if (j < 0)
		j *= -1;
	_putchar('0' + j);
	return (j);
}
