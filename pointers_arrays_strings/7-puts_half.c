#include "main.h"

/**
 * puts_half - print half of strings
 * if odd arround int
 * @str: character array
 */

void puts_half(char *str)
{
	long int i, j, k;

	for (i = 0; str[i]; i++)
		;
	j = i % 2 != 0;
	k = j ? j + 1 : i;
	for (k = k / 2; str[k]; k++)
		_putchar(str[k]);
	_putchar('\n');
}
