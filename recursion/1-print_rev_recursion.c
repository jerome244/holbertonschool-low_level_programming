#include "main.h"

/**
 * _print_rev_recursion - print a reverse string
 * in recursive style
 *
 * @s: point from a string
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
