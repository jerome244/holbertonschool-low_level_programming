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
 * @str1: first string
 * @str2: second string
 * Return: pointer of string concatenated with malloc
 */

char *str_concat(char *str1, char *str2)
{
	int a, b, c, i = 0;
	char *ptr;

	if (str1 == NULL)
		str1 = "";
	if (str1 == NULL)
		str2 = "";
	a = _strlen(str1);
	b = _strlen(str2);
	c = a + b + 1;
	ptr = malloc(c);
	if (ptr == NULL)
                return (ptr);
	for (i = 0; i < a; i++)
	{
		ptr[i] = str1[i];
	}
	for (i = 0; i < b; i++)
	{
		ptr[i + a] = str2[i];
	}
	ptr[c - 1] = '\0';

	return (ptr);
}
