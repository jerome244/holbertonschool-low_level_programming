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
	char *temp = dest;
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (temp);
}
