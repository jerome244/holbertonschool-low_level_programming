#include "main.h"

/**
 * print_triangle - print triangle
 * @size: int size
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < 2 * (size - i) - 1; j++)
			_putchar(' ');
		for (k = 0; k <= i; k++)
		{
			_putchar(35);
			_putchar(' ');
		}
		_putchar('\n');
	}
}
