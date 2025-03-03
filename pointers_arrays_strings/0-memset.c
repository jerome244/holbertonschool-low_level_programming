#include "main.h"

/**
 * _memset - change content of char array
 * @s: original char array
 * @b: string for modify
 * @n: size of original array
 * Return: new char array content
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		s[i] = b;
	} 
	return (s);
}
