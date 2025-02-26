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

	while (*src != '\0')
	{
		if (!'\n')
			*dest = *src;
			dest++;
			src++;
		else
		{
			*dest = *src;
			dest++;
			src++;
			_putchar('\n');
		}
	}
}
