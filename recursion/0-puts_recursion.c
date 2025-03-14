#include "main.h"

/**
 * _puts_recursion - print a string
 * followed by a newline
 *
 * @s: pointer from a string
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
