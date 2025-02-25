#include "main.h"

/**
 * puts_half - print half of strings
 * if odd arround int
 * @str: character array
 */

void puts_half(char *str)
{
	int i, j;
	
	for (i = 0; str[i]; i++)
		;
	if (i % 2 == 0)
	{
		for (j = i / 2; str[j]; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = (i + 1) / 2; str[j]; j++)
		{
			_putchar(str[j]);
		}
	}
}
