#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char c;
	char d = "\n";
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar(d);
	return (0);
}
