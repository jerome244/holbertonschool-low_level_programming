#include "main.h"

/**
 * _strncpy - copy n number of a string
 * @dest: destination string
 * @src: source string
 * @n: number of character of the string to copy
 * Return: the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
