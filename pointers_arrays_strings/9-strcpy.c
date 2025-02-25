#include "main.h"

/**
 * _strcpy - pointer on function
 * copy a string into a char array dest
 * @dest: char array for dest
 * @src: char array of source
 * Return: char pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (j = 0; src[j]; j++)
		;
	for (i = 0; src[i]; i++)
	{
		if (i < j)
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}
	return (dest);
}
