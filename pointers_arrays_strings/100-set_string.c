#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
/**
 * set_string - copy content of str1 into str2
 * @s: pointed string source
 * @to: pointed string destination
 */

void set_string(char **s, char *to)
{
	int d = _strlen(*s);

	to = malloc(d * sizeof(char));
	to = _strcpy(to, *s);
}
