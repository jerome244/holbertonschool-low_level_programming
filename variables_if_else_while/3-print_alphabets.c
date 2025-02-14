#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int alphabet;
	int ALPHABET;

	for (alphabet = 97; alphabet <= 122; alphabet++)
		putchar(alphabet);
	
	for (ALPHABET = 65; ALPHABET < 91; ALPHABET++)
		putchar(ALPHABET);
	putchar('\n');
	return (0);
}
