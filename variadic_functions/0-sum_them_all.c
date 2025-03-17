#include <stdarg.h>

/**
 * sum_them_all - compute sum of all parameters
 * in va style
 * @n: number of parameters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list parameters;
	unsigned int i;
	int sum = 0;

	if (n <= 0)
		return (0);
	va_start(parameters, n);
	for (i = 0; i < n; i++)
		sum += va_arg(parameters, int);
	va_end(parameters);
	return (sum);
}
