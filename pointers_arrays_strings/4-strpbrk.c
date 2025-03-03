#include "main.h"

/**
 * _strpbrk - searches the string s for any of a set of bytes
 *
 * @s: String to be searched
 * @accept: Substring of bytes to search for
 * Return: Return a pointer to the byte in s that matches one of the bytes in
 * accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, check = 0, position = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				check = 1;
				position = i;
				break;
			}
		}
		if (check == 1)
		{
			break;
		}
	}
	if (position == 0)
	{
		return ('\0');
	}
	else
	{
		return (s + position);
	}
}
