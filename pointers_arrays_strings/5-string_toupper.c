#include "main.h"

/**
 * string_toupper - convert lowercase characters into uppercase
 * @s: pointer to a string
 * Return: pointer to a string
 */

char *string_toupper(char *s)
{
	char *temp;

	temp = s;
	do {
		if (*s <= 'z' && *s >= 'a')
			*s -= 32;
	} while (*s++);

	return (temp);
}
