#include "main.h"

/**
 * _isdigit - check if digit
 * @c: int
 * Return: 1 if true else 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
