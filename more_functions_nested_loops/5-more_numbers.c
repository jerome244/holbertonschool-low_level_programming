#include "main.h"

/**
 * more_numbers - print 0 to 14
 * 10 times
 */

void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
				k = j % 10;
			}
			else
			{
				k = j;
			}
			_putchar(k + '0');
		}
		_putchar('\n');
	}
}
