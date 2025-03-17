#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings separated by a chosen separator string
 * ended by a newline
 * @separator: string to print between numbers
 * @n: number of integers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list parameters;

	va_start(parameters, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(parameters, char *);
		if (!string)
			string = "(nil)";
		printf("%s", string);
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(parameters);
}
