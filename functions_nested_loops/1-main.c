#include "main.h"

/**
 * print_alphabet - display alphabet in lowercase
 * void
 *
 * Return: void
 */

void print_alphabet(void)
{
	char c;
	char d = '\n';

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar(d);
}
