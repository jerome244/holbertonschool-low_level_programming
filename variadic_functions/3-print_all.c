#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print all char, int, float, and string parameters
 * ended by a newline character
 * @format: contains data types of parameters in order
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list parameters;
	char *string, *separator = "";

	if (format)
	{
		va_start(parameters, format);
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(parameters, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(parameters, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(parameters, double));
					break;
				case 's':
					string = va_arg(parameters, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", separator, string);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
		va_end(parameters);
	}
	printf("\n");
}
