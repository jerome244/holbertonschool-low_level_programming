#include <string.h>
#include <stdio.h>
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
 * str_concat - concatenate 2 strings
 * malloc style
 * @s1: first string
 * @s2: second string
 * Return: pointer of string concatenated with malloc
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	ptr = malloc(len1 + len2 + 1);
	if (ptr == NULL)
		return (ptr);
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for ( ; i < len1 + len2; i++)
	{
		ptr[i] = s2[i - len1];
	}
	ptr[i] = '\0';
	return (ptr);
}
