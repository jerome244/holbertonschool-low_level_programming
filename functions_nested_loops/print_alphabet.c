#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c;
	char d = '\n';

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar(d);
}
