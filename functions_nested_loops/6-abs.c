#include "main.h"

/**
 * _abs - print absolute value of a number
 * @n: integer arg
 * Return: abs number
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n - (n * 2));
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (0);
	}
}
