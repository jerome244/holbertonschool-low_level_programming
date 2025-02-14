#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - display alphabet in lowercase
 * void
 *
 * Return: void.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
        char c;
	char d = 'n';

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar(d);
}
