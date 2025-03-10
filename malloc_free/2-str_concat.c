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
	int s1, s2, s3, i, j;
	char *ptr;

	if (str1 == NULL)
		str1 = "";
	if (str1 == NULL)
		str2 = "";
	s1 = _strlen(str1);
	s2 = _strlen(str2);
	s3 = s1 + s2 + 1;
	ptr = malloc(s3);
	if (ptr == NULL)
		return (ptr);
	for (i = 0; i < s1; i++)
	{
		ptr[i] = str1[i];
	}
	for (j = 0; j < s1 + s2; i++, j++)
	{
		ptr[i] = str2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}
