#include "main.h"

/**
 * rot13 - encode a string into rot13 code
 * @s: string
 * Return: pointer string
 */

char *rot13(char *s)
{
	char offset, *r = s;

	while (*s)
	{
		offset = (*s & 32) + 65;
		if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
			*s = (*s - offset + 13) % 26 + offset;
		s++;
	}
	return (r);
}
