#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: integer type member
 * Return: 1 if true, 0 if false
 */

int _isalpha(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);	
	else if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}
