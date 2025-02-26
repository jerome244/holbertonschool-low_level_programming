#include "main.h"

/**
 * _strcmp - tell us which string is longer or shorter than the other one
 * @s1: first string
 * @s2: second string
 * Return: an int > 0 if greater; < 0 if lower; 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i) != '\0' && *(s2 + i) != '\0')
		i++;
	j = *(s1 + i) - *(s2 + i);
	return (j);
}
