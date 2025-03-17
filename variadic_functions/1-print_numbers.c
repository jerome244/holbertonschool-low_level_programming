#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers separated by separator string
 * ended by a newline at the end of the function
 * @separator: string to print between numbers
 * if separator is NULL don't print it
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list params;

	va_start(params, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(params, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
