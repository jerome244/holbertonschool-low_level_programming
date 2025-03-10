#include <stdlib.h>
#include <string.h>

/**
 * _strlen - return length of string
 * @s: array of char
 * Return: int
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * _strdup - duplicate a string into allocated memory
 * @str: input string
 * Return: pointer to duplicated string
 */

char *_strdup(char *str)
{
	int size;
	char *ptr;
	char *dup;

	if (str == NULL)
		return (NULL);
	size = _strlen(str);
	ptr = (malloc(sizeof(char) * size + 1));
	if (ptr == NULL)
		return (NULL);
	dup = ptr;
	while (*str)
	{
		*dup = *str;
		dup++;
		str++;
	}
	*dup = '\0';
	return (ptr);
}
