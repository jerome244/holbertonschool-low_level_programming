#include "main.h"

/**
 * _strncat - concaten
 * @dest: str dest
 * @src: str src
 * @n: int number to concatenate
 * Return: concatenated str
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
