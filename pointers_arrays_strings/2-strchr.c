#include <stddef.h>

/**
 * _strchr - locate a character in a string
 * @s: string source
 * @c: character to find
 * Return: character found
 */

char *_strchr(char *s, char c)
{
	char ch;

	for (ch = c; *s != ch; ++s)
		if (*s == '\0')
			return (NULL);
	return ((char *)s);
}
