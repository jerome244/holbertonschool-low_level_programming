#include "main.h"

/**
 * _strcmp - tell us which string is longer or shorter than the other one
 * @s1: first string
 * @s2: second string
 * Return:  sup to 0 if greater inf to 0 if lower 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'; i++)
		;
	return (*(s1 + i) - *(s2 + i));
}
