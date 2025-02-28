#include "main.h"

/**
 * print_number - print number
 * @n: number
 */

void print_number(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('-');
		lastDigit = n % 10 * -1;
		n = n / -10;
		if (n > 0)
			print_number(n);
		_putchar('0' + lastDigit);
	}
	else if (n < 10)
		_putchar('0' + n % 10);
	else
	{
		print_number(n / 10);
		_putchar('0' + n % 10);
	}
}
