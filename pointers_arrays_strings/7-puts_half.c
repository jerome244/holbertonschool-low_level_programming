#include "main.h"

/**
 * puts_half - print half of strings
 * if odd arround int
 * @str: character array
 */

void puts_half(char *str)
{
	long int i, j, k, l;

	for (i = 0; str[i]; i++)
		;
	j = i % 2 != 0;
	k = j ? j + 1 : i;
	l = k / 2;
	for (; str[l]; l++)
		_putchar(str[l]);
	_putchar('\n');
}
