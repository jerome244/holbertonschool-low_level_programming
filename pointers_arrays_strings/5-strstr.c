#include <stddef.h>

/**
 * _strstr - locate a substring
 * @haystack: string to check
 * @needle: string to find
 * Return: string found or NULL if not
 */

char *_strstr(char *haystack, char *needle)
{
	const char *a;
	const char *b;

	b = needle;
	if (*b == 0)
	{
		return ((char *) haystack);
	}
	for ( ; *haystack != 0; haystack += 1)
	{
		if (*haystack != *b)
		{
			continue;
		}
		a = haystack;
		while (1)
		{
			if (*b == 0)
			{
				return ((char *) haystack);
			}
			if (*a++ != *b++)
			{
				break;
			}
		}
		b = needle;
	}
	return (NULL);
}
