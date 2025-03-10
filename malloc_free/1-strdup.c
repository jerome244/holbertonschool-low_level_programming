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
 * _strdup - duplicate a string in allocated memory
 * @str: input string
 * Return: pointer to duplicated string
 */

char *_strdup(char *str)
{
	int size;
	char *ptr;
	char *dup_offset;

	/* Allocate memory for duplicate */
	size = _strlen(str);
	ptr = ((char *)malloc(sizeof(char) * size + 1));
	if (ptr == NULL)
		return ((char *) NULL);
	/* Copy string */
	dup_offset = ptr;
	while (*str)
	{
		*dup_offset = *str;
		dup_offset++;
		str++;
	}
	*dup_offset = '\0';
	return (ptr);
}
