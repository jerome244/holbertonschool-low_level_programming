#include "main.h"

/**
 * print_sign - print sign of a number
 * @n: integer argument
 * Result: 1 and print '+' if positive, 0 and print 0 if zero, -1 print -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

