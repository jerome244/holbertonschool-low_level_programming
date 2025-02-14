#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
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
        char d = '\n';

        for (c = 'a'; c <= 'z'; c++)
                _putchar(c);
        _putchar(d);
}
